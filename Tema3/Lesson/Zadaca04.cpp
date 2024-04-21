//Задача 4
//Напишете програма која ќе проверува дали внесен број е делив со 3, 5 ,7 или 11.
//Програмата соодветно го печати бројот и неговиот делител.
//Доколку бројот не е делив со ниеден од наведените броеви да се отпечати “The
//number is not divisible with the expected numbers”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    if(number%3==0){
        cout<<"Number is divisible with 3."<<endl;
    }
    else if(number%5==0){
        cout<<"Number is divisible with 5."<<endl;
    }
    else if(number%7==0){
        cout<<"Number is divisible with 7."<<endl;
    }
    else if(number%11==0){
        cout<<"Number is divisible with 11."<<endl;
    }
    else{
        cout<<"The number is not divisible with expected numbers.";
    }
    return 0;
}
