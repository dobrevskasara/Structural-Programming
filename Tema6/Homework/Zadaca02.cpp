//Задача 2
//Напиши програма каде преку тастатура ќе се внеси низа од 10 природни броеви и
//ќе се избројат колку елементи се наоѓаат во интервал [10, 40]. Резултатот да се
//отпечати.

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

int numElements(int array[], int n){
    int counter=0;
    for(int i=0;i<n;i++){
        if(array[i]>=10 && array[i]<=40){
            counter++;
        }
    }
    return counter;
}

int main(){
    int n=10;
    int array[n];
    fillArray(array,n);
    printArray(array,n);
    cout<<endl;
    cout<<"Num of elements in interval [10,40] is: "<<numElements(array,n);
    return 0;
}
