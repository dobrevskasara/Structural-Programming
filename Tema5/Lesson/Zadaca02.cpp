//Задача 2
//Да се напише програма каде преку тастатура ќе се внесува радиус на круг.
//Програмата е потребно да пресмета дијаметар, периметар и плоштина на кругот и
//резултатот соодветно да го отпечати.
//𝑑 = 2𝑟 𝐿 = 2𝑟π 𝑃 = 𝑟^2π

#include <iostream>
#include <cmath>
using namespace std;

int FindDiameter(int radius){
    int diameter;
    return diameter=2*radius;
}

float FindPerimeter(int radius){
    float Perimeter;
    float pi=3.14;
    return Perimeter=2*radius*pi;
}

float FindArea(int radius){
    float Area;
    float pi=3.14;
    return Area=pow(radius,2)*pi;
}

int main(){
    int radius;
    cin>>radius;
    cout<<"Diameter is: "<<FindDiameter(radius)<<endl;
    cout<<"Perimeter is: "<<FindPerimeter(radius)<<endl;
    cout<<"Area is: "<<FindArea(radius)<<endl;
    return 0;
}
