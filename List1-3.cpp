#include <iostream>
#include <string>

struct Student {
    int registrationNumber;
    std::string name;
    std::string surname;
    std::string fieldOfStudy;
};

int main() {
    const int SIZE = 5;
    Student students[SIZE];

    for (int i = 0; i < SIZE; i++) {
        std::cout << "Enter student " << i + 1 << " details:" << std::endl;
        std::cout << "Registration number: ";
        std::cin >> students[i].registrationNumber;
        std::cout << "Name: ";
        std::cin >> students[i].name;
        std::cout << "Surname: ";
        std::cin >> students[i].surname;
        std::cout << "Field of study: ";
        std::cin >> students[i].fieldOfStudy;
        std::cout << std::endl;
    }

    std::cout << "Students' data:" << std::endl;

    for (int i = 0; i < SIZE; i++) {
        std::cout << "Student " << i + 1 << ":" << std::endl;
        std::cout << "Registration number: " << students[i].registrationNumber << std::endl;
        std::cout << "Name
