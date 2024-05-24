//Задача 9
//Напиши програма каде ќе се внесат две низи од 10 елементи и да се определи
//производот на сумите на вредностите по позиции. Резултатот да се отпечати.

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

int findProductOfSums(int firstArray[], int secondArray[], int n){
    int product=1;
    for(int i=0;i<n;i++){
        product*=(firstArray[i]+secondArray[i]);
    }
    return product;
}

int main(){
    int n=10;
    int firstArray[n], secondArray[n];
    fillArray(firstArray, n);
    fillArray(secondArray,n);
    cout<<endl;
    cout<<"First array: ";
    printArray(firstArray, n);
    cout<<endl;
    cout<<"Second array: ";
    printArray(secondArray,n);
    cout<<endl;
    cout<<"Product of sum is: "<<findProductOfSums(firstArray, secondArray, n);
    return 0;
}
