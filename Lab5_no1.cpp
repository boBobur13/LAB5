 #include <iostream>
using namespace std;

int main() {
    int n;
    while (true){
        cin >> n;
        if (n < 0) {
            cout << n << " is negative\n";
            break; 
        }
        cout << n<<" ";
    }
    return 0;
}
