#include <iostream>
using namespace std;

int square(int num) {
    return num * num;
}

int main() {
    int number = 5;
    int result = square(number);

    cout << "square="<< result << endl;

    return 0;
}
