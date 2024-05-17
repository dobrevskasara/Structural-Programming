//Задача 7
//Од стандарден влез се внесуваат два цели броја N и Х. Да се најде најблискот број
//помал од N коj е тотално различен од бројот Х.
//Еден број е тотално различен од друг ако и само ако во него не се појавува ниту
//една од цифрите на другиот број. Задачата да се реши без употреба на низи и
//матрици.
//For example:
//Input: 88 7
//Result: 86
//А. Да се направи функција која ќе проверува дали еден број е тотално различен од
//даден број. Функцијата како резултат да враќа 0 или 1, соодветно.

#include <iostream>
using namespace std;

bool TotalDifferentNumber(int numberOne, int numberTwo){
    int newNumberOne=numberOne;
    int newNumberTwo=numberTwo;
    while(newNumberOne!=0){
        int digitOne=newNumberOne%10;
        while(newNumberTwo!=0){
            int digitTwo=newNumberTwo%10;
            if(digitOne==digitTwo){
                return false;
            }
            newNumberTwo=newNumberTwo/10;
        }
        newNumberOne=newNumberOne/10;
    }
    return true;
}

int main(){
    int number1, number2;
    cin>>number1>>number2;
    int difference=0;
    for(int i=(number1-1);i>0;i--){
        bool isDifference= TotalDifferentNumber(i,number2);
        if(isDifference==1){
            difference=i;
            break;
        }
    }
    cout<<difference;
    return 0;
}
