//Задача 4
//Напиши програма каде што преку тастатура ќе може да се внеси број кој ќе
//претставува основица на плата. Според внесената основна плата, треба да се
//пресмета вкупната плата која ќе ја добие работникот според следните услови:
//Основна плата <= 10000, HRA = 20%, DA=80%
//Основна плата во ранг [10001, 20000] , HRA = 25%, DA=90%
//Основна плата поголема 20001 , HRA = 30%, DA=95%
//Формули:
//Da = basic * 0.8;
//Hra = basic * 0.2;
//totalSalary = basic + hra +da

#include <iostream>
using namespace std;
int main(){
    int basic;
    cout<<"Enter basic salary: "<<endl;
    cin>>basic;
    float hra, da, hraPer, daPer, totalSalary;
    if(basic<=10000){
        hraPer=0.2;
        daPer=0.8;
    }
    else if(basic>=10001 && basic<=20000){
        hraPer=0.25;
        daPer=0.9;
    }
    else if(basic>=20001){
        hraPer=0.3;
        daPer=0.95;
    }

    da=(float)basic*hraPer;
    hra=(float)basic*daPer;
    totalSalary=basic+hra+da;
    cout<<"Total salary is: "<<totalSalary;
}
