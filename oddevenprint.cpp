#include <iostream>
using namespace std;
class Number {
public:
    void printEven(int n) {
        cout << "Even Numbers: ";
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0)
                cout << i << " ";
        }
        cout << endl;
    }
    void printOdd(int n) {
        cout << "Odd Numbers: ";
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0)
                cout << i << " ";
        }
        cout << endl;
    }
};
int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    Number obj;   
    obj.printEven(N);
    obj.printOdd(N);
    return 0;
}
