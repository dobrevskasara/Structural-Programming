//Задача 6
// Напиши програма која преку тастатура ќе овозможува да се внесат три променливи
//x, y и z.
//Искористи еден израз за дa доделиш нова вредност во променливата “result”, така
//што доколку z е поголемо од 15, резултатот ќе биде збирот на x и y. Во спротивно
//резултатот ќе биде разликата на x и y.
//Прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор).

#include <iostream>
using namespace std;
int main(){
    int valueX, valueY, valueZ;
    cout<<"Enter three numbers: "<<endl;
    cin>>valueX>>valueY>>valueZ;
    int result;
    result = valueZ>15 ? valueX+valueY : valueX-valueY;
    cout<<"The result is: "<<result;
    return 0;
}
