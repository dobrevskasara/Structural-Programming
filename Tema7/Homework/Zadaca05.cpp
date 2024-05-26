//Задача 5
//Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10,
//m <= 10) што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси
//ги елементите на матрицата.
//Програмата е потребно да креира нова матрица која ќе ги содржи елементите од
//матрицата, но дупликатите да бидат заменети со -1. Резултатот да се испечати.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[10][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[10][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

bool duplicate(int existElement, int matrix[10][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(existElement==matrix[i][j]){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n, m;
    cin>>n>>m;
    int matrix[10][10], newMatrix[10][10];
    insertMatrix(matrix, n,m);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            newMatrix[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!duplicate(matrix[i][j], newMatrix,n,m)){
                newMatrix[i][j]=matrix[i][j];
            }
        }
    }
    cout<<"Matrix after chancing the duplicate is: "<<endl;
    printMatrix(newMatrix,n,m);
    return 0;
}
