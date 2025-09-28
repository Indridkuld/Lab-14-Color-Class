// COMSC-210 | Lab 14: Color Class | Aidan Woodcock | 2025-09-28
// IDE used: Visual Studio Code

#include <iostream>

using namespace std; 

class Color {
    private: 
        int Red, Green, Blue; 
    public:
        // Getters and Setters methods
        void setRed(int r) { Red = r;}
        void setGreen(int g) { Green = g;}
        void setBlue(int b) { Blue = b;}
        int getRed() const { return Red;}
        int getGreen() const { return Green;}
        int getBlue() const { return Blue;}
        // Display method
        void display() const { 
            cout << "RGB(Red:" << Red << ", Green:" << Green << ", Blue:" << Blue << ")" << endl; 
        }
};

int main() {
    

    return 0;
}