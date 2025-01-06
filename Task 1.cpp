#include<iostream>
using namespace std;
int main()
{

    int num;
    //change
    cout << "Welcome to the Vending Machine!\n";
    cout << "Please select a snack:\n";
    cout << "1. Chips\n";
    cout << "2. Candy Bar\n";
    cout << "3. Soda\n";
    cout << "4. Cookies\n";
    cout << "5. Gum\n";

    cout<<"Enter number between 1 and 5 : ";
    cin>>num;

    switch(num)
    {

        case 1:

              cout<<"You select Chips "<<endl;
              cout<<"Snack Price : 40 "<<endl;
              break;
              
        case 2:

              cout<<"You select Candy Bar"<<endl;
              cout<<"Snack price : 80 "<<endl;
              break;

        case 3:

              cout<<" You select Soda"<<endl;
              cout<<" Snack price : 60 "<<endl;
              break;

        case 4:

              cout<<" You select Cookies "<<endl;
              cout<<" Price : 100 "<<endl;
              break;

        case 5:

              cout<<" You select Gum "<<endl;
              cout<<" Price : 20 "<<endl;
              break;

        default:
              
              cout<<"Invalid Number "<<endl;

    }

}