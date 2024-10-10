#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    Student(int m) {
        marks = m;
    }

    friend void showMarks(Student s);
};

void showMarks(Student s) {
    cout << "The marks of the student are: " << s.marks << endl;
}

int main() {
    Student s1(90);
    showMarks(s1);
    return 0;
}