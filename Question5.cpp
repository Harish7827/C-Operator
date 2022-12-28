//  Write a program to calculate the sum of digits of a 3 digit number. 

#include<iostream>
using namespace std;
int main(){
    int number = 123, first, second, third, sum;
    cout<<"---------------------------------------\n";
    
    first = number/100;
    number%=100;

    second = number/10;
    
    third = number%10;

    sum = first + second + third;
    cout<<"The sum of three digit is " << sum <<endl;
    cout<<"---------------------------------------\n";
    return 0;
}
