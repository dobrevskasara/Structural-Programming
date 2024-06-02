//Задача 4
//Напиши програма каде преку тастатура ќе се внеси низа од карактери. Програмата
//е потребно да ги тргне сите специјални карактери од низата. Резултатот да се
//отпечати.
//Sample Input: a@@b?c``d
//Sample Output: abcd

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void deleteSpecials(char *characters){
    char newArray[30];
    int index=0;
    for(int i=0;i< strlen(characters);i++){
        if(isalnum(characters[i])){
            newArray[index]=characters[i];
            index++;
        }
    }
    newArray[index]='\n';
    cout<<"Array without specials: "<<newArray;
}

int main(){
    char arrayCharacters[30];
    cin>>arrayCharacters;
    deleteSpecials(arrayCharacters);
    return 0;
}
