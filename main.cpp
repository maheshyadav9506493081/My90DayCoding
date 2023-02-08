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
int main() {
  // double radius;
  // cout<<"enter the radius of the circle"<<endl;
  // cin>>radius;
  // double area=findarea(radius);
  // cout<<"Area of the circle:"<<area;

  int num;
  cout<<"Enter the number:"<<endl;
  cin>>num;
  evenorodd(num);
  return 0;
}