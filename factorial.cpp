#include <iostream>
using namespace std;
class Factorial {
private:
    int n;
    long long fact;
public:
    Factorial(int num) {
        n = num;
        fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        cout << "Factorial of " << n << " = " << fact << endl;
    }
};
int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    Factorial obj(N);
    return 0;
}
