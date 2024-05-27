//Задача 13
//Напиши програма каде ќе се внеси матрица од 5-ти ред преку тастатура и ќе се
//определи максималната сума по редици. Резултатот да се отпечати.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[5][5], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[5][5], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void printArray(int array[5], int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int array[5], matrix[5][5];
    insertMatrix(matrix,5,5);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,5,5);

    for(int i=0;i<5;i++){
        int sum=0;
        for(int j=0;j<5;j++){
            sum+=matrix[i][j];
        }
        array[i]=sum;
    }
    printArray(array,5);
    int maxSum=array[0];
    int maxIndex=0;
    for(int i=1;i<5;i++){
        if(maxSum<array[i]){
            maxSum=array[i];
            maxIndex=i;
        }
    }
    cout<<endl;
    cout<<"Row "<<maxIndex<<" has max sum: "<<maxSum;
    return 0;
}
