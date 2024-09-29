// Ferdaws Alamyar 
// Professor, Mark
// COMSC-210-5293
// September 29,2024

#include <iostream>
#include <iomanip>

class Color {
private:
    int red;
    int green;
    int blue;

public:
    
    Color(int r = 0, int g = 0, int b = 0) : red(r), green(g), blue(b) {}

    
    void setRed(int r) {
        red = r;
    }

    void setGreen(int g) {
        green = g;
    }

    void setBlue(int b) {
        blue = b;
    }

  
    int getRed() const {
        return red;
    }

    int getGreen() const {
        return green;
    }

    int getBlue() const {
        return blue;
    }

    
    void print() const {
        std::cout << "Color(R: " << red << ", G: " << green << ", B: " << blue << ")\n";
    }
};

int main() {
   
    Color color1(255, 0, 0); // Red
    Color color2(0, 255, 0); // Green
    Color color3(0, 0, 255); // Blue
    Color color4(255, 255, 0); // Yellow
    Color color5(0, 255, 255); // Cyan

    
    std::cout << std::setw(30) << std::setfill('-') << "-" << "\n"; 
    color1.print();
    color2.print();
    color3.print();
    color4.print();
    color5.print();
    std::cout << std::setw(30) << std::setfill('-') << "-" << "\n"; 
    return 0;
}
