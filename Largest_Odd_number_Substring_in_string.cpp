#include<bits/stdc++.h>
using namespace std;
string largest_substr(string s)
{
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]%2!=0)
        {
            return s.substr(0,i+1);
        }
    }
}
int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;
    string res=largest_substr(s);
    cout<<"The largest string is:";
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i];
    }
    return 0;
}
