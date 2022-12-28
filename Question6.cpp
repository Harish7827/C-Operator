//  Design a calculator to perform basic arithmetic operations (+,-,/,*)

#include<iostream>
using namespace std;
int main(){
    double firstNumber, secondNumber;
    cout<<"-----------------------------------\n";
    cout<<"Enter the first number: ";
    cin>>firstNumber;

    cout<<"Enter the second number: ";
    cin>>secondNumber;

    cout<<"Addition : "<< firstNumber + secondNumber <<endl;
    cout<<"Substraction : "<< firstNumber - secondNumber <<endl;
    cout<<"Multiplication : "<< firstNumber * secondNumber <<endl;
    cout<<"Division : "<< firstNumber / secondNumber <<endl;
    cout<<"-----------------------------------\n";
    return 0;
}