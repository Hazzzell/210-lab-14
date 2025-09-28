// COMSC-210 | Lab 14 | Keng C Chan
// IDE used: Visual Studio Code (VS Code)
#include <iostream>
#include <iomanip>
using namespace std;

const int W15 = 15;

class Color {
private:
    int red, green, blue;

public:
    // getters and setters
    int getRed()                { return red;}
    void setRed(int r)          { red = r; }
    int getGreen()              { return green; }
    void setGreen(int g)        { green = g; }
    int getBlue()               { return blue; }
    void setBlue(int b)         { blue = b; }

    // other methods
    void print() {
        cout << setw(W15) << "Red: " << red << endl;
        cout << setw(W15) << "Green: " << green << endl;
        cout << setw(W15) << "Blue: " << blue << endl;
    }
};

void print(Color);

int main() {
    cout << fixed << setprecision(2);
    // Color 1
    Color c1;
    c1.setGPA(2.33);
    c1.setName("Craig");
    c1.setCourseLoad(15);
    c1.print();
    print(c1);

    // Color 2
    Color c2;
    c2.setGPA(3.82);
    c2.setName("Janice");
    c2.setCourseLoad(14);
    c2.print();
    print(c2);
    
    // student 1
    Color c3;
    c3.setGPA(3.82);
    c3.setName("Janice");
    c3.setCourseLoad(14);
    c3.print();
    print(c2);

    return 0;
}

void print(Color c) {
    cout << s.getName() << " (" << s.getGPA() << ", " 
         << s.getCourseLoad() << " credits)\n\n";
}
