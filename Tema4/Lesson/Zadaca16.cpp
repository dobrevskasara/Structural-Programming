//Задача 16
//Напиши програма која за внесен број преку тастатура ќе го отпечати бројот во
//обратен редослед. Да се испечати резултатот.
//Input: 45986
//Output: 68954

#include <iostream>
using namespace std;
int main(){
    int number;
    int reverseNumber;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int newNumber=number;
    while(newNumber!=0){
        int digit=newNumber%10;
        reverseNumber=reverseNumber*10+digit;
        newNumber=newNumber/10;
    }
    cout<<"The reverse number is: "<<reverseNumber;
    return 0;
}
