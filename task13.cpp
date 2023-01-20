#include<iostream>
using namespace std;
void printpercentage(float num);
main()
{
    system("cls");
    
    float num;
    cout << "Enter number  : ";
    cin >> num;
    printpercentage(num);
}

void printpercentage(float num)
{
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    float f = 0;
    for(int i =1;i<=num;i++)
    {
        float number;
        cout << "Enter the value in range (1-1000) : ";
        cin >> number;
        if(number <= 200)
        {
            a++;
        }
        else if(number > 200 && number <= 400)
        {
            b++;
        }
        else if(number > 400 && number <= 600)
        {
            c++;
        }
        else if(number > 600 && number <= 800)
        {
            d++;
        }
        else if(number > 800 && number <= 1000)
        {
            f++;
        }
    }
    cout << a;
    cout << "Percentage in range 0-200 : " << (a/num)*100<< endl;
    cout << "Percentage in range 200-400 : " << (b/num)*100 << endl;
    cout << "Percentage in range 400-600 : " << (c/num)*100 << endl;
    cout << "Percentage in range 600-800 : " << (d/num)*100 << endl;
    cout << "Percentage in range 800-1000 : " << (f/num)*100 << endl;
}