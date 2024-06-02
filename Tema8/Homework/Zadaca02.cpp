//Задача 2
//Напиши програма каде преку тастатура ќе се внеси низа од карактери. Програмата
//е потребно да провери низата е палиндром или не, не земајќи во предвид
//мала/голема буква. Резултатот да се отпечати.
//Sample Input: Мadam
//Sample Output: 1

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int isPalindrom (char *characters){
    for(int i=0;i<(strlen(characters)/2);i++){
        if((tolower(characters[i])!=(tolower(characters[strlen(characters)-i-1])))){
            return 0;
        }
    }
    return 1;
}

int main(){
    char arrayCharacters[30];
    cin>>arrayCharacters;
    cout<<"Palindrom: "<<isPalindrom(arrayCharacters);
    return 0;
}
