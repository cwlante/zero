#include <iostream>

using namespace std;

int main()
{
    int k = -7;
    string sec;   //宣告名為sec的字串
    getline(cin, sec);    //將整行輸入指派為sec
    string cle(sec.size(),' ');    //宣告名為cle的字串並給予大小與sec相等的空格
    for(int i = 0; i < sec.size(); i++){
        cle[i] = sec[i]+k;
    }    //重複執行將祕文位移k位並指派到cle
    cout << cle << /n;
}
