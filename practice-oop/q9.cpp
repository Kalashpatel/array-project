#include <iostream>
using namespace std;

class NumberTools {
public:
  
    bool isPrime(int num) {
        if (num <= 1)
            return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0)
                return false;
        }
        return true;
    }
};

int main() {
    NumberTools nt;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (nt.isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    return 0;
}