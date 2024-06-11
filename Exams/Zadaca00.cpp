//Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и
//специјални знаци (без знаци за празно место), а секоја од нив не е подолга од 80 знаци.
//Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром
//(се чита исто од од лево на десно и од десно на лево) и што содржи барем еден специјален знак.
//Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов,
//се печати првата низа којашто го задоволува условот.
//Влез:
//9
//a!bcdedcb!a
//Kfd?vsvv98_89vvsv?dfK
//Ccsvsdvdfv
//342425vbbcb
//352!2353696969625
//gdg??dfg!!
//5336346644747
//8338736767867
//12344321
//Излез:
//Kfd?vsvv98_89vvsv?dfK
//** ispunct() - проверува дали карактерот е интерпукциски знак
//** isalpha() - проверува дали карактерот е буква
//** isdigit()- проверува дали карактерот е цифра
//** strlen() - одредува должина на стринг
//** strcpy() - копира стринг во дестинациски стринг

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isPalindrom(char *array){
    bool hasSpecial=0;
    for (int i=0;i<strlen(array)/2;i++){
        if(tolower(array[i])!=tolower(array[(strlen(array)-i-1)])){
            return 0;
        }
        if(!isalnum(array[i])){
            hasSpecial=1;
        }
    }
    return hasSpecial;
}

int main() {
    int n;
    cin >> n;
    char chArray[80];
    char longestArray[80];
    int maxLenth=0;

    for (int i = 0; i < n; i++) {
        cin >> chArray;
        if (isPalindrom(chArray)) {
            if(strlen(chArray)>maxLenth){
                strcpy(longestArray,chArray);
                maxLenth= strlen(chArray);
            }
        }
    }

    if(maxLenth!=0){
        cout<<longestArray;
    }
    else{
        cout<<"Nema.";
    }
    return 0;
}
