// Hello C++
#include <iostream>
using namespace std;
#define pie 3.14
double findarea(int radius)
{
  return pie*radius*radius;
}
int main() {
  double radius;
  cout<<"enter the radius of the circle"<<endl;
  cin>>radius;
  double area=findarea(radius);
  cout<<"Area of the circle:"<<area;

  
  return 0;
}