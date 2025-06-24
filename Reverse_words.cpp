#include<bits/stdc++.h>
using namespace std;
void revese_words(string s)
{
    stringstream ss(s);
    string word;
    vector<string> rev_words;
    while(ss>>word)
    {
        rev_words.push_back(word);
    }
    reverse(rev_words.begin(),rev_words.end());
    string result;
    for(int i=0;i<rev_words.size();i++)
    {
        result+=rev_words[i];
        if(i!=rev_words.size()-1)
        {
            result+=" ";
        }
    }
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i];
    }
}
int main()
{
    string sen;
    cout<<"Enter the sentence:";
    getline(cin,sen);
    revese_words(sen);
    return 0;
}
