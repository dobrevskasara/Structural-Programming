//Задача 20
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a,b).
//Да се пресмета изразот и да се отпечати резултатот (y) на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float numberA, numberB, resultY;
    cout<<"Enter two numbers: "<<endl;
    cin>>numberA>>numberB;
    resultY=(sqrt((pow(numberA,2)+3)/(1+pow(numberB,3)/numberA))/(numberA/pow(numberB,4))+ sqrt(1/(numberA+numberB)));
    cout<<"The result for y is: "<<resultY;
    return 0;
}
