//Задача 16
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a,x,z). Да се пресмета изразот и да се отпечати резултатот (y) на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float valueA, valueX, valueZ, resultY;
    cout<<"Enter three numbers: "<<endl;
    cin>>valueA>>valueX>>valueZ;
    resultY=(11* pow(valueA,2)/ pow(valueA,3))+(pow(valueX,3)/ sqrt(9*valueX+0.5));
    cout<<"The value for y is: "<<resultY;
    return 0;
}
