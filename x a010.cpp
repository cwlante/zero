#include<iostream>
using namespace std;
int main(){
  int n, x=2, s=0, c=0;
  while(cin >> n){
    while(x<=n){
      if(n%x == 0){
        if(s==0){
          cout << x;
          goto setn;
          }
        if(x==s){
          c++;
          goto setn;
        }
        else if(c==0){  
          cout << " * " << x;
          goto setn;
        }
        else{
          cout << "^" << c+1;
          c=0;
          goto setn;
        }
        continue;
    setn:
      n=n/x;
      s=x;
      x=2;
      }
      else
        x++;
    }
    if (n==1 && c!=0){
      cout << "^" << c;
      c=0;
    }
    else if(n==1)
      break;
  }
}
/*
s==0 coutx 
x==s c++
c!=0&&naxtx!=s cout^c
c==0&&x!=s cout*x
*/
