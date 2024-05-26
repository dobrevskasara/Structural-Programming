//Задача 12
//Да се напиши програма со која ќе се креира матрица од 3-ти ред како следната
//0 1 2
//10 11 12
//20 21 22
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

int main(){
    int matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix[i][j]=10*i+j;
        }
    }
    printMatrix(matrix,3,3);
}
