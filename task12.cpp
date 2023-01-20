#include<iostream>
using namespace std;
int calculateGCD(int num1,int num2);
int calculateLCM(int num1,int num2);
main()
{
    system("cls");
    
    int num1,num2,resGCD,resLCM;
    cout << "Enter first number  : ";
    cin >> num1;
    cout << "Enter second number  : ";
    cin >> num2;
    resGCD = calculateGCD(num1,num2);
    cout <<"GCD  :  " << resGCD << endl;
    resLCM = calculateLCM(num1,num2);
    cout <<"LCM  :  " << resLCM;
}

int calculateGCD(int num1,int num2)
{
    int gcd=1;
    for(int i =1;i<=num1;i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

int calculateLCM(int num1,int num2)
{
    int lcm = (num1*num2)/calculateGCD(num1,num2);
    return lcm;
}