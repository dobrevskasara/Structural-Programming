//Задача 12
//Напиши програма каде ќе се внеси матрица од 5-ти ред преку тастатура и ќе се
//формира низа од сумата по колони. Резултатот да се отпечати.

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

int main(){
    int array[5], matrix[5][5];
    insertMatrix(matrix,5,5);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,5,5);
    for(int j=0;j<5;j++){
        int element=0;
        for(int i=0;i<5;i++){
            element+=matrix[i][j];
        }
        array[j]=element;
    }
    cout<<"Array of sums in columns: "<<endl;
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
