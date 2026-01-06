#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height; // Largura e Altura

public:
    Rectangle() {
        width = 0;
        height = 0;
    }

    void setWidth(int width) {
        this->width = width;
    }

    void setHeight(int height) {
        this->height = height;
    }

    void display() {
        cout << "Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Rectangle rect;
    rect.setWidth(10);
    rect.setHeight(20);
    rect.display();
    return 0;
}
