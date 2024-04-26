//Задача 8
//Напиши програма која ќе го пресмета изразот за дадена вредност на n преку
//тастатура, n>0. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float sum;
    for(int i=0;i<n;i++){
        float num=1.0/((i*2)+1);
        sum+=num;
    }
    cout<<"Sum of numbers is: "<<sum;
    return 0;
}
