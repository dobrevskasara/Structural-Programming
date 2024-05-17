//Задача 8
//Од стандарден влез се читаат непознат број на хексадецимални цифри се додека
//не се внесе точка (.). Ваша задача е да го пресметате декадниот збир на внесените
//хексадецимални цифри.
//Доколку добиениот декаден збир е делив со 16 се печати Pogodok. Доколку истиот
//тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и
//6), се печати Poln pogodok инаку се печати самиот збир.
//Пример:
//влез: A 7 F 2 0 c A 5
//излез: 61
//(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните
//цифри му се 1,6)
//For example:
//Input 0 1 0 0 0 1 d 0 0 0 1 .
//Result: Poln pogodok
//А. Направи функција која ќе прави конверзија на даден хексадецимален број во
//декаден број
//Б. Направи функција која за даден број ќe печати дали е “Pogodok” или “Poln
//pogodok”.

#include <iostream>
using namespace std;

int HexNumber(char character){
    int number=0;
    if(character>='0' || character<='9') {
        number=character-'0';
    }
    if(character >= 'a' && character <= 'f')
    {
        number = character - 'a' + 10;
    }
    if(character >= 'A' && character <= 'F')
    {
        number = character - 'A' + 10;
    }
    return number;
}

void Print(int number){
    int tensDigit=(number%100)/10;
    int onesDigit=number%10;
    if(number%16==0 && tensDigit==1 && onesDigit==6)
    {
        cout<<"Full hit!"<<endl;
    }
    else if (number%16==0)
    {
        cout<<"Hit!"<<endl;
    }
    else
    {
        cout<<number<<endl;
    }

}

int main(){
    char character;
    cin>>character;
    int sumNumbers=0;
    while(character!='.'){
        int number= HexNumber(character);
        sumNumbers+=number;
        cin>>character;
    }
    Print(sumNumbers);
    return 0;
}
