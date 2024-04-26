//Задача 19
//Напиши програма каде ќе внесуваш броеви се додека не внесеш број кој е поголем
//од 20. Пресметај аритметичка средина од сите внесени броеви и отпечати го
//резултатот на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    int counter=1;
    cout<<"Enter number: ";
    cin>>number;
    int sum=number;
    while(number<=20){
        cout<<"Enter number: ";
        cin>>number;
        sum+=number;
        counter++;
    }
    cout<<"Arithmetic of numbers is: "<<sum*1.0/counter;
    return 0;
}
