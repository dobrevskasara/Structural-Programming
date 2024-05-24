//Задача 7
//Напиши програма која од стандарден влез ќе прочита број на елементи (n<100)
//што ќе ги содржи една низа од природни броеви.
//Програмата е потребно да провери дали дадената низа е строго растечка, строго
//опаѓачка или ниту строго растечка ниту строго опаѓачка. Резултатот да се испечати.

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
    printArray(array,n);
    cout<<endl;
    bool isIncreasing=1;
    bool isDecreasing=1;
    for(int i=0;i<n-1;i++){
        if(array[i]<=array[i+1]){
            isDecreasing=0;
        }
        else if(array[i]>=array[i+1]){
            isIncreasing=0;
        }
    }

    if(isIncreasing){
        cout<<"Strongly increasing array!";
    }
    else if(isDecreasing){
        cout<<"Strongly decreasing array!";
    }
    else{
        cout<<"Nor strongly increasing, nor strongy decreasing!";
    }
    return 0;
}
