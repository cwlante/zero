#include<iostream>
using namespace std;
int main(){
  for(int i;cin >> i;){
   if((i%4==0 && i%100!=0) || i%400==0){
     cout << "閏年" << endl;
   }
   else 
     cout << "平年" << "\n";
 }
}
