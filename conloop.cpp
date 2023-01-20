#include<iostream>
using namespace std;
main()
{
    system("cls");
    
    int lucky;
    cout << "Guess my lucky number : ";
    cin >> lucky;
    while(lucky != 18)
    {
        cout << "Not my lucky number ! Try again" << endl;
        cout << "Guess again : ";
        cin >> lucky;
    }
}