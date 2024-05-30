//Задача 3
//Да се напиши програма со која ќе може да се внеси пасворд - низа од максимум 15
//карактери. Внесениот пасворд да се трансформира во нов пасворд така што
//првите три карактери ќе бидат прилепени на крајот од пасвордот.
//Новодобиениот пасворд да се отпечати.
//Пр. sirenje901 → sirenje901sir
//83!topka → 83!topka83!

#include <iostream>
#include <cstring>
using namespace std;

void transformation(char *password){
    strncat(password,password,3);
}

int main(){
    char password[15];
    cin>>password;
    transformation(password);
    cout<<"Password after transformation is: "<<password;
    return 0;
}
