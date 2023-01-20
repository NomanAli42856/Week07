#include<iostream>
using namespace std;
 
float calculateMoney(int,int,float);


main()
{
  system("cls");

  float age,toyprice,macprice,result;
  cout<<"Enter the age  : ";
  cin>>age;
  cout<<"Enter the machine price : ";
  cin>>macprice;
  cout<<"Enter the toy price  : ";
  cin>>toyprice;
  result=calculateMoney(age,toyprice,macprice);
  if (result>0)
  {
    cout<<"YES!"<<endl<<result;
  }
  else
  {
    cout<<"NO!"<<endl<<abs(result);
  }

}

float calculateMoney(int age,int t_price,float m_price)
{
   
  float add=0;
  float toyprice=0;
  float result=0;
  float con1=0;
  float con2=0;
  for(int x=age-1; x>0; x=x-2)
  {
    con1=con1+1;
    toyprice=con1*t_price;
  }

  for(int y=age; y>1; y=y-2)
  {
    add=add+(y*5);
    con2=con2+1; 
    
  }

  result=add+toyprice;
  result=result-(con2+m_price);
  return  result;
  
}
