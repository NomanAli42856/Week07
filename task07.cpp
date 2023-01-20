#include<iostream>
using namespace std;
int sumcal(int);
main()
{
    system("cls");
    
    int num,res;
    cout << "Enter a number  : ";
    cin >> num;
    res = sumcal(num);
    cout <<"Sum  :  " << res;
}

int sumcal(int num)
{
    int sum=0;
    while(num > 0)
    {
        int nm = num % 10;
        num = num / 10;
        sum = sum + nm;
    }
    return sum;
}