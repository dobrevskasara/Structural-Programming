//Задача 8
//Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред и ќе ја
//определи сумата на главна дијагонала и сумата на споредна дијагонала. Двете суми да се
//отпечатат.

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

void sums(int matrix[5][5], int n, int m){
    int sumMainDiagonal=0;
    int sumSecondDiagonal=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                sumMainDiagonal+=matrix[i][j];
            }
            if(i+j==n-1){
                sumSecondDiagonal+=matrix[i][j];
            }
        }
    }
    cout<<"Sum of elements on main diagonal is: "<<sumMainDiagonal<<endl;
    cout<<"Sum of elements on second diagonal is: "<<sumSecondDiagonal;
}

int main(){
    int matrix[5][5];
    insertMatrix(matrix,5,5);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,5,5);
    sums(matrix,5,5);
    return 0;
}
