//Задача 1
//Напиши ги следните функции:
//a. Функција преку која ќе може да се внеси матрица од n x m елементи
//(n<10, m<10)
//b. Функција која ќе отпечати дадена матрица.
//c. Функција која ќе ја пронајде максималната вредност во дадена матрица и
//ќе ја отпечати вредноста и позицијата на елементот
//d. Функција која ќе ја пронајде минималната вредност во дадена матрица и
//ќе ја отпечати вредноста и позицијата на елементот
//e. Функција која за дадена матрица ќе ја пронајди сумата на сите броеви во
//матрицата. Отпечати ја вратената вредност од функцијата.
//f. Функција која за дадена матрица ќе ја пронајди просечната вредност на
//сите броеви во матрицата. Отпечати ја вратената вредност од функцијата.

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

void findMaxElement(int matrix[10][10], int n, int m){
    int maxElement=matrix[0][0];
    int maxIndexI=0;
    int maxIndexJ=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maxElement<matrix[i][j]){
                maxElement=matrix[i][j];
                maxIndexI=i;
                maxIndexJ=j;
            }
        }
    }
    cout<<"Max element: "<<maxElement<<" has position ["<<maxIndexI<<"]["<<maxIndexJ<<"]"<<endl;
}

void findMinElement(int matrix[10][10], int n, int m){
    int minElement=matrix[0][0];
    int minIndexI=0;
    int minIndexJ=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(minElement>matrix[i][j]){
                minElement=matrix[i][j];
                minIndexI=i;
                minIndexJ=j;
            }
        }
    }
    cout<<"Min element: "<<minElement<<" has position ["<<minIndexI<<"]["<<minIndexJ<<"]"<<endl;
}

int findSum(int matrix[10][10], int n, int m){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum+=matrix[i][j];
        }
    }
    return sum;
}

float findAverage(int matrix[10][10], int n, int m){
    float average;
    int counter=0;
    int sum=findSum(matrix,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            counter++;
        }
    }
    average=sum*1.0/counter;
    return average;
}

int main(){
    int n, m;
    cin>>n>>m;
    int matrix[10][10];
    insertMatrix(matrix,n,m);
    cout<<"Matrix: "<<endl;
    printMatrix(matrix,n,m);
    findMaxElement(matrix,n,m);
    findMinElement(matrix,n,m);
    cout<<"Sum of elements is: "<<findSum(matrix,n,m)<<endl;
    cout<<"Average of elements is: "<<findAverage(matrix,n,m);
    return 0;
}
