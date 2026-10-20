#include <iostream>
#include <queue>
#include <string>
#include <limits>
using namespace std;

int main() {
    queue<string> printQueue;
    int choice;
    string document;

    do {
        cout << "\n=== PRINTER QUEUE MANAGEMENT SYSTEM ===\n";
        cout << "1. Add document to queue\n";
        cout << "2. View print queue\n";
        cout << "3. Print next document\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
            case 1:
                cout << "Enter document name: ";
                getline(cin, document);

                if (document.empty()) {
                    cout << "Document name cannot be empty.\n";
                } else {
                    printQueue.push(document);
                    cout << document << " added to the print queue.\n";
                }
                break;

            case 2:
                if (printQueue.empty()) {
                    cout << "The print queue is empty.\n";
                } else {
                    queue<string> temp = printQueue;
                    cout << "\nDocuments waiting to be printed:\n";

                    while (!temp.empty()) {
                        cout << "- " << temp.front() << '\n';
                        temp.pop();
                    }
                }
                break;

            case 3:
                if (printQueue.empty()) {
                    cout << "No documents to print.\n";
                } else {
                    cout << "Printing: " << printQueue.front() << '\n';
                    printQueue.pop();
                    cout << "Document processed successfully.\n";
                }
                break;

            case 4:
                cout << "Exiting the application.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}
