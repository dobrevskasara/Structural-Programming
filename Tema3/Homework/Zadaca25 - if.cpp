//Задача 25 - if
//Напишете програма каде што ќе може да се внесе број од 1 до 12 и за истиот да се
//испечати соодветниот месец во годината
//Пр. За внесен број 3, треба да се отпечати “MART”
//За внесен број 12, треба да се отпечати “DEKEMVRI”

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    if(number==1){
        cout<<"January.";
    }
    else if(number==2){
        cout<<"February.";
    }
    else if(number==3){
        cout<<"March.";
    }
    else if(number==4){
        cout<<"April.";
    }
    else if(number==5){
        cout<<"May.";
    }
    else if(number==6){
        cout<<"June.";
    }
    else if(number==7){
        cout<<"July.";
    }
    else if(number==8){
        cout<<"August.";
    }
    else if(number==9){
        cout<<"September.";
    }
    else if(number==10){
        cout<<"October.";
    }
    else if(number==11){
        cout<<"November.";
    }
    else if(number==12){
        cout<<"December.";
    }
    else{
        cout<<"Not valid number.";
    }
    return 0;
}
