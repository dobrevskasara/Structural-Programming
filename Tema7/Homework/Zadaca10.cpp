//Задача 10
//Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред и да се
//определи аритметичката средина над споредна дијагонала од сите вредности и
//аритметичката средина под споредна дијагонала од сите вредности. Резултатите да се
//отпечатат.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[5][5], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[5][5], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void aritmetic(int matrix[5][5], int n, int m){
    float arithmeticAbove=0.0;
    float arithmeticUnder=0.0;
    int counter1=0;
    int counter2=0;
    int sumAbove=0;
    int sumUnder=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+j<n-1){
                sumAbove+=matrix[i][j];
                counter1++;
            }
            if(i+j>n-1){
                sumUnder+=matrix[i][j];
                counter2++;
            }
        }
    }

    arithmeticAbove=(float)sumAbove/counter1;
    arithmeticUnder=(float)sumUnder/counter2;

    cout<<"Arithmetic value of elements above second diagonal is: "<<arithmeticAbove<<endl;
    cout<<"Arithmetic value of elements under second diagonal is: "<<arithmeticUnder<<endl;
}

int main(){
    int matrix[5][5];
    insertMatrix(matrix,5,5);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,5,5);
    aritmetic(matrix,5,5);
    return 0;
}
