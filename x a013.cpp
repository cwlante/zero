#include<iostream>
#include<math.h>
using namespace std;
int RtoI(string K);
int main(){
  string A, B;
  int a, b, n;
  while(cin >> A >> B){
    if(A=="#" || B=="#")
      break;
    n=sqrt(pow(a-b,2));
  }
}

int RtoI(string K){
    int k=0, i=0, I=1, IV=4, V=5, X=10, XL=40, L=50, C=100, CD=400, D=500, M=1000;
    while(i < k.size()){
      if(K[i]=="M"){
        k+=M;
        i--;
      }
      if(K[i]=="D"){
        k+=D;
        i--;
      }
      if(K[i]=="C"){
        if(K[i+1]=="D"){
          k+=CD;
          i-=2;
      }
        else{
          k+=C;
          i--;
        }
      }
      if(K[i]=="L"){
        k+=L;
        i--;
      }
      if(K[i]=="X"){
        if(K[i+1]=="L"){
          k+=XL;
          i-=2;
      }
        else{
          k+=X;
          i--;
        }
      }
      if(K[i]=="V"){
        k+=V;
        i--;
      }
      if(K[i]=="I"){
        if(K[i+1]=="V"){
          k+=IV;
          i-=2;
      }
        else{
          k+=I;
          i--;
        }
      }
    }
  return k;
  }
