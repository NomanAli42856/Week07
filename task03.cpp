#include<iostream>
using namespace std;
void table(int);
main()
{
    system("cls");
    
    int num;
    cout << "Enter a number to print table : ";
    cin >> num;
    table(num);
    
}

void table(int num)
{
    for (int i =1;i<=10;i++)
    {
            cout << num <<" * " << i << " = " << num*i << endl;
    }
}