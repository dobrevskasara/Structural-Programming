//Задача 2
//На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1)
//што означува колку броеви следуваат по него во истиот ред. Да се напише програма која на СИ за секој ред ќе
//го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита бројот 0.

#include <iostream>
using namespace std;

int mainDigit(int number){
    if(number/10==0) {
        return number;
    }
    return mainDigit(number/10);
}

void insertArrayAndFindMainDigit(int array[], int n){
    int number;
    int mainDigitNum;
    int maxIndex=0;
    int maxMainDigit=0;
    for(int i=0;i<n;i++){
        cin>>number;
        array[i]=number;
        mainDigitNum=mainDigit(number);
        if(mainDigitNum>maxMainDigit){
            maxMainDigit=mainDigitNum;
            maxIndex=i;
        }
    }
    cout<<array[maxIndex]<<endl;
}

int main(){
    int number;
    int array[200];
    cin>>number;
    while(number!=0){
        insertArrayAndFindMainDigit(array,number);
        cin>>number;
    }
    return 0;
}
