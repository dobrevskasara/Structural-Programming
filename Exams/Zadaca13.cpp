//Задача 13
//Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви),
//како и елементите на матрицата со димензии M x N (цели броеви). Да се напише програма што ќе ги
//промени редиците на матрицата на следниот начин:
//Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
//Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
//Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
//Променетата матрица да се испечати на екран.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int x, n, m;
    cin>>x>>n>>m;
    int matrix[100][100];
    insertMatrix(matrix,n,m);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=matrix[i][j];
        }
        int element;
        if(sum>x){
            element=1;
        }
        else if(sum<x){
            element=-1;
        }
        else if(sum==x){
            element=0;
        }
        for(int j=0;j<m;j++){
            matrix[i][j]=element;
        }
    }
    printMatrix(matrix,n,m);
    return 0;
}
