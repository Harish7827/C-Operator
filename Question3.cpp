// There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A". 

#include <iostream>
using namespace std;
int main(){
    int total, boys, girls;
    cout<<"------------------------------------------------------\n";
    boys = 17;
    total = (80/100) * 45; // कुल विद्यार्थी जिन्होंने A ग्रैड प्राप्त किया 
    girls = total - boys; 
    cout << "Number of girls getting grade A = " << girls << endl;
    cout<<"------------------------------------------------------\n";
    return 0;
}
