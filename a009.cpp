#include <iostream>

using namespace std;

int main()
{
    int k = -7;
    string sec;
    getline(cin, sec);
    string cle(sec.size(),' ');
    for(int i = 0; i < sec.size(); i++){
        cle[i] = sec[i]+k;
    }
    cout << cle << /n;
}
