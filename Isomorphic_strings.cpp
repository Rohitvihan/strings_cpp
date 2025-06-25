#include<bits/stdc++.h>
using namespace std;
bool isomorphic_string(string s,string t)
{
    unordered_map<char,int> mapp_s;
    unordered_map<char,int> mapp_t;
    if(s.size()!=t.size())
    {
        return false;
    }
    for(int i=0;i<s.size();i++)
    {
        if(mapp_s.find(s[i])==mapp_s.end())
        {
            mapp_s[s[i]]=i;
        }
        if(mapp_t.find(t[i])==mapp_t.end())
        {
            mapp_t[t[i]]=i;
        }
        if(mapp_s[s[i]]!=mapp_t[t[i]])
        {
            return false;
        }
    }
}
int main()
{
    string s1,s2;
    cout<<"Enter the string s1:";
    cin>>s1;
    cout<<"Enter the string s2:";
    cin>>s2;
    bool res=isomorphic_string(s1,s2);
    if(res==true)
    {
        cout<<"The string is isomorphic";
    }
    else
    {
        cout<<"The string is not isomorphic";
    }
    return 0;
}
