//Задача 2
//Да се напиши програма со која ќе може да се внеси пасворд - низа од максимум 20
//карактери. Внесениот пасворд да се трансформира така што ќе бидат променети
//неговите карактери.
//a,A → @
//i, I → !
//s, S → $
//8 → &
//Новодобиениот пасворд да биде отпечатен на екран.
//Пр. anAliSs8 → @n@l!$$&

#include <iostream>
#include <cstring>
using namespace std;

void change(char *password){
    for(int i=0;i< strlen(password);i++){
        if(password[i]=='A' || password[i]=='a'){
            password[i]='@';
        }
        else if(password[i]=='i' || password[i]=='I'){
            password[i]='!';
        }
        else if(password[i]=='s' ||  password[i]=='S'){
            password[i]='$';
        }
        else if(password[i]==8){
            password[i]='&';
        }
    }
}

int main(){
    char password[20];
    cin>>password;
    change(password);
    cout<<"Password after transformation: "<<password;
    return 0;
}
