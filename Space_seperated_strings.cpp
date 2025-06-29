#include<bits/stdc++.h>
using namespace std;
void space_seperated_high_freq(string s)
{
    stringstream ss(s);
    map<string,int> mp;
    string word;
    while(ss>>word)
    {
        mp[word]+=1;
    }
    for(auto i:mp)
    {
        if(i.second>1)
        {
            cout<<i.first<<" ";
        }
        else
        {
            continue;
        }
    }
}
int main()
{
    string txt;
    cout<<"Enter the text:";
    getline(cin,txt);
    space_seperated_high_freq(txt);
    return 0;
}
