#include <iostream>
#include <string>

using namespace std;

void intro() {
    cout << "Welcome to the Text Adventure Game!\n";
    cout << "You find yourself in a dark forest.\n";
    cout << "What do you want to do?\n";
    cout << "1. Go forward\n";
    cout << "2. Go left\n";
    cout << "3. Look right\n";
}

int main() {
    intro();
    int choice;

    while (true) {
        cout << "\nEnter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You walked forward and find a river. The adventure continues...\n";
                break;
            case 2:
                cout << "You went left and encounter a wild bear!!\nYou are dead :0\n";
                break;
            case 3:
                cout << "It's dark and quiet. You hear distant howls.\nWhat next?\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
                continue;
        }
        break;
    }

    cout << "Thanks for playing!\n";
    return 0;
}
