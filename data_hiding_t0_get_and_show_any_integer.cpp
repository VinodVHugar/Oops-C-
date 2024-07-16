#include <iostream>
using namespace std;
class IntegerWrapper {
private:
    int hiddenInteger;

public:
    IntegerWrapper(int value) {
        hiddenInteger = value;
    }

    int getInteger() const {
        return hiddenInteger;
    }

    void setInteger(int value) {
        hiddenInteger = value;
    }
};

int main() {
    IntegerWrapper integerObj(42);
    cout << "The hidden integer is: " << integerObj.getInteger() << endl;
    integerObj.setInteger(100);
    cout << "Updated hidden integer: " << integerObj.getInteger() << endl;
    return 0;
}
