//Задача 1
//Да се напише програма каде од тастатура се внесува еден шестцифрен број. Програмата
//печати DA доколку бројот е магичен, а NE во спротивно.
//Еден број е магичен доколку за него важи дека е делив со својата прва цифра и не е
//делив со збирот на последните две цифри или доколку не е делив со својата втора цифра
//и не е делив со збирот на последните две цифри.
//Да се внимава на делење со 0, односно да се испечати соодветна порака во таков случај.

#include <iostream>
using namespace std;
int main(){
    int magicNumber;
    cout<<"Enter number: ";
    cin>>magicNumber;
    int firstDigit=magicNumber/100000;
    int secondDigit=(magicNumber/10000)%10;
    int fifthDigit=(magicNumber/100)%10;
    int sixthDigit=magicNumber%10;
    int lastDigitsSum=fifthDigit+sixthDigit;
    if(fifthDigit==0 || secondDigit==0 || lastDigitsSum==0){
        cout<<"Impossible division with zero!";
    }
    else if(magicNumber%firstDigit==0 && magicNumber%lastDigitsSum!=0 || magicNumber%secondDigit!=0 && magicNumber%lastDigitsSum!=0){
        cout<<"Magic number!";
    }
    else{
        cout<<"Not magic number!";
    }
    return 0;
}
