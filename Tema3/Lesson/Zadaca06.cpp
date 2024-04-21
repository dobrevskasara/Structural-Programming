//Задача 6
// Напиши програма каде преку тастатура ќе биде внесен цел број.
//Доколку бројот е поголем од 5 и е делив со 5, отпечати “Bingo!”.
//● Реши ја задачата со и без вгнезден if израз.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;

    //вгнезден if
    if(number>5){
        if(number%5==0){
            cout<<"Bingo!"<<endl;
            cout<<"Case number 1 works!"<<endl;
        }
    }

    //невгнезден if
    if(number>5 && number%5==0){
        cout<<"Bingo!"<<endl;
        cout<<"Case number 2 works!";
    }

    return 0;
}
