//Задача 15
//Напиши програма каде за внесен број преку тастатура ќе се изброи колку цифри се
//4,6,7, а колку се останатите цифри. Да се провери од кои има повеќе и резултатот
//да се испечати на екран.
//Пр. Brojot na cifrite 4,6,7 e 3
//Brojot na ostanati cifri e 4.
//Pogolem e brojot na ostanati cifri.

#include <iostream>
using namespace std;
int main(){
    int number, counter1=0, counter2=0;
    cout<<"Enter number: "<<endl;
    cin>>number;
    while(number!=0){
        int digit=number%10;
        if(digit==4 || digit==6 || digit==7){
            counter1++;
        }
        else{
            counter2++;
        }
        number=number/10;
    }
    cout<<"Number of digits 4, 6, 7 or 3 is: "<<counter1<<endl;
    cout<<"Number of other digits is: "<<counter2<<endl;
    if(counter1>counter2){
        cout<<"Number of digits 4, 6 and 7 is greater than number of other digits."<<endl;
    }
    else if(counter2>counter1){
        cout<<"Number of other digits is greater than number of digits 4, 6 and 7."<<endl;
    }
    else{
        cout<<"Both are equal.";
    }
    return 0;
}
