//Да се внесат преку тастура два броеви и да се најде нивниот производ. Да се
//провери дали нивниот производ е делив со 7 и резултатот да се отпечати на екран.

#include <iostream>
using namespace std;
int main(){
    int a, b, proizvod;
    cout<<"Vnesi dva broja: "<<endl;
    cin>>a>>b;
    proizvod=a*b;
    cout<<"Proizvodot na broevite "<<a<<" i "<<b<<" iznesuva: "<<proizvod<<endl;
    bool IsDivisibleWith7 = proizvod % 7 == 0;
    cout<<"Rezultatot dali brojot e deliv so 7 e: "<<IsDivisibleWith7;
    return 0;
}
