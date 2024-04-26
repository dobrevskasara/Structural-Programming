//Задача 11
//Напиши програма која ќе пресмета (n+2k)!, за вредност на n и k внесена преку
//стандарден влез. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin>>n>>k;
    float result=1;
    for(int i=1;i<=(n+2*k);i++){
        result*=i;
    }
    cout<<"The result is: "<<result;
    return 0;
}
