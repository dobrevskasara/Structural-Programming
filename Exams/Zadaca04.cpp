//Задача 4
//Еден елемент од матрица ја дели матрицата на 4 квадранти (прикажани на сликата).
//Притоа самиот елемент кој ја дели матрицата припаѓа во четвртиот квадрант (-5 во примерот на сликата).
//Од стандарден влез се внесува матрица со димензии NxM (1 <= N, M < 100). Потоа се внесуваат два броеви
//кои претставуваат индекси на еден елемент од матрицата.
//Да се најдат сумите на секој од квадрантите и да се испечатат на стандарен излез. Притоа се печати
//сумата за првиот квадрант, па за вториот, па третиот и на крај за четвртиот. Доколку не може да се
//креира квадрант, тогаш за сумата на тој квадрант треба да се испечати 0.

#include <iostream>
using namespace std;

void insertMatrix(int matrix[10][10], int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    int matrix[10][10];
    insertMatrix(matrix,n,m);
    int indexI;
    int indexJ;
    cin>>indexI>>indexJ;
    int sum1=0, sum2=0, sum3=0, sum4=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i<indexI && j>=indexJ){
                sum1+=matrix[i][j];
            }
            else if(i<indexI && j<indexJ){
                sum2+=matrix[i][j];
            }
            else if(i>=indexI && j<indexJ){
                sum3+=matrix[i][j];
            }
            else if(i>=indexI && j>=indexJ){
                sum4+=matrix[i][j];
            }
        }
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4;
    return 0;
}
