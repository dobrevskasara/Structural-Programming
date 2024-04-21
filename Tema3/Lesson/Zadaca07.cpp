//Задача 7
//Напиши програма каде преку тастатура ќе бидат внесени три цели броеви. Најди го
//најголемиот и најмалиот број и пресметај ја нивната сума.

#include <iostream>
using namespace std;
int main(){
    int number1, number2, number3;
    cout<<"Enter three numbers: "<<endl;
    cin>>number1>>number2>>number3;
    int maxNums, minNums;

    if (number1>number2 && number1>number3){
        maxNums=number1;
    }else if(number2>number1 && number2>number3){
        maxNums=number2;
    }else if(number3>number1 && number3>number2){
        maxNums=number3;
    }

    if (number1<number2 && number1<number3){
        minNums=number1;
    }else if(number2<number1 && number2<number3){
        minNums=number2;
    }else if(number3<number1 && number3<number2){
        minNums=number3;
    }

    cout<<"Maxmimum is: "<<maxNums<<endl;
    cout<<"Minimum is: "<<minNums<<endl;

    int result=minNums+maxNums;
    cout<<"The result is: "<<result;
    return 0;
}
