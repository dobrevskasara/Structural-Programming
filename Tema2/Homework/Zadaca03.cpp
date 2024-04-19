//Задача 3
// Пронајди го резултатот:
//int p = 15, q = 25;
//● Евалуирај p -= 8;
//● Евалуирај q += 5;
//● Евалуирај p != q;

#include <iostream>
using namespace std;
int main(){
    int p = 15, q = 25;
    p-=8;
    cout<<"New value of p is: "<<p<<endl;
    q+=5;
    cout<<"New value of q is: "<<q<<endl;
    p = p!=q;
    cout<<p;
    return 0;
}
