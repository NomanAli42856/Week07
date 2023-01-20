#include<iostream>

using namespace std;

float calculatePrice(float money,int year);

main()
{
    system("cls");

    float money,result;
    int year;
    cout<<"Enter the Money :";
    cin>>money;
    cout<<"Enter the year :";
    cin>>year;
    result=calculatePrice(money,year);
 
    if (result>0)
    {
        cout<<"Yes! he will live a carefree life and will have "<< result<<" dollar left.";
    }
    if (result<0)
    {
        cout<<"He will need "<< abs(result)<<" dollar to survive.";
    }

}

float calculatePrice(float money,int year)
{

    float result=0;
    int count_1=0;
    int count_2=0;
    float even_money,odd_money;
    for(int x=1800; x<=year; x=x+1)
    {
        if(x%2==0)
        {
            count_1++;
            even_money=(count_1)*12000;
        }
        if(x%2!=0)
        {
            count_2++;
            odd_money=count_2*((50*(18+count_2)+12000));
        }

    }

    result=even_money+odd_money;
    result=money-result;
    return result;

}