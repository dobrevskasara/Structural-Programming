//Задача 12
//Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа.
//Функцијата како аргумент ја прима низата, за која се бара бројот на позитивни броеви и вкупниот
//број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:
//int BrojPozitivni(int niza[], int n);
//Да се напише и функција main() за тестирање на функцијата BrojPozitivni.

#include <iostream>
using namespace std;

int positiveNumbers(int *array, int n){
    int counter=0;
    if(*array>0){
        counter=1;
    }
    if(n==0){
        return counter;
    }
    return counter+ positiveNumbers(array+1,n-1);
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int result= positiveNumbers(array,n-1);
    cout<<result;
    return 0;
}
