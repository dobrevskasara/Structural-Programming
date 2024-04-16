//Да се внесат преку тастатура трите страни на разностран триаголник и да се
//плоштината на триаголникот по херонова формула. Да се испечати
//добиениот резултат на екран.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Vnesi dolzina na stranite na raznostran triagolnik: "<<endl;
    cin>>a>>b>>c;
    float s, p;
    s=((float)a+b+c)/2;
    p=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Plostinata na triagolnikot iznesuva: "<<p;
    return 0;
}
