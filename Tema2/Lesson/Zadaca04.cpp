//Задача 4
//Направи програма каде што преку тастатура ќе се внеси цел број (numberA).
//a. Зголеми ја вреднoста на бројот за 5.
//b. Пробај различни типови на инкрементација и декрементација со секоја од променливите.

#include <iostream>
using namespace std;
int main(){
    int numberA;
    cout<<"Enter number: "<<endl;
    cin>>numberA;
    numberA+=5;
    cout<<"The value of number is: "<<numberA<<endl;

    //Incrementation
    int incrementNum;
    cout<<"Enter second number: "<<endl;
    cin>>incrementNum;
    cout<<"Incrementation: "<<incrementNum++<<endl;
    cout<<"After incrementation: "<<incrementNum<<endl;

    int incrementNumTwo;
    cout<<"Enter another number: "<<endl;
    cin>>incrementNumTwo;
    cout<<"Incrementation: "<<++incrementNumTwo<<endl;
    cout<<"After incrementation: "<<incrementNumTwo<<endl;

    //Decrementation
    int decrementNum;
    cout<<"Enter other number: "<<endl;
    cin>>decrementNum;
    cout<<"Decrementation: "<<decrementNum--<<endl;
    cout<<"After decrementation: "<<decrementNum<<endl;

    int decremetNumTwo;
    cout<<"Enter last number: "<<endl;
    cin>>decremetNumTwo;
    cout<<"Decrementation: "<<--decremetNumTwo<<endl;
    cout<<"After decrementation: "<<decremetNumTwo<<endl;
    return 0;
}
