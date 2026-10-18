Minimal Working Example(MWE)

#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
};

class Patient : public Person {
public:
    void display() {
        cout << "Patient: " << name;
    }
};

int main() {
    Patient p;
    p.name = "Ali";
    p.display();
    return 0;
}