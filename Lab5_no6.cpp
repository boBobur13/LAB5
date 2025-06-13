#include <iostream>
using namespace std;

int main() {
    int num, reversed_Num = 0;
    cin >>num;

    while (num!= 0) {
        int dig = num% 10;
        reversed_Num = reversed_Num *10 +dig;
        num=num/10;
    }
    cout<< reversed_Num << endl;
    return 0;
}
