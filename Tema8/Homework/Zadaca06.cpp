//Задача 6
//Напиши програма каде преку тастатура ќе се внеси низа од карактери. Програмата
//е потребно да отстрани специфичен карактер од низата. Резултатот да се отпечати.
//Пр.:
//("Filename", "e") -> "Filnam"
//("Compilation Time", "i") -> "Complaton Tme"

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void deleteChar(char *characters, char special){
    char newArray[30];
    int index=0;
    for(int i=0;i< strlen(characters);i++){
        if(characters[i]!=special){
            newArray[index]=characters[i];
            index++;
        }
    }
    cout<<newArray;
}

int main(){
    char chArray[30];
    char character;
    cin>>chArray;
    cin>>character;
    deleteChar(chArray,character);
    return 0;
}
