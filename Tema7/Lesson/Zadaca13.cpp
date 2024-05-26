//Задача 13
//Да се напиши програма со која ќе може да се добие матрица од 3-ти ред како
//следната:
//0 0 0
//0 1 2
//0 2 4
//Резултатот да се отпечати.


#include <iostream>
using namespace std;

void printMatrix(int matrix[3][3], int n, int m){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrix[i][j]=i*j;
        }
    }
    printMatrix(matrix,3,3);
    return 0;
}
