//Задача 4
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//n-ти ред и да се определи минималниот елемент и неговите позиции. Резултатот
//да се отпечати.

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

void findMin(int matrix[][10], int n, int m){
    int minElement=matrix[0][0];
    int minIndexI=0;
    int minIndexJ=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(minElement>matrix[i][j]){
                minElement=matrix[i][j];
                minIndexI=i;
                minIndexJ=j;
            }
        }
    }
    cout<<"Min element: "<<minElement<<" with position: "<<minIndexI<<" and "<<minIndexJ;
}

int main(){
    int n;
    cin>>n;
    int matrix[10][10];
    insertMatrix(matrix,n,n);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,n,n);
    findMin(matrix,n,n);
    return 0;
}
