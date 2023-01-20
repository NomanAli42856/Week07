#include<iostream>
using namespace std;
main()
{
    system("cls");
    
    char ch;
    cout << "Enter any character : ";
    cin >> ch;
    while(ch == 'y')
    {
        cout << "I am happy." << endl;
        cout << "Enter any character : ";
        cin >> ch;
    }
    
}