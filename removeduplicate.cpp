#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void removeDuplicateLetters(string s)
    {
        map<char, int> count;
        string ans = "";
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i]]++;
        }

        for (auto x : count)
        {
            if (x.second > 1)
                cout << "key " << x.first << ": " << x.second << endl;
        }
    }
};

int main()
{
    Solution s;
    string str = "abcb";
    s.removeDuplicateLetters(str);
}