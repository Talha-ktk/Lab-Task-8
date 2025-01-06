#include <iostream>
using namespace std;
int main() 

{
    int roomType;

    cout << "Welcome to our Hotel!\n";
    cout << "Please select your preferred room type:\n";
    cout << "1. Single Room\n";
    cout << "2. Double Room\n";
    cout << "3. Suite\n";
    cout << "4. Deluxe Suite\n";

    cout << "Enter your choice: ";
    cin >> roomType;

    switch (roomType) 
    {
        case 1:
        
            cout << " You selected a Single Room."<<endl;
            cout<<"RS . 3000 "<<endl;
            break;

        case 2:

            cout << "You selected a Double Room."<<endl;
            cout<<"RS . 7000 "<<endl;
            break;

        case 3:

            cout << "You selected a Suite."<<endl;
            cout<<"RS . 15000"<<endl;
            break;

        case 4:

            cout << "You selected a Deluxe Suite."<<endl;
            cout<<"RS . 28000"<<endl;
            break;

        default:

            cout << "Invalid room type. Please try again."<<endl;

    }

    return 0;
    
}