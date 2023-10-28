#include<iostream>
using namespace std;
int main(){
  int n, x=2, s=0, c=0;
  while(cin >> n){
    while(x<=n){
      if(n%x == 0){
        if(x==s){
          c++;
          n=n/x;
          x=2;
        }
        else if(c!=0){
          cout << "^" << c;
          c=0;
          n=n/x;
          s=x;
          x=2;
        }
        else if(s!=0){
          cout << " * " << x;
          n=n/x;
          s=x;
          x=2;
          }
      }
      else
        x++;
    }
    if (n==1)
      break;
  }
}
