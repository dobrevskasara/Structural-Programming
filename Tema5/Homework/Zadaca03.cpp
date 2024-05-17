//Задача 3
//Напиши програма каде што ќе може да се внесат два броеви и да се провери дали
//сумата од најголемата и најмалата цифра од првиот број е еднаква со производот
//на најмалата и најголемата цифра на вториот број. Резултатот да се отпечати. (17)
//а. Направи функција која ќе најдува најголема цифра за даден број
//б. Направи функција која ќе најдува најамла цифра за даден број
//ц. Направи функција која ќе пресметува сума на два броеви
//д. Направи функција која ќе пресметува производ на два броеви

#include <iostream>
using namespace std;

int MaxDigit(int number){
    int newNumber=number;
    int max=0;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit>max){
            max=digit;
        }
        newNumber=newNumber/10;
    }
    return max;
}

int MinDigit(int number){
    int newNumber=number;
    int min=9;
    while(newNumber!=0){
        int digit=newNumber%10;
        if(digit<min){
            min=digit;
        }
        newNumber=newNumber/10;
    }
    return min;
}

int Sum(int number1, int number2){
    return number1+number2;
}

int Product(int number1, int number2){
    return number1*number2;
}

int main(){
    int number;
    cout<<"Enter number: ";
    cin>>number;
    int sum=Sum(MaxDigit(number), MinDigit(number));
    cout<<"Sum of max and min digit is: "<<sum<<endl;
    int product= Product(MaxDigit(number), MinDigit(number));
    cout<<"Product of max and min digit is: "<<product<<endl;
    if(sum==product){
        cout<<"Sum of min and max digit is equal with product of min and max digit.";
    }
    else if(sum>product){
        cout<<"Sum of min and max digit is greater than product of min and max digit.";
    }
    else{
        cout<<"Product of min and max digit is greater than sum of min and max digit.";
    }
    return 0;
}
