//Задача 2
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//5-ти ред и да се определи полузбир од сите вредности деливи со 10. Резултатот да
//се отпечати

#include <iostream>
using namespace std;

void insertMatrix(int matrix[][5], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][5], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

float halfSum(int matrix[][5], int n, int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]%10==0){
                sum+=matrix[i][j];
            }
        }
    }
    return (float)sum/2.0;
}

int main(){
    int matrix[5][5];
    insertMatrix(matrix,5,5);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,5,5);
    cout<<"Half sum of values divisible with 10 is: "<<halfSum(matrix,5,5);
    return 0;
}
