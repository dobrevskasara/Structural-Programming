//Задача 2
//Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10,
//m <= 10) што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси
//ги елементите на матрицата.
//Програмата е потребно да ги промени местата на минималната и максималната вредност
//во матрицата.

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

void chanceMinMax(int matrix[10][10], int n, int m){
    int maxElement=matrix[0][0];
    int maxIndexI=0;
    int maxIndexJ=0;

    int minElement=matrix[0][0];
    int minIndexI=0;
    int minIndexJ=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maxElement<matrix[i][j]){
                maxElement=matrix[i][j];
                maxIndexI=i;
                maxIndexJ=j;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(minElement>matrix[i][j]){
                minElement=matrix[i][j];
                minIndexI=i;
                minIndexJ=j;
            }
        }
    }

    cout<<"Max element is: "<<maxElement<<" with positions ["<<maxIndexI<<"]["<<maxIndexJ<<"]"<<endl;
    cout<<"Min element is: "<<minElement<<" with positions ["<<minIndexI<<"]["<<minIndexJ<<"]"<<endl;

    matrix[minIndexI][minIndexJ]=maxElement;
    matrix[maxIndexI][maxIndexJ]=minElement;
}

int main(){
    int n,m;
    cin>>n>>m;
    int matrix[10][10];
    insertMatrix(matrix,n,m);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,n,m);
    chanceMinMax(matrix,n,m);
    cout<<"Matrix after replacing the min and max: "<<endl;
    printMatrix(matrix,n,m);
    return 0;
}
