#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the string:";
    cin>>s;
    int hash_arry[26]={0};
    for(int i=0;i<s.size();i++)
    {
        hash_arry[s[i]-'a']+=1;
    }
    int query_size;
    cout<<"Enter the query size:";
    cin>>query_size;
    for(int i=0;i<query_size;i++)
    {
        char ch;
        cout<<"Enter the character:";
        cin>>ch;
        cout<<hash_arry[ch-'a']<<endl;
    }
    return 0;
}
