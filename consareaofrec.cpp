#include <iostream>
using namespace std;
class Rectangle {
private:
    float length, width, area;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
        area = length * width;
    }
    void display() {
        cout << "Area of Rectangle = " << area << endl;
    }
};
int main() {
    Rectangle r(10, 5);
    r.display();
    return 0;
}
