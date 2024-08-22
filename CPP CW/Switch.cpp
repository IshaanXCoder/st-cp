#include <iostream>

int main() {
    char myChar;
    std::cin >> myChar;

    switch (myChar) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout << "It is a vowel";
            break;
        default:
            std::cout << "It is not a vowel";
            break;
    }

    return 0;
}