//Задача 7
//Напиши програма каде преку тастатура ќе се внеси низа од n природни броеви.
//Потребно е да се најде максималниот елемент и неговата позиција во низата и
//минималниот елемент и неговата позиција во низата. Резултатот да се отпечати.

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

void findMaxElement(int array[], int n, int &maxElement, int &maxIndex){
    maxElement=array[0];
    maxIndex=0;
    for(int i=0;i<n;i++){
        if(array[i]>maxElement){
            maxElement=array[i];
            maxIndex=i;
        }
    }
}

void findMinElement(int array[], int n, int &minElement, int &minIndex){
    minElement=array[0];
    minIndex=0;
    for(int i=0;i<n;i++){
        if(array[i]<minElement){
            minElement=array[i];
            minIndex=i;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    fillArray(array,n);
    cout<<"Array: ";
    printArray(array,n);
    cout<<endl;

    int maxElement, maxIndex;
    findMaxElement(array, n, maxElement, maxIndex);
    int minElement, minIndex;
    findMinElement(array, n, minElement, minIndex);
    cout<<"Max element: "<<maxElement<<endl;
    cout<<"Max element index: "<<maxIndex<<endl;
    cout<<"Min element: "<<minElement<<endl;
    cout<<"Min element index: "<<minIndex;
    return 0;
}
