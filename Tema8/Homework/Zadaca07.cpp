//Задача 7
//Напиши програма каде преку тастатура ќе се внеси низа од карактери. Програмата
//е потребно да провери дали низата се состои само од уникатни карактери.
//Резултатот да се отпечати.
//Пр.:
//("Filename") -> 0
//("abc") -> 1

#include <iostream>
#include <cstring>
using namespace std;

int checkUnique(char *characters){
    char newArray[30];
    newArray[0]='\0';
    int index=0;
    for(int i=0;i< strlen(characters);i++){
        if(strchr(newArray, characters[i])==NULL){
            newArray[index]=characters[i];
            index++;
            newArray[index]='\0';
        }
    }
    return strlen(newArray)== strlen(characters);
}

int main(){
    char chArray[30];
    cin>>chArray;
    cout<<"Only unique characters: "<<checkUnique(chArray);
    return 0;
}
