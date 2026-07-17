#include <iostream>
using namespace std;
class Rectangle {
private:
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }
    float calculateArea() {
        return length * width;
    }
};
int main() {
    Rectangle r(10, 5);
    cout << "Area of Rectangle = " << r.calculateArea() << endl;
    return 0;
}
