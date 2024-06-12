//Задача 17
//Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
//Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност)
//на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата.
//Ако матрицата има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат
//во сумите (при непарен број на колони, средниот елемент влегува во двете суми!). Да се испечати на екран
//променетата матрица.

#include <iostream>
#include <cmath>
using namespace std;

void insertMatrix(int matrix[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int matrix[100][100];
    insertMatrix(matrix,n,m);
    for(int i=0;i<n;i++) {
        int firstSum=0;
        int secondSum=0;
        for (int j= 0; j < m/2; j++) {
            firstSum += matrix[i][j];
        }
        for(int j=(m+1)/2;j<m;j++){
            secondSum+=matrix[i][j];
        }
        int result= abs(firstSum-secondSum);
        if(m%2==0){
            matrix[i][m/2-1]=result;
            matrix[i][m/2]=result;
        } else{
            matrix[i][m/2]=result;
        }
    }
    printMatrix(matrix,n,m);
    return 0;
}
