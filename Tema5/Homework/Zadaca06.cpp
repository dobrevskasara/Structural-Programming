//Задача 6
//Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден
//негативен број или 0 треба да се печати „Invalid input“.
//Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот
//број. Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри
//се наоѓаат на парните позиции од другиот број, во истиот редослед. Соодветно да
//се испечатат пораки „PAREN“ и „NE“.
//Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на
//позиција 1)
//For example:
//Input: 12345678 1357
//Result: PAREN
//А. Да се направи функција која ќе проверува дали даден број е парен еквивалент
//на друг број. Функцијата да враќа 1 доколку бројот е парен еквивалент, во
//спротивно да враќа 0.
//Б. Да се направи функција која која ќе го печати резултатот.

#include <iostream>
using namespace std;

bool EvenEquivalent(int numberOne, int numberTwo){
    int newNumberOne=numberOne;
    int newNumberTwo=numberTwo;
    while(newNumberOne!=0 && newNumberTwo!=0){
        int minDigit=newNumberOne%10;
        int maxDigit=newNumberTwo%100/10;
        newNumberOne=newNumberOne/10;
        newNumberTwo=newNumberTwo/100;

        if(minDigit!=maxDigit){
            return 0;
        }
    }
    if(newNumberTwo!=0){
        return 0;
    }
    return 1;
}

void PrintResult(bool EvenEquivalent){
    if(EvenEquivalent==1){
        cout<<"Even Equivalent.";
    }
    else{
        cout<<"No.";
    }
}

int main(){
    int number1, number2;
    cin>>number1>>number2;
    int min=number1;
    int max=number2;
    if(number1<=0 || number2<=0){
        cout<<"Invalid input.";
    }
    else{
        if(number1>number2){
            min=number2;
            max=number1;
        }
        int even=EvenEquivalent(min,max);
        PrintResult(even);
    }
    return 0;
}
