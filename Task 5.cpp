#include <iostream>
using namespace std;
int main() 
{

    int Choice;

    cout << "Welcome to the Bookstore!\n";
    cout << "Please select a genre:\n";
    cout << "1. Fiction\n";
    cout << "2. Non-Fiction\n";
    cout << "3. Science\n";
    cout << "4. Mystery\n";
    cout << "5. Biography\n";

    cout << "Enter your choice: ";
    cin >> Choice;

    switch (Choice) 
    {
        case 1:

            cout << "Fiction\n";
            cout << "Description: Imaginative stories and narratives.\n";
            cout << "Price Range: $5 - $18\n";
            break;

        case 2:

            cout << "Non-Fiction\n";
            cout << "Description: Factual accounts and real-world topics.\n";
            cout << "Price Range: $23 - $32\n";
            break;

        case 3:

            cout << "Science\n";
            cout << "Description: Scientific theories, experiments, and discoveries.\n";
            cout << "Price Range: $39- $45\n";
            break;

        case 4:

            cout << "Mystery\n";
            cout << "Description: Intriguing stories with puzzles and suspense.\n";
            cout << "Price Range: $12 - $19\n";
            break;

        case 5:

            cout << "Biography\n";
            cout << "Description: Real-life stories of individuals.\n";
            cout << "Price Range: $26 - $30\n";
            break;

        default:

            cout << "Invalid choice. Please select a number between 1 and 5.\n";

    }

    return 0;
}