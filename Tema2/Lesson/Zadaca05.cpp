//Задача 5
//Направи програма каде што преку тастатура ќе се внеси цел број. Доколку бројот е
//парен отпечати “Number is even”, во спротивно отпечати “Number is odd”.

#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number: "<<endl;
    cin>>number;
    string message = number % 2 == 0 ? "Number is even" : "Number is odd";
    cout<<message;
    return 0;
}
