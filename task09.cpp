#include<iostream>
using namespace std;
main()
{
    system("cls");
    
    int num;
    cout << "Enter a number : ";
    cin >> num;
    while(num <= 0)
    {
        cout << "Error! Enter a number greater than zero." << endl;
        cout << "Enter a number : ";
        cin >> num;
    }
    
}