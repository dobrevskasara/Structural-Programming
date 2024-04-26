//Задача 7
//Напиши програма која ќе го пресмета изразот за дадена вредност на n преку
//тастатура, n>0. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int n;
    float sum;
    cin>>n;
    for(int i=0;i<n;i++){
        float num=1.0/(i+1);
        sum+=num;
    }
    cout<<sum;
    return 0;
}
