#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    sort(strs.begin(), strs.end());
    string first = strs[0];
    string last = strs[strs.size() - 1];
    string result = "";

    for (int i = 0; i < first.length(); i++)
    {

      if (first[i] != last[i])
        break;
      result += first[i];
    }
    return result;
  }
};

int main()
{
  Solution s;
  vector<string> strs{"flower", "flow", "flight"};
  cout << "Longest Prefix anmong the strings in the array is : " << s.longestCommonPrefix(strs) << endl;
  return 0;
}