#include<iostream>
using namespace std;
void counting(int);
main()
{
    system("cls");
    
    int num;
    cout << "Enter any number : ";
    cin >> num;
    counting(num);
    
}

void counting(int num)
{
    for (int i =1;i<=num;i++)
    {
            cout << i<< endl;
    }
}