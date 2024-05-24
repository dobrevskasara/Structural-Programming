//Задача 4
//Напиши програма каде ќе се внеси низа од 20 природни броеви и ќе се отпечатат
//по 5 броеви во ред.

#include <iostream>
using namespace std;

void fillArray(int array[], int n){
    for(int i=1;i<=n;i++){
        cin>>array[i];
    }
}

void printArray(int array[], int n){
    for(int i=1;i<=n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n=20;
    int array[n];
    fillArray(array,n);
    cout<<"Array: ";
    printArray(array,n);
    cout<<endl;
    for(int i=1;i<=n;i++){
        if(i%5==0){
            cout<<array[i];
            cout<<endl;
        }
        else{
            cout<<array[i]<<" ";
        }
    }
    return 0;
}
