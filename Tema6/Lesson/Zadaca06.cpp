//Задача 6
//Напиши програма која од стандарден влез ќе прочита број на елементи (n<100)
//што ќе ги содржи една низа од природни броеви. Од стандарден влез внеси ги n-те
//броеви. Програмата е потребно да ги избрише дупликатите од низата. Резултатот
//да се испечати.

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

bool duplicate(int array[], int n, int number){
    if(n==0){
        return 0;
    }
    for (int i=0;i<n;i++) {
        if(number==array[i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    fillArray(array,n);
    printArray(array,n);
    int arrayWithoutDuplicate[n];
    int indexWithoutDuplicate=0;

    for(int i=0;i<n;i++){
        if(!duplicate(arrayWithoutDuplicate,indexWithoutDuplicate,array[i])){
                arrayWithoutDuplicate[indexWithoutDuplicate]=array[i];
                indexWithoutDuplicate++;
            }
    }
    cout<<endl;
    cout<<"Array without duplicate: ";
    printArray(arrayWithoutDuplicate, indexWithoutDuplicate);
    return 0;
}
