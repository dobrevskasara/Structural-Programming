//Задача 18
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a,b,x). Да се пресмета изразот и да се отпечати резултатот (y) на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float numberA, numberB, numberX, resultY;
    cout<<"Enter three numbers: "<<endl;
    cin>>numberA>>numberB>>numberX;
    resultY= pow((pow(numberA,4)+7*numberA*pow(numberB,3)* pow(numberX,3)),2)/ sqrt(pow(numberX,numberA));
    cout<<"The result for y is: "<<resultY;
    return 0;
}
