//Задача 12
//Напиши програма каде ќе се внеси низа од 10 елементи и ќе се формираат две
//нови низи, каде што првата низа ќе ги соддржи само елементите кои биле на парни
//позиции во внесената низа, а втората низа ќе ги содржи сите елементи кои биле на
//непарни позиции. Да се испечатат трите низи.

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
    int array[n], evenArray[n], oddArray[n];
    int evenIndex=0, oddIndex=0;
    fillArray(array,n);
    cout<<endl;
    cout<<"Array: ";
    printArray(array,n);
    for(int i=0;i<n;i++){
        if(i%2==0){
            evenArray[evenIndex++]=array[i];
        }
        else{
            oddArray[oddIndex++]=array[i];
        }
    }
    cout<<endl;
    cout<<"Array with even position: ";
    printArray(evenArray,evenIndex);
    cout<<endl;
    cout<<"Array with odd position: ";
    printArray(oddArray,oddIndex);
    return 0;
}
