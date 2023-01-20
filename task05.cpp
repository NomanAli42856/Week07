#include<iostream>
using namespace std;
int totaldigits(int);
main()
{
    system("cls");
    
    int num,res;
    cout << "Enter a number  : ";
    cin >> num;
    res = totaldigits(num);
    cout <<"Total digits in number   :  "  << res;
}

int totaldigits(int num)
{
    int i=0;
    while(num > 0)
    {
        num = num /10;
        i++;
    }
    return i;
}