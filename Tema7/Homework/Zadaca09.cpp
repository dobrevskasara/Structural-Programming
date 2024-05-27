//Задача 9
//Напиши програма која од стандарден влез ќе прочита матрица од 5-ти ред и да се
//определи полузбир од сите вредности деливи со 3 над главна дијагонала и полузбир под
//главна дијагонала од сите вредности поголеми од 10. Резултатите да се отпечатат.

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

void halfSums(int matrix[5][5], int n, int m){
    int sumDivisibleWith3AboveMain=0;
    int sumGreaterThan10UnderMain=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<j && matrix[i][j]%3==0){
                sumDivisibleWith3AboveMain+=matrix[i][j];
            }
            if(i>j && matrix[i][j]>10){
                sumGreaterThan10UnderMain+=matrix[i][j];
            }
        }
    }

    cout<<"Halfsum of elements above main diagonal divisible with 3 is: "<<sumDivisibleWith3AboveMain*1.0/2<<endl;
    cout<<"Halfsum of elements under main diagonal greater than 10 is: "<<sumGreaterThan10UnderMain*1.0/2<<endl;
}

int main(){
    int matrix[5][5];
    insertMatrix(matrix,5,5);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,5,5);
    halfSums(matrix,5,5);
    return 0;
}
