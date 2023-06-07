#include <iostream>
#include <string>
#include <vector>

struct Participant {
    std::string name;
    std::string surname;
    int age;
};

int main() {
    std::vector<Participant> participants;

    while (true) {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Add participant" << std::endl;
        std::cout << "2. View list of participants" << std::endl;
        std::cout << "3. Quit" << std::endl;
        std::cout << "Enter your choice (1-3): ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            Participant participant;

            std::cout << "Enter participant's name: ";
            std::cin >> participant.name;

            std::cout << "Enter participant's surname: ";
            std::cin >> participant.surname;

            std::cout << "Enter participant's age: ";
            std::cin >> participant.age;

            participants.push_back(participant);

            std::cout << "Participant added successfully!" << std::endl;
            std::cout << std::endl;
        } else if (choice == 2) {
            std::cout << "List of participants:" << std::endl;

            for (const auto& participant : participants) {
                std::cout << "Name: " << participant.name << std::endl;
                std::cout << "Surname: " << participant.surname << std::endl;
                std::cout << "Age: " << participant.age << std::endl;
                std::cout << std::endl;
            }
        } else if (choice == 3) {
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
