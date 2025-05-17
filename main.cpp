#include <iostream>
#include <string>

using namespace std;

void intro() {
    cout << "Welcome to the Text Adventure Game!\n";
    cout << "You find yourself in a dark forest.\n";
    cout << "What do you want to do?\n";
    cout << "1. Go north\n";
    cout << "2. Go south\n";
    cout << "3. Look around\n";
}

int main() {
    intro();
    int choice;

    while (true) {
        cout << "\nEnter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You walk north and find a river. The adventure continues...\n";
                break;
            case 2:
                cout << "You head south and encounter a wild animal!\n";
                break;
            case 3:
                cout << "It's dark and quiet. You hear distant howls.\n";
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
