//Задача 14
//Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50).
//Програмата треба да ја трансформира вчитаната матрица во нова матрица B, така што сите елементи десно од N-тата
//колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие матрица
//со 2 * N редици x N колони.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[50][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[100][100], int n, int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cin>>n;
    m=2*n;
    int matrix[100][100];
    int newMatrix[100][100];
    insertMatrix(matrix,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            newMatrix[i][j]=matrix[i][j];
        }
    }
    for(int i=n;i<m;i++){
        for(int j=0;j<n;j++){
            newMatrix[i][j]=matrix[i-n][j+n];
        }
    }
    printMatrix(newMatrix,n,m);
    return 0;
}
