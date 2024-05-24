//Задача 11
//Напиши програма каде ќе се внесат две низи од по 10 елементи и ќе се формира
//нова низа од поголемата вредност по позиции. Отпечати ги трите низи.

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
    int firstArray[n], secondArray[n], greaterElementArray[n];
    fillArray(firstArray,n);
    fillArray(secondArray,n);
    cout<<endl;
    cout<<"First array: ";
    printArray(firstArray,n);
    cout<<endl;
    cout<<"Second array: ";
    printArray(secondArray,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        if(firstArray[i]>secondArray[i]){
            greaterElementArray[i]=firstArray[i];
        }
        else{
            greaterElementArray[i]=secondArray[i];
        }
    }
    cout<<"Array with greater elements: ";
    printArray(greaterElementArray,n);
    return 0;
}
