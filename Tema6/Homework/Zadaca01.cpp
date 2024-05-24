//Задача 1
//Напиши програма каде преку тастатура ќе се внеси низа од 10 природни броеви и
//ќе се пресмета збир на сите парни вредности. Резултатот да се отпечати на екран.

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

int findSumEvenValues(int array[], int n){
    int sumEven=0;
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            sumEven+=array[i];
        }
    }
    return sumEven;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    fillArray(array,n);
    printArray(array,n);
    cout<<endl;
    cout<<"Sum of even elements in this array is: "<<findSumEvenValues(array,n);
    return 0;
}
