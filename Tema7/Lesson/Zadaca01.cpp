//Задача 1
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//3х4 и да се определи сумата на сите парни вредности. Резултатот да се отпечати.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[][4], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[][4], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int sumEvenValues(int matrix[][4], int n, int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]%2==0){
                sum+=matrix[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int matrix[3][4];
    insertMatrix(matrix, 3, 4);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,3,4);
    cout<<"Sum of even values: "<<sumEvenValues(matrix,3,4);
}
