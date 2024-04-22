//Задача 12
//Напишете програма каде што за внесен број ќе се провери дали бројот е
//двоцифрен и дали бројот на единици е еднаков на 1.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    int onesdigit=number%10;

    if(number>9 && number<100 && onesdigit==1){
        cout<<"The number has two digits and onesdigit is 1.";
    }
    else{
        cout<<"The condition is false!";
    }
    return 0;
}
