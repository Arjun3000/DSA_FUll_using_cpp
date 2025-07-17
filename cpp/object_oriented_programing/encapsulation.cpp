#include<iostream>
using namespace std;

// Rectangle class demonstrating encapsulation
class rectangle {
private:
    int length;
    int breadth;

public:
    // Default constructor
    rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor
    rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Getter for length
    int getlength() {
        return length;
    }

    // Setter for length
    void setlength(int val) {
        length = val;
    }
};

int main() {
    // Create rectangle object with length 4 and breadth 5
    rectangle r1(4, 5);

    // Print initial length
    cout << "Before : " << r1.getlength() << endl;

    // Change length using setter
    r1.setlength(10);

    // Print updated length
    cout << "After : " << r1.getlength() << endl;

    return 0;
}