//Задача 10
//Напиши програма која ќе пресмета n!, за вредност на n внесена преку стандарден
//влез. Резултатот да се отпечати.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    float factoriel=1;
    for(int i=0; i<n;i++){
        factoriel=factoriel*(i+1);
    }
    cout<<"Factoriel of "<<n<<" is: "<<factoriel;
    return 0;
}
