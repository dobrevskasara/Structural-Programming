//Задача 5
//Од стандарден влез се чита ливче во спортска обложувалница.
//Во првиот ред е запишана сумата на уплата (цел број).
//Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #)
//е запишан по еден тип во следниот формат:
//ab12 1 1.25
//Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци),
//вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
//Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето.
//Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
//Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int payment;
    cin>>payment;
    char code[9];
    cin>>code;
    float prize=payment;
    float maxCoef=0;
    char maxCode[9];
    float maxType=0.0;
    while(strcmp(code,"#")!=0){
        float type;
        cin>>type;
        float coef;
        cin>>coef;
        prize*=coef;
        if(maxCoef<coef){
            maxCoef=coef;
            strcpy(maxCode, code);
            maxType=type;
        }
        cin>>code;
    }
    cout<<maxCode<<" "<<maxType<<" "<<maxCoef<<endl;
    cout<<prize;
    return 0;
}
