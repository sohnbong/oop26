#include <iostream>
using namespace std;

class Rectangle {
private:
    int width = 0;
    int height = 0;

public:
    Rectangle& setWidth(int w) {
        width = w;
        return *this;
    }

    Rectangle& setHeight(int h) {
        height = h;
        return *this;
    }

    void print() {
        cout << width << " " << height << endl;
    }
};

int main() {
    Rectangle r;

    r.setWidth(10).setHeight(20).print();
}
