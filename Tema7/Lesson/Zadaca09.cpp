//Задача 9
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//n-ти ред и да се избројат колку елементи се деливи со 4 кои се наоѓаат над
//главната дијагонала. Резултатот да се отпечати.

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

int numElements(int matrix[][10], int n, int m){
    int counter=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<j && matrix[i][j]%4==0){
                counter++;
            }
        }
    }
    return counter;
}

int main(){
    int n;
    cin>>n;
    int matrix[10][10];
    insertMatrix(matrix,n,n);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix, n,n );
    cout<<"Num of elements divisible with 4 above main diagonal is: "<<numElements(matrix, n, n);
    return 0;
}
