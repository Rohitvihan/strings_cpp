#include <iostream>
#include <string>
using namespace std;
int myAtoi(string s)
{
    int start = 0;
    int sign = 1;
     if(s[0] == '-') 
     {
        sign = -1;
        start = 1;
    }
    int ans = 0;
    for(int i = start; i < s.size(); i++) 
    {
        if(s[i] >= '0' && s[i] <= '9') 
        {
            int d = s[i] - '0';
            ans = ans * 10 + d;
        }
        else 
        {
            return -1;
        }
    }
    return ans * sign;
}
int main() {

    string input;
    cout << "Enter a string: ";
    cin >> input;

    int result = myAtoi(input);
    cout << "Converted integer: " << result << endl;

    return 0;
}
