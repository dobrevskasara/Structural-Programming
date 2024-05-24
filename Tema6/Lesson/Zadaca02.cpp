//Задача 2
//Напиши програма каде преку тастатура се внесува еден број n (n<100), кој
//претставува должина на низа составена од n природни броеви.
//Внеси n-броеви преку тастатура и отпечати ја добиената низа.
//а. Напиши функција која за ќе ја пронајди сумата на сите броеви во низата.
//Отпечати ја вратената вредност од функцијата.
//б. Напиши функција која за дадена низа ќе ја пронајди просечната вредност на
//сите броеви во низата. Отпечати ја вратената вредност од функцијата.

#include <iostream>
using namespace std;

int findSum(int array[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
    }
    return sum;
}

float findAverage(int array[], int n){
    int sum = findSum(array, n);
    float average = sum*1.0 /n;
    return average;
}

int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"Sum of elements in this array is: "<<findSum(array, n)<<endl;
    cout<<"Average is: "<<findAverage(array,n);
}
