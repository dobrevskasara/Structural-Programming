//Задача 5
//Напиши програма која од стандарден влез ќе прочита број на елементи (n<100)
//што ќе ги содржи една низа од природни броеви.
//Од стандарден влез внеси ги n-те броеви. Програмата да го пресмета збирот на
//парните елементи во низата и збирот на непарните елементи во низата. Резултатот
//да се испечати.

#include <iostream>
using namespace std;

void fillArray(int array[], int n){
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
}

void printArray(int array[], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    fillArray(array, n);
    printArray(array, n);
    int sumEven=0;
    int sumOdd=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            sumEven+=array[i];
        }
        else{
            sumOdd+=array[i];
        }
    }
    cout<<endl;
    cout<<"Sum even elements: "<<sumEven<<endl;
    cout<<"Sum odd elements: "<<sumOdd;
    return 0;
}
