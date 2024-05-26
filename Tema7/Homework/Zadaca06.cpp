//Задача 6
//Напиши програма која од стандарден влез ќе прочита број на редици и колони (n <= 10,
//m <= 10) што ќе ги содржи една матрица од природни броеви. Од стандарден влез внеси
//ги елементите на матрицата.
//Програмата е потребно да го провери секој ред и секоја колона од матрицата и да
//отпечати дали редот/колоната е строго растечки, строго опаѓачки или ниту строго растечки
//ниту строго опаѓачки. Резултатот за секој ред/колона да се отпечати.

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

void checkRows(int matrix[10][10], int n, int m){
    for(int i=0;i<n;i++){
        int stronglyIncreasing=1;
        int stronglyDecreasing=1;
        for(int j=0;j<m-1;j++){
            if(matrix[i][j]<matrix[i][j+1]){
                stronglyDecreasing=0;
            }
            else if(matrix[i][j]>matrix[i][j+1]){
                stronglyIncreasing=0;
            }
            else{
                stronglyIncreasing=0;
                stronglyDecreasing=0;
            }
        }

        if(stronglyIncreasing==0 && stronglyDecreasing==0){
            cout<<"Row "<<i<<" is not strongly increasing, nor strongly decreasing!"<<endl;
        }
        else if(stronglyIncreasing){
            cout<<"Row "<<i<<" is strongly increasing!"<<endl;
        }
        else if(stronglyDecreasing){
            cout<<"Row "<<i<<" is strongly decreasing!"<<endl;
        }
    }
}

void checkColoumn(int matrix[10][10], int n, int m){
    for(int j=0;j<m;j++){
        int stronglyIncreasing=1;
        int stronglyDecreasing=1;
        for(int i=0;i<n-1;i++) {
            if (matrix[i][j] < matrix[i+1][j]) {
              stronglyDecreasing = 0;
            } else if (matrix[i][j] > matrix[i+1][j]) {
                stronglyIncreasing = 0;
            } else {
                stronglyIncreasing = 0;
                stronglyDecreasing = 0;
            }
    }
        if(stronglyIncreasing==0 && stronglyDecreasing==0){
            cout<<"Column "<<j<<" is not strongly increasing, nor strongly decreasing!"<<endl;
        }
        else if(stronglyIncreasing){
            cout<<"Column "<<j<<" is strongly increasing!"<<endl;
        }
        else if(stronglyDecreasing){
            cout<<"Column "<<j<<" is strongly decreasing!"<<endl;
        }
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int matrix[10][10];
    insertMatrix(matrix,n,m);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,n,m);
    checkRows(matrix,n,m);
    checkColoumn(matrix,n,m);
    return 0;
}
