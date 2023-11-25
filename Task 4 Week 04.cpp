#include <iostream>
#include <cmath>

class Hexagon {
private:
    double side_length;

public:
    Hexagon(double length) : side_length(length) {}

    double calcArea() {
        return 1.5 * 1.732 * pow(side_length, 2);
    }

    double calcPeri() {
        return 6 * side_length;
    }

    double calcAngleSum() {
        return 6 * 120;
    }

    void display() {
        std::cout << "Hexagon:" << std::endl;
        std::cout << "Area: " << calcArea() << std::endl;
        std::cout << "Perimeter: " << calcPeri() << std::endl;
        std::cout << "Sum of Angles: " << calcAngleSum() << std::endl;
    }
};

class Square {
private:
    double side_length;

public:
    Square(double length) : side_length(length) {}

    double calcAreaSquare() {
        return pow(side_length, 2);
    }

    double calcPeriSquare() {
        return 4 * side_length;
    }

    void display() {
        std::cout << "Square:" << std::endl;
        std::cout << "Area: " << calcAreaSquare() << std::endl;
        std::cout << "Perimeter: " << calcPeriSquare() << std::endl;
    }
};

int main() {
    std::string cnic = "42301-59844826";
    int last_digit = cnic[cnic.length() - 1] - '0';

    Hexagon hexagon(last_digit);
    Square square(last_digit + 1);

    while (true) {
        std::cout << "\nMenu:" << std::endl;
        std::cout << "1. Hexagon" << std::endl;
        std::cout << "2. Square" << std::endl;
        std::cout << "Any other input to exit" << std::endl;

        char choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == '1') {
            hexagon.display();
        } else if (choice == '2') {
            square.display();
        } else {
            std::cout << "Exiting program." << std::endl;
            break;
        }
    }

    return 0;
}
