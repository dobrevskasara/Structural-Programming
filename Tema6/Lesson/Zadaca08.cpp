//Задача 8
//Напиши програма која од стандарден влез ќе прочита две низи од цели броеви.
//Програмата е потребно да провери дали двете низи се еднакви.
//Да се испечати резултатот од споредбата.

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
    int firstIndex, secondIndex;
    cin>>firstIndex>>secondIndex;
    int firstArray[firstIndex];
    int secondArray[secondIndex];
    bool equalArrays=1;
    fillArray(firstArray, firstIndex);
    fillArray(secondArray, secondIndex);
    cout<<"First array: ";
    printArray(firstArray,firstIndex);
    cout<<endl;
    cout<<"Second array: ";
    printArray(secondArray, secondIndex);
    if(firstIndex!=secondIndex){
        equalArrays=0;
    }
    for(int i=0;i<firstIndex;i++){
        if(firstArray[i]!=secondArray[i]) {
            equalArrays = 0;
        }
    }
    cout<<endl;
    if(equalArrays){
        cout<<"Equal arrays!";
    }
    else{
        cout<<"Not equal arrays!";
    }
    return 0;
}
