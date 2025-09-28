// COMSC-210 | Lab 14 | Keng C Chan
// IDE used: Visual Studio Code (VS Code)
#include <iostream>
#include <iomanip>
using namespace std;

const int W15 = 15;
class Student {
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
    // student 1
    Student craig;
    craig.setGPA(2.33);
    craig.setName("Craig");
    craig.setCourseLoad(15);
    craig.print();
    print(craig);

    // student 2
    Student janice;
    janice.setGPA(3.82);
    janice.setName("Janice");
    janice.setCourseLoad(14);
    janice.print();
    print(janice);
    
    return 0;
}

void print(Student s) {
    cout << s.getName() << " (" << s.getGPA() << ", " 
         << s.getCourseLoad() << " credits)\n\n";
}