#include<iostream>
using namespace std;
int factorial(int);
main()
{
    system("cls");

    int num,res;
    cout << "Enter any number to find factorial : ";
    cin >> num;
    res = factorial(num);
    cout << "Factorial  =  " << res;
}


int factorial(int num)
{
    int fac = 1;
    for (int i =1;i<=num;i++)
    {
        fac = fac * i;
    }
    return fac;
}