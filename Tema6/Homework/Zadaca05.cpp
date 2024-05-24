//Задача 5
//Напиши програма каде прелку тастатура ќе се внеси низа од 20 природни броеви и
//ќе се пресмета производот од сите броеви кои се наоѓаат на парна позиција и
//имаат парна вредност и сумата од сите броеви кои се наоѓаат на позиција делива
//со 3 и имаат непарна вредност. Резултатот да се отпечати.

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

int productEvenPositionEvenNumbers(int array[], int n){
    int product=1;
    for(int i=0;i<n;i++){
        if(i%2==0 && array[i]%2==0){
            product*=array[i];
        }
    }
    return product;
}

int sumPositionDivisibleWith3OddValue(int array[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(i%3==0 && array[i]%2!=0){
            sum+=array[i];
        }
    }
    return sum;
}

int main(){
    int n=20;
    int array[n];
    fillArray(array,n);
    cout<<"Array: ";
    printArray(array,n);
    cout<<endl;
    cout<<"Product of even numbers on even positions is: "<<productEvenPositionEvenNumbers(array,n)<<endl;
    cout<<"Sum of odd numbers on position divisible with 3: "<<sumPositionDivisibleWith3OddValue(array,n);
    return 0;
}
