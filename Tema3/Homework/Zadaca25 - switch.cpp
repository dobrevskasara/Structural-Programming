//Задача 25 - switch
//Напишете програма каде што ќе може да се внесе број од 1 до 12 и за истиот да се
//испечати соодветниот месец во годината.
//Пр. За внесен број 3, треба да се отпечати “MART”
//За внесен број 12, треба да се отпечати “DEKEMVRI”

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    switch (number) {
        case 1:
            cout<<"January.";
            break;
        case 2:
            cout<<"February.";
            break;
        case 3:
            cout<<"March.";
            break;
        case 4:
            cout<<"April.";
            break;
        case 5:
            cout<<"May.";
            break;
        case 6:
            cout<<"June.";
            break;
        case 7:
            cout<<"July.";
            break;
        case 8:
            cout<<"August.";
            break;
        case 9:
            cout<<"September.";
            break;
        case 10:
            cout<<"October.";
            break;
        case 11:
            cout<<"November.";
            break;
        case 12:
            cout<<"December.";
            break;
        default:
            cout<<"Not valid number.";
    }
    return 0;
}
