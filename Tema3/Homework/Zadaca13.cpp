//Задача 13
//Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
//Да се отпечати на екран најголемиот од броевите - “MAX: __”.

#include <iostream>
using namespace std;
int main() {
    int number1, number2, number3;
    cout << "Enter tree numbers: " << endl;
    cin >> number1 >> number2 >> number3;
    int maxNum;
    if (number1 > number2 && number1 > number3) {
        maxNum = number1;
    } else if (number2 > number1 && number2 > number3) {
        maxNum = number2;
    } else {
        maxNum = number3;
    }

    cout << "Max: " << maxNum;
    return 0;
}
