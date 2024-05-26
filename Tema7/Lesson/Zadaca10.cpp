//Задача 10
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//n-ти ред и да се одреди производот од елементите кои се наоѓаат под главна
//дијагонала и сумата од елементите кои се наоѓаат под споредна дијагонала.
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

int productElementsUnderMain(int matrix[][10], int n, int m){
    int product=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i>j){
                product*=matrix[i][j];
            }
        }
    }
    return product;
}

int sumElementsUnderSecond(int matrix[][10], int n, int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+j>=n){
                sum+=matrix[i][j];
            }
        }
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int matrix[10][10];
    insertMatrix(matrix,n,n);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,n,n);
    cout<<"Product of elements under main diagonal: "<<productElementsUnderMain(matrix,n,n)<<endl;
    cout<<"Sum of elements under second diagonal: "<<sumElementsUnderSecond(matrix, n,n);
    return 0;
}
