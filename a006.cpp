#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int a, b, c, x1, x2;
  cin >> a >> b >> c;
  x1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
  x2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
  if(pow(b,2)-4*a*c < 0){
    cout << "No real root";
  }
  if(pow(b,2)-4*a*c == 0){
    cout << "Two same roots x=" << x1;
  }
  if(pow(b,2)-4*a*c > 0){
    cout << "Two different roots x1=" << x1 << " , x2=" << x2;
  }
}

/*
x=-b+sqrt(pow(b,2)-4*a*c)/(2*a), -b-sqrt(pow(b,2)-4*a*c)/(2*a)
*/
