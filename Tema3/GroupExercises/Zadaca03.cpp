//Задача 3
//Напиши програма каде што преку тастатура ќе бидат внесени три броеви кои треба
//да претставуваат страни на триаголник. Треба да се провери дали може да се
//конструира триаголик од зададените страни и резултатот треба да се отпечати на
//екран.
//Hint: Збирот на секои две страни треба да е поголем од третата страна за да може
//да се контруира триаголник

#include <iostream>
using namespace std;
int main(){
    int number1, number2, number3;
    cout<<"Enter three numbers: "<<endl;
    cin>>number1>>number2>>number3;
    if(number1+number2>number3 && number1+number3>number2 && number2+number3>number1){
        cout<<"Triangle!";
    }
    else{
        cout<<"Invalid numbers!";
    }
    return 0;
}
