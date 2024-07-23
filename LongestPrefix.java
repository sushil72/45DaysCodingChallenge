
import java.util.Arrays;

class Solution {
  public String longestCommonPrefix(String[] strs) {
    StringBuilder result = new StringBuilder();
    Arrays.sort(strs);
    String first = strs[0];
    String laString = strs[strs.length-1];

    for(int i=0;i<first.length(); i++)
    {
     if(first.charAt(i)!=laString.charAt(i))
     break;
     result.append(first.charAt(i));
    }

    return result.toString();
  }
}

public class LongestPrefix{
  public static void main(String[] args) {
    Solution s = new Solution();
    String[] strs={"flower","flow","flight"};
    
    System.out.println("Longest Prefix is : "+s.longestCommonPrefix(strs));

  }
}