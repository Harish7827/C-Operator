//  Write a program to calculate the sum of the first and the second last digit of a 5 digit number.

#include <iostream>
using namespace std;
int main(){
    int number = 12345, first, second, third, fourth, fifth, sum;
    cout<<"------------------------------------------------------\n";
    first = number/10000;
    number%=10000;

    second = number/1000; 
    number%=1000;

    third = number/100; 
    number%=100;

    fourth = number/10; 

    fifth = number%10;

    sum = first + fourth;

    cout << "The sum of first and fourth digit is: " << sum << endl;
    cout<<"------------------------------------------------------\n";
    return 0;
}