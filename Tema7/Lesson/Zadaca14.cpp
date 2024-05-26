//Задача 14
//Да се напиши програма со која ќе може да се добие матрица од n-ти ред (за даден
//n преку тастатура) како следната:
//1 1 1 1
//1 0 0 1
//1 0 0 1
//1 1 1 1
//Резултатот да се отпечати.

#include <iostream>
using namespace std;

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
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1) {
                matrix[i][j]=1;
            }
            else{
                matrix[i][j]=0;
            }
        }
    }
    printMatrix(matrix, n,n);
    return 0;
}
