//Задача 3
//Напиши програма која од стандарден влез ќе прочита број на елементи (n < 100)
//што ќе ги содржи една низа од природни броеви.
//Од стандарден влез внеси ги n-те броеви.
//Програмата е потребно да ги промени местата на минималната и максималната
//вредност во низата.

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

int transformArray(int array[], int n){
    int maxElement=array[0];
    int minElement=array[0];
    int maxIndex=0;
    int minIndex=0;

    for(int i=0;i<n;i++){
        if(array[i]>maxElement){
            maxElement=array[i];
            maxIndex=i;
        }
    }

    for(int i=0;i<n;i++){
        if(array[i]<minElement){
            minElement=array[i];
            minIndex=i;
        }
    }

    array[minIndex]=maxElement;
    array[maxIndex]=minElement;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    fillArray(array, n);
    printArray(array,n);
    cout<<endl;
    cout<<"Transform array: "<<endl;
    transformArray(array,n);
    printArray(array,n);
    return 0;
}
