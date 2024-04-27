//Задача 11
//Напиши програма каде за внесен број ќе се испечатат во обратен редослед само
//цифрите кои се деливи со 3. Да се испечати резултатот.
//Input: 45983
//Output:39

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int newNumber=number;
    int reverseNum=0;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit%3==0){
            reverseNum=reverseNum*10+digit;
        }
        newNumber=newNumber/10;
    }
    cout<<"The reverse number with digits divisible with 3 is: "<<reverseNum;
    return 0;
}
