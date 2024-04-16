//Да се внеси преку тастатура еден број и да се провери дали бројот е делив со 3.
//Резултатот од проверката да се отпечати на екран.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Vnesi broj: "<<endl;
    cin>>number;
    bool isDivisblewith3 = number % 3 == 0;
    cout<<"Rezultat za dali brojot e deliv so 3 iznesuva: "<<isDivisblewith3;
    return 0;
}
