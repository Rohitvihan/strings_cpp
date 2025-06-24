#include<bits/stdc++.h>
using namespace std;
string longest_substr_prefx(vector<string> s)
{
    if(s.empty())return "No words given";
    sort(s.begin(),s.end());
    string first=s.front();//first element
    string last=s.back();//last element
    string res;
    for(int i=0;i<first.size();i++)
    {
        if(first[i]!=last[i])//compare each element in both the string
        {
            break;
        }
        res+=first[i];
    }
    return res;
}
int main()
{
    vector<string> s={"club","clap","clove"};
    string res=longest_substr_prefx(s);
    if(res=="No words given")
    {
        cout<<"No words given";
    }
    else if(res=="")
    {
        cout<<"No prefix matching";
    }
    else
    {
        cout<<"The longest common prefix is:";
        for(int i=0;i<res.size();i++)
        {
            cout<<res[i];
        }
    }
    return 0;
}
