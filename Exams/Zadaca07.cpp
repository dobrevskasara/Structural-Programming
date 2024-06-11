//Задача 7
//Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
//Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот
//во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
//Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
//Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
//Пример:
//Влез:
//3 6
//1 2 2 3 4 5
//1 1 2 2 3 3
//1 2 3 4 5 6
//Излез:
//5 1 1

#include <iostream>
using namespace std;

void insertMatrix(int matrix[100][100], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}


int main(){
    int n, m;
    cin>>n>>m;
    int matrix[100][100];
    int newArray[m];
    insertMatrix(matrix,n,m);
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=matrix[i][j];
        }
        double average=(double)sum/m;
        double maxDifference=-1;
        double element=0;
        for(int j=0;j<m;j++){
            int currentDifference= abs(matrix[i][j]-average);
            if(currentDifference>maxDifference){
                maxDifference=currentDifference;
                element=matrix[i][j];
            }
        }
        newArray[i]=element;
    }
    for(int i=0;i<n;i++){
        cout<<newArray[i]<<" ";
    }
    return 0;
}
