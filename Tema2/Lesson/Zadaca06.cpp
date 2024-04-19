//Задача 6
// Направи програма каде што преку тастатура корисникот ќе внеси добитен број
//(luckyNumber) кој подоцна во програмата ќе може да го погоди. Доколку
//второвнесениот број е еднаков на luckyNumber тогаш треба да се отпечати на
//екран “Congratulations, you’ ve entered the lucky number, во спротивно да отпечати
//“Better luck next time”.

#include <iostream>
using namespace std;
int main(){
    int luckyNumber, number;
    cout<<"Enter lucky number: "<<endl;
    cin>>luckyNumber;
    cout<<"Enter your number: "<<endl;
    cin>>number;
    string message = luckyNumber==number ? "Congratulations, you’ ve entered the lucky number!" : "Better luck next time!";
    cout<<message;
    return 0;
}
