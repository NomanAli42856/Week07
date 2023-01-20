#include<iostream>
using namespace std;
void fib(int);
main()
{
    system("cls");
    
    int num;
    cout << "Enter a number  : ";
    cin >> num;
    fib(num);
    
}

void fib(int num)
{
    int n1=0;
    int n2=1;
    int sum=0;
    cout << n1 << "  " << n2 << "  ";
    for(int i=0;i<=num-3;i++)
    {
        sum = n1+n2;
        cout << sum << "  ";
        n1=n2;
        n2=sum;
    }
}