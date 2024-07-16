#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char ch[100], p[100];
    int a;

    cout << "Enter a string: ";
    cin.getline(ch, 100);

    a = strlen(ch);
    cout << "Length of the string: " << a << endl;

    cout << "Enter another string: ";
    cin.getline(p, 100);

    if (strcmp(p, ch) == 0) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    strcpy(p, ch);
    cout << "Copied string: " << p << endl;

    strcat(p, ch);
    cout << "Concatenated string: " << p << endl;

    cout << "Reverse the string: ";
    for (int i = a - 1; i >= 0; i--) {
        cout << ch[i];
    }
    cout << endl;

    return 0;
}
