//Задача 16
//Напиши програма каде преку тастатура ќе може да се внесат четири цели броеви.
//Да се отпечати на екран најмалиот од броевите - “MIN: __”.

#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4;
    cout<<"Enter four numbers: "<<endl;
    cin>>num1>>num2>>num3>>num4;
    int minNum;
    if(num1<num2 && num1<num3 && num1<num4){
        minNum=num1;
    }
    else if(num2<num1 && num2<num3 && num2<num4){
        minNum=num2;
    }
    else if(num3<num1 && num3<num2 && num3<num4){
        minNum=num3;
    }
    else{
        minNum=num4;
    }
    cout<<"Minimum: "<<minNum;
    return 0;
}
