//Задача 7
//Да се напиши програма со која ќе може да се внеси пасворд - низа од максимум 20
//карактери. Внесениот пасворд треба да се провери дали е валиден.
//Валиден пасворд е оној кој има минимална должина од 6 карактери и не соддржи
//ниеден од следните карактери (A,a,@, i, I, !)
//Резултатот да се отпечати.
//Валидни пасворди: test12345, room###123, pool$5976
//Невалидни пасворди: te123, location23, loc@897, locAL000

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char password[20];
    cin>>password;
    bool isValid=1;
    if(strlen(password)<6){
        isValid=0;
    }else {
        for(int i=0;i< strlen(password);i++){
            if(password[i]=='a' || password[i]=='A' || password[i]=='@' || password[i]=='i'
            || password[i]=='I' || password[i]=='!'){
                isValid=0;
            }
        }
    }
    cout<<"Password: "<<isValid;
    return 0;
}
