//Задача 14
// Напишете програма каде што ќе може да се внесе број од 1 до 7 и за истиот да се
//испечати соодветниот ден во неделата.

#include <iostream>
using namespace std;
int main(){
    int weekDay;
    cout<<"Enter number: "<<endl;
    cin>>weekDay;

    switch (weekDay) {
        case 1:
            cout<<"Monday!";
            break;
        case 2:
            cout<<"Tuesday!";
            break;
        case 3:
            cout<<"Wednesday!";
            break;
        case 4:
            cout<<"Thursday!";
            break;
        case 5:
            cout<<"Friday!";
            break;
        case 6:
            cout<<"Saturday!";
            break;
        case 7:
            cout<<"Sunday!";
            break;
        default:
            cout<<"Not valid!";
            break;
    }
    return 0;
}
