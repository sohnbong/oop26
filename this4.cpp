#include <iostream>
using namespace std;

class Rectangle {
public:
    bool isSameObject(const Rectangle& other) const {
        return this == &other;
    }
};

int main() {
    Rectangle r1, r2;

    cout << r1.isSameObject(r1) << endl;
    cout << r1.isSameObject(r2) << endl;
}
