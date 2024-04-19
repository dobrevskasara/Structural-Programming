//Задача 3
//Направи програма каде што преку тастатура ќе се внесaт два карактери, кастирај
//ги и пронајди ја нивната разлика. Отпечати го резултатот.

#include <iostream>
using namespace std;
int main(){
    char character1, character2;
    int result;
    cout<<"Enter two characters: "<<endl;
    cin>>character1>>character2;
    result=(int)character1-(int)character2;
    cout<<"The result is: "<<result;
    return 0;
}
