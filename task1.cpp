#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeToFile(const string& filename) {
    ofstream outFile(filename); // overwrite mode
    if (!outFile) {
        cerr << "Error opening file for writing.\n";
        return;
    }

    string input;
    cout << "Enter text to write to the file (type 'END' to stop):\n";
    while (true) {
        getline(cin, input);
        if (input == "END") break;
        outFile << input << endl;
    }

    outFile.close();
    cout << "Data written successfully.\n";
}

void appendToFile(const string& filename) {
    ofstream outFile(filename, ios::app); // append mode
    if (!outFile) {
        cerr << "Error opening file for appending.\n";
        return;
    }

    string input;
    cout << "Enter text to append to the file (type 'END' to stop):\n";
    while (true) {
        getline(cin, input);
        if (input == "END") break;
        outFile << input << endl;
    }

    outFile.close();
    cout << "Data appended successfully.\n";
}

void readFromFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Error opening file for reading.\n";
        return;
    }

    string line;
    cout << "\n--- File Contents ---\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();
    cout << "--- End of File ---\n";
}

int main() {
    string filename = "sample.txt";
    int choice;

    do {
        cout << "\nFile Handling Menu\n";
        cout << "1. Write to File (overwrite)\n";
        cout << "2. Append to File\n";
        cout << "3. Read from File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        cin.ignore(); // to consume the newline after entering the choice

        switch (choice) {
            case 1:
                writeToFile(filename);
                break;
            case 2:
                appendToFile(filename);
                break;
            case 3:
                readFromFile(filename);
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
