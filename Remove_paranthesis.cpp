#include<bits/stdc++.h>
using namespace std;
void remove_paranthesis(string s)
{
    int count=0;
    string ans="";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            if (count > 0) ans.push_back(s[i]);
            count++;
        }
        else if (s[i] == ')')
        {
            count--;
            if (count > 0) ans.push_back(s[i]);
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}
int main()
{
    string sd;
    cout<<"Enter the string:";
    cin>>sd;
    remove_paranthesis(sd);
    return 0;
}
