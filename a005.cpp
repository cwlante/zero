#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int t;
 cin >> t;
  for(int i;i < t; i++){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(b-a == c-b && c-b == d-c){
      int D=b-a;
      cout << a << " " << b << " " << c << " " << d << " " << d+D << "\n";
    }
    else{
      int R=b/a;
     cout << a << " ";
      for(int n=1;n <= 3;n++){
       cout << a*pow(R,n) << " ";
      }
      cout << a*pow(R,4) << endl;
   }
  }
}
