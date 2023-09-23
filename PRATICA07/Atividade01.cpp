#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        
        bool multiploDe3 = (i % 3 == 0);
        bool multiploDe5 = (i % 5 == 0);

        
        if (multiploDe3 && multiploDe5) {
            cout << "FizzBuzz";
        } else if (multiploDe3) {
            cout << "Fizz";
        } else if (multiploDe5) {
            cout << "Buzz";
        } else {
            cout << i;
        }

        
        cout << "  ";

        
        if (i % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}