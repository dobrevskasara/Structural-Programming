//Задача 7
//Напиши програма која од стандарден влез ќе прочита две матрици од природни броеви.
//Програмата е потребно да провери дали двете матрици се еднакви. Да се испечати
//резултатот од споредбата.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[10][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[10][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main(){
    int n1,m1,n2,m2;
    cin>>n1>>m1>>n2>>m2;
    int firstMatrix[10][10], secondMatrix[10][10];
    insertMatrix(firstMatrix,n1,m1);
    insertMatrix(secondMatrix,n2,m2);
    cout<<"First matrix: "<<endl;
    printMatrix(firstMatrix,n1,m1);
    cout<<"Second matrix: "<<endl;
    printMatrix(secondMatrix,n2,m2);
    bool equalMatrix=1;
    if(n1!=n2 && m1!=m2){
        equalMatrix=0;
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            if(firstMatrix[i][j]!= secondMatrix[i][j]){
                equalMatrix=0;
            }
        }
    }
    if(equalMatrix){
        cout<<"Equal matrices!";
    }
    else{
        cout<<"Not equal matrices!";
    }
    return 0;
}
