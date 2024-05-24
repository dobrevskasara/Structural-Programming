//Задача 6
//Напиши програма каде преку тастуатура ќе се внеси низа од n природни броеви.
//Потребно е да се определи полузбирот од сите вредности во низата кои се деливи
//со 4 и завршуваат на 6.

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

int sumValuesDivisibleWith4EndingWith6(int array[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(array[i]%4==0 && array[i]%10==6){ //za vrednostite delivi so 4, posledna cifra 6
            sum+=array[i];
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    fillArray(array,n);
    cout<<"Array: ";
    printArray(array,n);
    cout<<endl;
    int sum = sumValuesDivisibleWith4EndingWith6(array,n);
    float halfSum = (float)sum/2.0;
    cout<<"Half sum of elements with value divisible with 4 and ending with 6 is: "<<halfSum;
    return 0;
}
