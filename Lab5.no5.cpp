#include <iostream>
using namespace std;
int main() {
    int num, sum = 0;
    cin >> num;
    while (num!= 0) {
        int dig=num% 10;
        sum = sum+dig; 
        num=num / 10;  
    }
    cout <<"The sum of digits is: "<< sum << endl;
    return 0;
}
