#include <iostream>
using namespace std;
int main() 
{

    int choice;
    string feedback;

    cout << "Customer Support Menu\n";
    cout << "1. Billing\n";
    cout << "2. Technical Support\n";
    cout << "3. Account Information\n";
    cout << "4. Feedback\n";
    cout << "5. Exit\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) 
    {

        case 1:

            cout << "Connecting to Billing Department...\n";
            break;

        case 2:

            cout << "Connecting to Technical Support...\n";
            break;

        case 3:

            cout << "Accessing Account Information...\n";
            break;

        case 4:

            cout << "Give us a feedback...";
            cin>>feedback;

            cout<<"Your feedback is "<<feedback;
            break;

        case 5:

            cout << "Thank you for using our support system. Goodbye!\n";
            break;

        default:

            cout << "Invalid choice. Please select a number between 1 and 5.\n";

    }

    return 0;
    
}