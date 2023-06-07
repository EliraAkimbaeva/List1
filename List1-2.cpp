#include <iostream>

int main() {
    const int SIZE = 7;
    int arr[SIZE];

    std::cout << "Enter 7 integers:" << std::endl;

    for (int i = 0; i < SIZE; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Elements of the input array:" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "Elements of the input array in reverse:" << std::endl;
    for (int i = SIZE - 1; i >= 0; i--) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
