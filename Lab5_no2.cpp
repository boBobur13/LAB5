#include <iostream>
using namespace std;

int main() {
    for (int i=5;i<=50;i++){
      if (i%5==0|| i%3=0){
        continue;
      }
      cout<<i<< " ";
    }
    return 0;
}
