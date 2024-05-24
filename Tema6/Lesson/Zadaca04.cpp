//Задача 4
//Напиши програма која од стандарден влез ќе прочита број на елементи (n < 100)
//што ќе ги содржи една низа од природни броеви. Од стандарден влез внеси ги n-те
//броеви. Креирај нова низа која ќе биди трансформација на внесената низа така
//што секој елемент ќе биди трансформиран во својот број на единици. Отпечати ја
//добиената низа.

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

void transformArray(int array[], int n){
    for(int i=0;i<n;i++){
        array[i]=array[i]%10;
    }
}

int main(){
    int n;
    cin>>n;
    int array[n];
    fillArray(array,n);
    printArray(array,n);
    cout<<endl;
    cout<<"Transform array: "<<endl;
    transformArray(array,n);
    printArray(array,n);
    return 0;
}
