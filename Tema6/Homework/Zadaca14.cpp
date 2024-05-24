//Задача 14
//Напиши програма каде ќе се внеси низа од n елементи и ќе се направи
//трансформација т.ш местата ќе си ги заменат прв со последен елемент, втор со
//претпоследен итн. Резултатот да се отпечати.

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
    fillArray(array,n);
    cout<<endl;
    cout<<"Array: ";
    printArray(array,n);
    for(int i=0;i<n/2;i++){
        int temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
    cout<<endl;
    cout<<"Transform array: ";
    printArray(array,n);
    return 0;
}
