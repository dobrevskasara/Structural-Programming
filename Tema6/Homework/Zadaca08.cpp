//Задача 8
//Напиши програма каде ќе се внесат две низи од по 10 елементи и ќе се определи
//сумата од производите на вредностите по позиции. Резултатот да се отпечати.

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

int findSumOfProduct(int firstArray[], int secondArray[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=firstArray[i]*secondArray[i];
    }
    return sum;
}

int main(){
    int n=10;
    int firstArray[n], secondArray[n];
    fillArray(firstArray,n);
    fillArray(secondArray,n);
    cout<<"First array: ";
    printArray(firstArray, n);
    cout<<endl;
    cout<<"Second array: ";
    printArray(secondArray,n);
    cout<<endl;
    cout<<"Sum of products: "<<findSumOfProduct(firstArray,secondArray,n);
    return 0;
}
