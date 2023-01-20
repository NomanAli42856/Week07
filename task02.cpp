#include<iostream>
using namespace std;
main()
{
    system("cls");
    
    int sum=0;
    for (int i =1;i<=5;i++)
    {
        sum = sum + i;
    }
    cout << "Sum of first five natural numbers : " << sum;
}