//Задача 10
//Напиши програма каде ќе се внесат две низи од по 10 елементи и ќе се формира
//нова низа од сумата на елементите по позиции. Отпечати ги трите низи.

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
    int n=10;
    int firstArray[n], secondArray[n], sumArray[n];
    fillArray(firstArray,n);
    fillArray(secondArray,n);
    cout<<endl;
    cout<<"First array: ";
    printArray(firstArray,n);
    cout<<endl;
    cout<<"Second array: ";
    printArray(secondArray,n);
    for(int i=0;i<n;i++){
        sumArray[i]=firstArray[i]+secondArray[i];
    }
    cout<<endl;
    cout<<"Sum array: ";
    printArray(sumArray,n);
    return 0;
}
