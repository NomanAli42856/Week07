#include<iostream>
using namespace std;
int frequecychecker(int,int);
main()
{
    system("cls");
    
    int num,res,frqnum;
    cout << "Enter a number  : ";
    cin >> num;
    cout << "Enter a number whose frequency is to be checked : ";
    cin >> frqnum;
    res = frequecychecker(num,frqnum);
    cout <<"Frequency of "  << frqnum << " in number : " << res;
}

int frequecychecker(int num,int frqnum)
{
    int i=0;
    while(num > 0)
    {
        int nm = num % 10;
        num = num /10;
        if (nm == frqnum)
        {
                i++;
        }
    }
    return i;
}