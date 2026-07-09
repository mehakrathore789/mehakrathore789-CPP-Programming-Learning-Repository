/*
 * Program: The 'this' Pointer
 * Description: Inside a member function, 'this' is a pointer to the
 *              current object. It's most useful for disambiguating a
 *              parameter name from a member name that share the same name.
 */

#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    // Parameter is also named 'width' - 'this->width' refers to the member,
    // while plain 'width' refers to the parameter.
    void setWidth(int width) {
        this->width = width;
    }

    int getWidth() {
        return this->width;
    }
};

int main() {
    Box box;
    box.setWidth(15);
    cout << "Box width: " << box.getWidth() << endl;

    return 0;
}
