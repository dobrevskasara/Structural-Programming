//Задача 2
//Пронајди го резултатот:
//int a = 10, b = 20;
//○ Евалуирај a *= 2;
//○ Евалуирај b /= 4;
//○ Евалуирај a >= b;

#include <iostream>
using namespace std;
int main(){
    int a = 10, b = 20;
    a*=2;
    cout<<"New value of a is: "<<a<<endl;
    b/=4;
    cout<<"New value of b is: "<<b<<endl;
    a = a > b;
    cout<<a;
    return 0;
}
