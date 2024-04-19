//Задача 4
//Напиши програма која преку тастатура ќе овозможува да се внесат две
//променливи x и y.
//Доделија поголемата вредност од x или y на променлива наречена maxValue и
//прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор)

#include <iostream>
using namespace std;
int main(){
    int valueX, valueY, maxValue;
    cout<<"Enter two numbers: "<<endl;
    cin>>valueX>>valueY;
    valueX>valueY ? maxValue=valueX : maxValue=valueY;
    cout<<"Max is: "<<maxValue;
    return 0;
}
