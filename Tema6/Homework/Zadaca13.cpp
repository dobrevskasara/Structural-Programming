//Задача 13
//Напиши програма каде ќе се внеси низа од n елементи. Изврши трансформација
//така што два соседни елементи ќе си ги заменат местата. Новодобиената низа да
//се отпечати.

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
    cout<<endl;
    cout<<"Array: ";
    printArray(array,n);
    for (int i=0;i<n-1;i+=2) {
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }
    cout<<endl;
    cout<<"Transformed array: ";
    printArray(array,n);
    return 0;
}
