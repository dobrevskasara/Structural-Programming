//Задача 5
//Напиши програма која ќе го пресмета изразот за дадена вредност на n и x преку
//тастатура, n>0. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin>>n>>x;
    float result;
    for(int i=1;i<=n;i++){
        result+=x*1.0/i*10;
    }
    cout<<"The result is: "<<result;
    return 0;
}
