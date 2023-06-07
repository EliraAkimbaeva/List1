#include <iostream>

int main() {
    int score = 0;
    bool gameOver = false;

    while (!gameOver) {
        std::cout << "Welcome to the game!" << std::endl;
        std::cout << "Your score: " << score << std::endl;
        std::cout << "Press '1' to increase score, '0' to quit: ";

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            score++;
        } else if (choice == 0) {
            gameOver = true;
        } else {
            std::cout << "Invalid input. Try again." << std::endl;
        }

        std::cout << std::endl;
    }

    std::cout << "Game over! Final score: " << score << std::endl;

    return 0;
}
