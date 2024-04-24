//Задача 2 - if
//Напиши програма каде што за внесен бренд на автомобил ќе биде отпечатена
//државата на потекло на брендот.
//Пр.Input: “Mercedes” Output: “Germany”
//Брендови кои треба да бидат земени во предвид се: Renault - France; Mazda - Japan; Alfa Romeo - Italy; Mercedes - Germany
//Lexus - Japan; Ferrari - Italy; Jeep - USA; Lamborghini - Italy; Audi - Germany; BMW - German; Fiat - Italy;Tesla - USA;
//Peugeot - France; Opel - Germany; Toyota - Japan; Citroen - France; Porsche - Germany; Honda - Japan; Cadillac - USA

#include <iostream>
using namespace std;
int main(){
    string brand;
    cout<<"Enter brand: "<<endl;
    cin>>brand;
    if(brand=="Renault" || brand=="France" || brand=="Citroen"){
        cout<<"France.";
    }
    else if(brand=="Mazda" || brand=="Lexus" || brand=="Toyota" || brand=="Honda"){
        cout<<"Japan.";
    }
    else if(brand=="Alfa Romeo" || brand=="Ferrari" || brand=="Lamborghini" || brand=="Fiat"){
        cout<<"Italy.";
    }
    else if(brand=="Mercedes" || brand=="Audi" || brand=="BMW" || brand=="Opel" || brand=="Porsche"){
        cout<<"Germany.";
    }
    else if(brand=="Jeep" || brand=="Tesla" || brand=="Cadillac"){
        cout<<"USA.";
    }
    else{
        cout<<"Invalid.";
    }
    return 0;
}
