//Задача 7
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//n-ти ред и да се определи сума на главна дијагонала. Резултатот да се отпечати.

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

int main(){
    int n;
    cin>>n;
    int matrix[10][10];
    insertMatrix(matrix,n,n);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,n,n);
    int sumMainDiagonal=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) {
            sumMainDiagonal+=matrix[i][j];
            }
        }
    }
    cout<<"Sum of elements in main diagonal is: "<<sumMainDiagonal;
    return 0;
}
