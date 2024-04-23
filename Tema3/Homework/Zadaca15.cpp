//Задача 15
//Напиши програма каде преку тастатура ќе може да се внесат четири цели броеви.
//Да се отпечати на екран најголемиот од броевите - “MAX: __”

#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, num4;
    cout<<"Enter four numbers: "<<endl;
    cin>>num1>>num2>>num3>>num4;
    int maxNum;
    if(num1>num2 && num1>num3 && num1>num4){
        maxNum=num1;
    }
    else if(num2>num1 && num2>num3 && num2>num4){
        maxNum=num2;
    }
    else if(num3>num1 && num3>num2 && num3>num4){
        maxNum=num3;
    }
    else{
        maxNum=num4;
    }
    cout<<"Maximum: "<<maxNum;
    return 0;
}
