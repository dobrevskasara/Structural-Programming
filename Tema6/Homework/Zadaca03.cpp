//Задача 3
//Напиши програма каде преку тастатура ќе се внеси низа од 20 природни броеви и
//ќе се отпечатат сите елементи кои имаат поголема вредност од својата позиција.

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

void printElementsGreaterThanPosition(int array[], int n){
    for(int i=0;i<n;i++){
        if(array[i]>i){
            cout<<array[i]<<" ";
        }
    }
}

int main(){
    int n=20;
    int array[n];
    int i;
    fillArray(array,n);
    cout<<"Array: ";
    printArray(array,n);
    cout<<endl;
    cout<<"Elements: ";
    printElementsGreaterThanPosition(array,n);
    return 0;
}
