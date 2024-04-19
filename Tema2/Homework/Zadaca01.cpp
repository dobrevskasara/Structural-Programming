//Задача 1
//Пронајди го резултатот:
//int x = 5;
//● Евалуирај x += 3;
//● Евалуирај x > 7;
//● Евалуирај x < 10;

#include <iostream>
using namespace std;
int main(){
    int numberX=5;
    // Евалуирај x += 3;
    numberX+=3;
    cout<<"New value of x is: "<<numberX<<endl;

    //Евалуирај x > 7;
    numberX=numberX>7;
    cout<<numberX<<endl;

    //Евалуирај x < 10;
    numberX=numberX<10;
    cout<<numberX;
    return 0;
}
