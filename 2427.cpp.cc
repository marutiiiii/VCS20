#include <iostream>
using namespace std;

class PhotoEditor {
public:
    void resize(int width) {
        cout << "Resized to width: " << width << endl;
    }

    void resize(int width, int height) {
        cout << "Resized to width: " << width << " and height: " << height << endl;
    }

    void resize(float scaleFactor) {
        cout << "Resized by scale factor: " << scaleFactor << endl;
    }
};

int main() {
    PhotoEditor editor;
    editor.resize(800);
    editor.resize(800, 600);
    editor.resize(1.5f);
    return 0;
}

