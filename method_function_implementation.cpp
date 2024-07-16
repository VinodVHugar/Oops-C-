#include<iostream>

using namespace std;

class Myclass {
public:
    int addnumbers(int a, int b) {
        return a + b;
    }
};

int main() {
    int result = Myclass().addnumbers(3, 5);
    cout << result;

    Myclass obj;
    int res = obj.addnumbers(3, 5);
    cout << res;

    return 0;
}

