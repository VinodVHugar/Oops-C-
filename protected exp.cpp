#include<iostream>
using namespace std;

class parent
{
protected:
    int id_p;

public:
    // Public member function to set the value of id_p
    void setParentId(int id) {
        id_p = id;
    }

    // Public member function to get the value of id_p
    int getParentId() const {
        return id_p;
    }
};

class child : public parent
{
public:
    int id_c;
};

int main()
{
    child obj;

    cout << "Enter the parent id: ";
    int parentId;
    cin >> parentId;

    // Use the setParentId function to set the value of id_p
    obj.setParentId(parentId);

    cout << "Enter the child id: ";
    cin >> obj.id_c;

    // Use the getParentId function to get the value of id_p
    cout << "Child id is: " << obj.id_c << endl;
    cout << "Parent id is: " << obj.getParentId() << endl;

    return 0;
}
