#include <iostream>
using namespace std;

class Student {
public:
    double marks;


    Student(double m) {
        marks = m;
    }
};

void calAverage(Student S1, Student S2) {
    double average = (S1.marks + S2.marks) / 2;
    cout << "Average marks=" << average << endl;
}

int main() {
    Student student1(88.0);
    Student student2(20.8);

    calAverage(student1, student2);
    return 0;
}
