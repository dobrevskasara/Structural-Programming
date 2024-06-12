//Задача 10
//Од стандарден влез прво се читаат два знака z1 и z2 , а потоа се читаат редови со низи од знаци се’ додека
//не се прочита знакот # (секој од редовите не е подолг од 80 знаци).
//Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од
//знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
//Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа
//пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char z1, z2;
    cin>>z1>>z2;
    char array[80];
    cin.getline(array,80);
    while(strcmp(array,"#")!=0){
        int firstCharacter=0;
        for(int i=0;i< strlen(array);i++){
            if(array[i]==z1){
                firstCharacter=1;
            }
            else if(firstCharacter && array[i]!=z2){
                cout<<array[i];
            }
            if(array[i]==z2){
                cout<<endl;
                break;
            }
        }
        cin.getline(array,80);
    }
    return 0;
}
