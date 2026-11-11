#include <iostream>
using namespace std;

class Rectangle;

void display(Rectangle* p);

class Rectangle {
public:
    int width = 10;

    void show() {
        display(this);
    }
};

void display(Rectangle* p) {
    cout << p->width << endl;
}

int main() {
    Rectangle r;
    r.show();
}
