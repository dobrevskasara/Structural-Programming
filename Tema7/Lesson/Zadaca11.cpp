//Задача 11
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//n-ти ред така што елементите на споредна дијагонала ќе имаат вредност 0,
//елементите под споредна дијагонала ќе имаат вредност -1, и елементите над
//споредна дијагонала ќе имаат вредност 1. Резултантната матрица да се отпечати.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int matrix[10][10];
    insertMatrix(matrix,n,n);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,n,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                matrix[i][j]=0;
            }
            else if(i+j<n-1){
                matrix[i][j]=1;
            }
            else if(i+j>n-1){
                matrix[i][j]=-1;
            }
        }
    }
    cout<<"Transformed matrix: "<<endl;
    printMatrix(matrix,n,n);
    return 0;
}
