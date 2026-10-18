# Hospital-Management-System
A C++ based Hospital Management System using Object-Oriented-programming.

1. Project Overview (BLUF)

The Hospital Management System is a C++ console application for managing patient and doctor records. It uses object-oriented programming and file handling to store and display hospital information.

2. Features

- Patient registration and history
- Patient bill management
- Doctor records and availability
- File handling for saving records

3. Dependencies

- Operating System: Windows, Linux, or macOS
- Language: C++
- Compiler: GCC or MinGW
- Libraries: "iostream", "fstream", "string"

4. Installation and Execution

1. Install: Install a C++ compiler such as GCC or MinGW.
2. Prepare: Download the repository and open the project folder in a terminal.
3. Compile and Run: Compile and execute the program.

For Windows:

g++ "oop project.cpp" -o hospital.exe
hospital.exe

For Linux or macOS:

g++ "oop project.cpp" -o hospital
./hospital

5. Minimal Working Example (MWE)

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

Output:

Patient: Ali

This example demonstrates inheritance and object creation in C++.

6. Limitations

- The application uses a console interface.
- Records are stored in text files rather than a database.
- The system does not include user authentication.

7. Conclusion

This project demonstrates how C++ classes, inheritance, and file handling can be used to manage basic hospital records.
