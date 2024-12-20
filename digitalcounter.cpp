#include <iostream>
using namespace std;
//  Digit Counter
int main() {
    long number;
    int digit = 0;
    cout << "Enter a number: ";
    cin  >> number;
    if (number < 0) 
    {
        number = -number;
    }
    do 
    {
        number /= 10;
        digit++;
    } 
    while (number > 0);
    cout << "Total number of digits : " << digit << endl;

    return 0;
}
