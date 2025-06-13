#include <iostream>

#include <ctime>
using namespace std;
int main() {
    srand(time(0)); 
    int evennum = 0;
    int oddnum = 0;
    for (int i = 0;i< 1000;i++) {
        int num = rand();
        if (num% 2 == 0) {
            evennum++;
        } else {
            oddnum++;
      }
    }
    cout << "even numbers :" <<evennum << endl;
    cout << "odd numbers: "<<oddnum <<endl;
    return 0;
}
