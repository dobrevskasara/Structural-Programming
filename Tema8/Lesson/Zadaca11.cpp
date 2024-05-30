//Задача 11
//Напиши програма која ќе овозможи внесување матрица од карактери со големина
//n. Програмата треба да овозможи и внесување на стринг/низа од карактери со
//големина n и треба да провери дали внесениот стринг се совпаѓа со зборот кој што
//лежи на главна дијагонала или споредна дијагонала.
//Резултатот да се отпечати.

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n;
    cin>>n;
    char matrix[10][10];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char character;
            cin>>character;
            matrix[i][j]=character;
        }
    }
    char word[10];
    cin>>word;
    char main[10];
    char secondary[10];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                main[i]=matrix[i][j];
            }
            if(i+j==n-1){
                secondary[i]=matrix[i][j];
            }
        }
    }
    main[n]='\0';
    secondary[n]='\0';
    if(strcmp(word,main)==0){
        cout<<"The word is on main diagonal!";
    }
    else if(strcmp(word,secondary)==0){
        cout<<"The word is on secondary diagonal!";
    }
    else{
        cout<<"The word isn't on main diagonal, nor secondary diagonal!";
    }
    return 0;
}
