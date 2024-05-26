//Задача 8
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//n-ти реди да се определи производот од сите парни вредности кои се наоѓаат на
//споредна дијагонала. Резултатот да се отпечати.

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
    int productEvenValues=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1 && matrix[i][j]%2==0){
                productEvenValues*=matrix[i][j];
            }
        }
    }
    cout<<"Product of even values in second diagonal is: "<<productEvenValues;
    return 0;
}
