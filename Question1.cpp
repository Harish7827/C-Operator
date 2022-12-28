// Write a program to check whether two numbers (entered by user) are equal or not.

#include<iostream>
using namespace std;
int main(){
    int firstNumber, secondNumber;
    cout<<"--------------------------------------\n";
    cout<<"Enter the first number: ";
    cin>>firstNumber;
    cout<<"--------------------------------------\n";
    cout<<"Enter the second number: ";
    cin>>secondNumber;
    cout<<"--------------------------------------\n";
    if (firstNumber == secondNumber){
        cout<<"Both are equal\n";
    }else{
        cout<<"Both are not equal\n";
    }
    cout<<"--------------------------------------\n";
    return 0;
}