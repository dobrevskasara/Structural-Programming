//Задача 1
//Направи програма каде што преку тастатура ќе се внесе цел број и истиот ќе биде
//кастиран во карактер. Отпечати ја променетата вредност.

#include <iostream>
using namespace std;
int main(){
    int number;
    char character;
    cout<<"Enter number: "<<endl;
    cin>>number;
    character=(char)number;
    cout<<"The char value for "<<number<<" is: "<<character;
    return 0;
}
