// Hello C++
#include <iostream>
using namespace std;
#define pie 3.14
double findarea(int radius)
{
  return pie*radius*radius;
}
void evenorodd(int num)
{
  if(num%2==0)
  {
    cout<<"The given number is Even"<<endl;

  }
  else{
    cout<<"The given number is Odd"<<endl;
  }
}
int findfactorial(int num)
{
  if(num==1||num==0)
  {
   return num;
  }
  return num*findfactorial(num-1);
}
bool isprime(int num)
{
  if(num==0||num==1)
  {
    return false;
  }
  for(int i=2;i*i<=num;i++)
  {
    if(num%i==0)
    {
      return false;
    }

   
  }
  return true;

}
void findthedigit(int num)
{
  
  while(num!=0)
  {
    int rem=num%10;
    cout<<rem<<endl;
    num=num/10;

  }
}
int main() {
  // double radius;
  // cout<<"enter the radius of the circle"<<endl;
  // cin>>radius;
  // double area=findarea(radius);
  // cout<<"Area of the circle:"<<area;

  // int num;
  // cout<<"Enter the number:"<<endl;
  // cin>>num;
  // evenorodd(num);
  // int num;
  // cout<<"Enter the number:"<<endl;
  // cin>>num;
  // int fac=findfactorial(num);
  // cout<<fac;
  // return 0;
  // int num;
  // cout<<"enter the number:"<<endl;
  // cin>>num;
  // primeornot(num);
  // return 0;
  // int num;
  // cin>>num;
  
  // for(int i=1;i<=num;i++)
  // {
  //   if(isprime(i))
  //   {
  //     cout<<i<<endl;
  //   }
  // }
  int num;
  cout<<"Enter the number"<<endl;
  cin>>num;
  findthedigit(num);

return 0;
}