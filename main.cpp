// COMSC-210 | Lab 14: Color Class | Aidan Woodcock | 2025-09-28
// IDE used: Visual Studio Code

#include <iostream>

using namespace std; 
// class definition for Color with private variables and public methods
class Color {
    private: 
        int Red, Green, Blue; 
    public:
        // Getters and Setters methods
        void setRed(int r) { Red = r;}
        void setGreen(int g) { Green = g;}
        void setBlue(int b) { Blue = b;}
        int getRed() const { return Red;}
        // all getters use const to indicate they do not modify the object
        int getGreen() const { return Green;}
        int getBlue() const { return Blue;}
        // Display method, also const 
        void display() const { 
            cout << "Decimal RGB: (" << Red << ", " << Green << ", " << Blue << ")" << endl; 
        }
};

int main() {
    // Creating Color objects and setting their RGB values
    Color teal = Color();
    teal.setRed(0);
    teal.setGreen(128);
    teal.setBlue(128);
    Color magenta = Color();
    magenta.setRed(255);
    magenta.setGreen(0);
    magenta.setBlue(255);
    Color tan = Color();
    tan.setRed(210);
    tan.setGreen(180);
    tan.setBlue(140);
    Color forestGreen = Color();
    forestGreen.setRed(34);
    forestGreen.setGreen(139);
    forestGreen.setBlue(34);
    // Displaying the RGB values of each color using the display method
    cout << "Teal "; 
    teal.display();
    cout << "Magenta "; 
    magenta.display();
    cout << "Tan "; 
    tan.display();
    cout << "Forest Green "; 
    forestGreen.display();

    return 0;
}
