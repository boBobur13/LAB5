#include <iostream>
using namespace std;

int main() {
    int n;
    double sum= 0;
    cout << "enter a number  ";
    cin >> n;
    for (int i = 1;i<=n; i++) {
        cout<< "1/" << i;
        if(i != n) {
            cout << " + ";
        }
        sum=sum + 1.0 / i;
    }
    cout << endl;
    cout << "The Sum is "<< sum;
    return 0;
}
