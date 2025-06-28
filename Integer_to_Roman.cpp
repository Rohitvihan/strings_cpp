#include <iostream>
#include <vector>
using namespace std;

string intToRoman(int num) {
    vector<pair<int, string>> valueRoman =
    {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100,  "C"}, {90,  "XC"}, {50,  "L"}, {40,  "XL"},
        {10,   "X"}, {9,   "IX"}, {5,   "V"}, {4,   "IV"},
        {1,    "I"}
    };

    string result = "";
    for (int i = 0; i < valueRoman.size(); i++)
    {
        while (num >= valueRoman[i].first)
        {
            result += valueRoman[i].second;
            num -= valueRoman[i].first;
        }
    }
    return result;
}

int main() {
    int num;
    cout << "Enter an integer (1 to 3999): ";
    cin >> num;

    if (num < 1 || num > 3999) {
        cout << "Roman numerals only support numbers from 1 to 3999.\n";
        return 1;
    }

    string roman = intToRoman(num);
    cout << "Roman numeral: " << roman << endl;
    return 0;
}
