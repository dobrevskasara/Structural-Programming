//Задача 18
//За квадратна матрица А со димензии n x n, од стандарден влез се внесува бројот n (n > 2) и елементите на
//матрицата (реални броеви). Нека X e збирот од елементите под главната дијагонала во матрицата А.
//Нека Y е збирот од елементите под споредната дијагонала во матрицата А. Да се креира нова матрица B на следниот начин:
//сите елементи од главната дијагонала во матрицата B треба да имаат вредност X
//сите елементи од споредната дијагонала во матрицата B треба да имаат вредност Y
//ако даден елемент припаѓа и на главната и на споредната дијагонала во матрицата B, тогаш неговата вредност e X+Y
//сите останати елементи во матрицата B имаат вредност 0
//Новата матрица B да се испечати на стандарден излез.

#include <iostream>
using namespace std;

void insertMatrix(double matrix[100][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(double matrix[100][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    double matrix[100][100];
    double newMatrix[100][100];
    insertMatrix(matrix,n);
    double x=0;
    double y=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i>j){
                x+=matrix[i][j];
            }
            if(i+j>n-1){
                y+=matrix[i][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && i+j==n-1){
                newMatrix[i][j]=x+y;
            }
            else if(i==j){
                newMatrix[i][j]=x;
            }
            else if(i+j==n-1){
                newMatrix[i][j]=y;
            }
            else{
                newMatrix[i][j]=0;
            }
        }
    }
    printMatrix(newMatrix,n);
    return 0;
}
