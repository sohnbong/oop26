Rectangle& operator=(const Rectangle& other) {
    if (this != &other) {
        width = other.width;
        height = other.height;
    }
    return *this;
}

Rectangle r1,r2,r3;
r1=r2=r3;
