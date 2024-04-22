//Задача 11
// Напишете програма каде што за внесен број ќе се провери дали бројот е
//двоцифрен и дали бројот на десетки е еднаков на 8.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int tensdigit=number%100/10;

    if(number>9 && number<100 && tensdigit==8){
        cout<<"The number has two digits and tensdigit is 8.";
    }
    else{
        cout<<"The condition is false!";
    }
    return 0;
}
