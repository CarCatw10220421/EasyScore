#include "AVLTree.h"

#include <iostream>
#include <limits>
#include <string>

int main() {
    // Create a command line interface that shows insert, delete, search, and rankings.
    AVLTree leaderboard;
    int choice;

    std::cout << "\nEasyScore Leaderboard\n";
    std::cout << "1. Add player\n";
    std::cout << "2. Delete player\n";
    std::cout << "3. Search player\n";
    std::cout << "4. Display rankings\n";
    std::cout << "5. Exit\n";
    std::cout << "Choose an option: ";
    std::cin >> choice;

    if (choice != 1||2||3||4||5) {
        std::cin.clear();
        std::cout << "Please enter a number from 1 to 5.\n";
        return 0;
    }

    if (choice == 1) {
        int id;
        int score;
        std::string name;

        std::cout << "Enter player ID: ";
        std::cin >> id;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter player name: ";
        std::getline(std::cin, name);

        std::cout << "Enter player score: ";
        std::cin >> score;

        leaderboard.insert(Player(id, name, score));
        std::cout << "Player added.\n";
    } else if (choice == 2) {
        int id;

        std::cout << "Enter player ID to delete: ";
        std::cin >> id;

        leaderboard.remove(id);
        std::cout << "Delete complete.\n";
    } else if (choice == 3) {
        int id;

        std::cout << "Enter player ID to search: ";
        std::cin >> id;

        Player* player = leaderboard.search(id);

        if (player == nullptr) {
            std::cout << "Player not found.\n";
        } else {
            std::cout << "ID: " << player->id << "\n";
            std::cout << "Name: " << player->name << "\n";
            std::cout << "Score: " << player->score << "\n";
        }
    } else if (choice == 4) {
        leaderboard.displayRankings();
    } else if (choice == 5) {
        std::cout << "Goodbye.\n";
    } else {
        std::cout << "Please enter a number from 1 to 5.\n";
    }

    return 0;
}
