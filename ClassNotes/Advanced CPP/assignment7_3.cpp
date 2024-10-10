#include <iostream>
#include <cmath>
using namespace std;

class AREA {
public:

    AREA(float radius) {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }


    AREA(float length, float breadth) {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }


    AREA(float a, float b, float c) {
        float s = (a + b + c) / 2;  
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Area of Triangle: " << area << endl;
    }
};

int main() {
    AREA circle(5);     
    AREA rectangle(4, 6);  
    AREA triangle(3, 4, 5);

    return 0;
}