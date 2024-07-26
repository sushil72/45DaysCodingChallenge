#include <bits/stdc++.h>
using namespace std;
// /home/susheel/CLionProjects/untitled1
class Solution {
public:
    string intToRoman(int num) {
        vector<string>thousands {"", "M" , "MM" , "MMM" };
        vector<string> tens = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        vector<string> ones = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        vector<string> hundreds = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string result = "";

        result+=thousands[num/1000];   //3942

        result +=hundreds[(num%1000)/100];

        result+=tens[(num%100)/10];
        result+=ones[num%10];
            return result;
    }
};

int main()
{
        Solution s;
    cout<<s.intToRoman(3749)<<endl;
    return 0;
}
