/*Count of strings that can be formed using a, b and c under given constraints
Given a length n, count the number of strings of length n that can be made using �a�, �b� and �c� with at-most one �b� and two �c�s allowed.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. The first line of each test case contains an integer N denoting the length of the string.

Output:
Output the count of the strings that can be formed under the given constraint.

Constraints:
1<= T <=100
1<= N <=1000

Example:
Input:
2
1
3

Output:
3
19*/

// C++ program to count number of strings 
// of n characters with 
#include<bits/stdc++.h> 
using namespace std; 
  
// n is total number of characters. 
// bCount and cCount are counts of 'b' 
// and 'c' respectively. 
int countStrUtil(int dp[][2][3], int n, int bCount=1, 
                 int cCount=2) 
{ 
    // Base cases 
    if (bCount < 0 || cCount < 0) return 0; 
    if (n == 0) return 1; 
    if (bCount == 0 && cCount == 0) return 1; 
  
    // if we had saw this combination previously 
    if (dp[n][bCount][cCount] != -1) 
        return dp[n][bCount][cCount]; 
  
    // Three cases, we choose, a or b or c 
    // In all three cases n decreases by 1. 
    int res = countStrUtil(dp, n-1, bCount, cCount); 
    res += countStrUtil(dp, n-1, bCount-1, cCount); 
    res += countStrUtil(dp, n-1, bCount, cCount-1); 
  
    return (dp[n][bCount][cCount] = res); 
} 
  
// A wrapper over countStrUtil() 
int countStr(int n) 
{ 
    int dp[n+1][2][3]; 
    memset(dp, -1, sizeof(dp)); 
    return countStrUtil(dp, n); 
} 
  
// Driver code 
int main() 
{ 
    int n = 3; // Total number of characters 
    cout << countStr(n); 
    return 0; 
} 
