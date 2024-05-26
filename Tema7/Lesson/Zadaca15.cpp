//Задача 15
//Да се напиши програма со која ќе може да се добие матрица од n-ти ред (за даден
//n преку тастатура) како следната:
//1 2 3
//4 5 6
//7 8 9
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
    for(int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            matrix[i][j]=i*n+j+1;
        }
    }
    printMatrix(matrix,n,n);
    return 0;
}
