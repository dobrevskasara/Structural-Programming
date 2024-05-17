//Задача 4
//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број
//на цифри. Обратен број е бројот составен од истите цифри, но во обратен
//редослед (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува
//природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал
//од n кој што е „интересен“. Ако внесениот број не е валиден, да се отпечати
//соодветна порака (Brojot ne e validen).
//For example:
//Input: 5
//Result: Brojot ne e validen
//а. Направи функција која ќе го наоѓа бројот во обратен редослед за даден број
//б. Направи функција која ќе го враќа бројот на цифри за даден број
//Ц. Направи функција која ќе ја проверува валидноста на внесениот број

#include <iostream>
using namespace std;

int ReverseNumber(int number){
    int newNumber=number;
    int reverse=0;
    while(newNumber!=0){
        int digit=newNumber%10;
        reverse=reverse*10+digit;
        newNumber=newNumber/10;
    }
    return reverse;
}

int NumOfDigits(int number){
    int counter=0;
    int newNumber=number;
    while(newNumber!=0){
        int digit=newNumber%10;
        counter++;
        newNumber=newNumber/10;
    }
    return counter;
}

bool Valid(int number){
    if(number<=9){
        return 0;
    }
    return 1;
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    if(Valid(number)){
        if(ReverseNumber(number)%NumOfDigits(number)==0){
            cout<<"INTERESTING NUMBER";
       }
    }
    else{
        cout<<"Number is not valid.";
    }
    return 0;
}
