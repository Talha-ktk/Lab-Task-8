#include <iostream>
using namespace std;
int main() 
{

    int planType;

    cout << "Welcome to our Gym!\n";
    cout << "Please select your preferred membership plan:\n";
    cout << "1. Basic Plan\n";
    cout << "2. Standard Plan\n";
    cout << "3. Premium Plan\n";
    cout << "4. VIP Plan\n";

    cout << "Enter your choice: ";
    cin >> planType;

    switch (planType) 
    {

        case 1:

            cout << "You selected the Basic Plan.\n";
            cout << "Monthly Cost: $30\n";
            break;

        case 2:

            cout << "You selected the Standard Plan.\n";
            cout << "Monthly Cost: $50\n";
            break;

        case 3:

            cout << "You selected the Premium Plan.\n";
            cout << "Monthly Cost: $70\n";
            break;

        case 4:

            cout << "You selected the VIP Plan.\n";
            cout << "Monthly Cost: $100\n";
            break;

        default:

            cout << "Invalid plan type. Please try again.\n";

    }

    return 0;
    
}