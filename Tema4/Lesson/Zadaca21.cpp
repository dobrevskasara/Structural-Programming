//Задача 21
//Да се провери дали одреден внесен шестцифрен број е симетричен.
//Тоа значи првата цифра од бројот да е еднаква со последната, втората цифра со
//претпоследната.. Пример за симетрични броеви: 123321, 805508, 999999.
//Да се испечати 1 ако бројот е симетричен, 0 ако не е симетричен.

#include <iostream>
using namespace std;
int main(){
    int number;
    int reverseNumber=0;
    cout<<"Enter number: ";
    cin>>number;
    int newNumber=number;
    while(newNumber!=0){
        int digit=newNumber%10;
        reverseNumber=reverseNumber*10+digit;
        newNumber=newNumber/10;
    }
    if(number==reverseNumber){
        cout<<"The number is symmetrical.";
    }
    else{
        cout<<"The number is not symmetrical.";
    }
    return 0;
}
