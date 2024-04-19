//Задача 17
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a,x).
//Да се пресмета изразот и да се отпечати резултатот (y) на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float valueA, valueX, resultY;
    cout<<"Enter two numbers: "<<endl;
    cin>>valueA>>valueX;
    resultY= sqrt((pow(valueA,valueX)+2*pow(valueX,3))/(5*valueA/valueX));
    cout<<"The result y is: "<<resultY;
    return 0;
}
