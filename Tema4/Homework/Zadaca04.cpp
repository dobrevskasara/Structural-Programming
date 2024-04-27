//Задача 4
//Напиши програма која ќе го пресмета изразот за дадена вредност на n преку
//тастатура, n>0. Резултатот да се отпечати.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    float result=0;
    for(int i=1;i<=n;i++){
        result += 1.0/ (pow(2,i));
    }
    cout<<"The result is: "<<result;
    return 0;
}
