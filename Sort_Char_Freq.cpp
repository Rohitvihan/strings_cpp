#include <bits/stdc++.h>
using namespace std;

void sort_freq(string s)
{
    map<char, int> mp;

    for (int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }

    vector<pair<char, int>> v(mp.begin(), mp.end());

    sort(v.begin(), v.end(), [](const pair<char, int>& a, const pair<char, int>& b) //using lamda func to sort based on "value" in maps
    {
        return a.second > b.second;
    });

    string res="";
    for (int i=0;i<v.size();i++)
    {
        res += string(v[i].second,v[i].first);
    }

    cout << "The resultant string is: " << res << endl;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    sort_freq(s);
    return 0;
}
