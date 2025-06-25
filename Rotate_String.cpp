#include<bits/stdc++.h>
using namespace std;
bool rotate_string(string s,string goal)
{
   if(s.length()!=goal.length())
   {
       return false;
   }
   for(int i=0;i<s.length();i++)
   {
       rotate(s.begin(),s.begin()+1,s.end());
       if(s==goal)
       {
           return true;
       }
   }
   return false;
}
int main()
{
    string s1,s2;
    cout<<"Enter the string s1:";
    cin>>s1;
    cout<<"Enter the string s2:";
    cin>>s2;
    bool res=rotate_string(s1,s2);
    if(res==true)
    {
        cout<<"The string has reached the goal";
    }
    else
    {
        cout<<"The string can't reach the goal";
    }
    return 0;
}
