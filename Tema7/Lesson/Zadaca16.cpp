//Задача 16
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//n-ти ред и да се формира нова низа која како елементи ќе ја содржи сумата на
//елементите од секој ред.
//Резултатот да се отпечати.

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
    insertMatrix(matrix, n,n);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix, n,n);
    int array[n];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=matrix[i][j];
        }
        array[i]=sum;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
