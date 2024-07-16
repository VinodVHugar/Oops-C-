#include <iostream>
using namespace std;

class Room {
private:
   int l,b,h;

public:
    Room(double l,int b,int h) {
        l = l;
        b = b;
        h = h;
    }
   int Area() {
        return 2 * (l * b + l * h + b * h);
    }


   int Volume() {
        return l * b * h;
    }
};

int main() {
   int l, b, h;

    cout << "Enter the length of the room: ";
    cin >> l;

    cout << "Enter the breadth of the room: ";
    cin >> b;

    cout << "Enter the height of the room: ";
    cin >> h;


    Room myRoom(l, b, h);
   int area = myRoom.Area();
   int volume = myRoom.Volume();

    cout << "The area of the room is: " << area << " square units" << endl;
    cout << "The volume of the room is: " << volume << " cubic units" << endl;

    return 0;
}
