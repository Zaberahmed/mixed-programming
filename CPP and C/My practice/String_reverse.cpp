#include<bits/stdc++.h>
using namespace std;

string reverse(string x,int y){
    string rev = "";
    for (int i = y-1; i >= 0;i--){
        rev = rev + x[i];
    }
    return rev;
}
int main()
{
    string s[3];
    for (int i = 0; i <3 ;i++){
        cin >> s[i];

    }
        
   for (int i = 2; i >=0;i--){
       int l = s[i].length();
       cout << reverse(s[i],l) << " ";

    }
}