#include <iostream>
#include <string>

int main() {
    std::string input;
    std::string marqueeText;

    std::cout << "Welcome to CSOPESY!\n\n";

    std::cout << "Group developer:\n";
    std::cout << "Garcia, Theodore Rodolfo III\n";
    std::cout << "Magbatoc, Ethan Daniel\n";
    std::cout << "Parado, Sky Hannah\n\n";
    std::cout << "Villorente, Khyle Raeka\n\n";

    std::cout << "Version date: 2026-09-18\n\n";

    while (true) {
        std::cout << "Command> ";
        std::getline(std::cin, input);

        if (input == "help") {
            std::cout << "help - displays the commands and its description\n";
            std::cout << "start_marquee - starts the marquee \"animation\"\n";
            std::cout << "stop_marquee - stops the marquee \"animation\"\n";
            std::cout << "set_text - accepts a text input and displays it as a marquee\n";
            std::cout << "set_speed - sets the marquee animation refresh in milliseconds\n";
            std::cout << "exit - terminates the console\n";
        }
        else if (input == "exit") {
            std::cout << "Terminating console...\n";
            break;
        }
        else if (input.rfind("set_text ", 0) == 0) {
            marqueeText = input.substr(9);

            if (marqueeText.empty()) {
                std::cout << "Error: No text provided.\n";
            }
            else {
                std::cout << "Text saved for marquee: " << marqueeText << "\n";
            }
        }
        else {
            std::cout << "Unknown command. Please try again.\n";
        }
    }

    return 0;
}
