//Задача 6
//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//n-ти ред и да се определи минимален елемент во 2-ра колона. Резултатот да се
//отпечати.

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
    if(n<2){
        cout<<"No second coloumn! No min element!";
    }
    else{
        int minElement=matrix[0][1];
        for(int i=0;i<n;i++){
            if(minElement>matrix[i][1]){
                minElement=matrix[i][1];
            }
        }
        cout<<"Min element in second coloumn is: "<<minElement;
    }
    return 0;
}
