//Задача 11
//Напиши програма каде ќе се добие матрица од 3-ти ред како следната:
//0 1 2
//1 2 3
//2 3 4
//Резултатот да се отпечати.

#include <iostream>
using namespace std;

void printMatrix(int matrix[3][3], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void create(int matrix[3][3], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix[i][j]=i+j;
        }
    }
}

int main(){
    int matrix[3][3];
    create(matrix,3,3);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,3,3);
    return 0;
}
