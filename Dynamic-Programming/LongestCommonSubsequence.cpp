// branko_fu (Branko Fulurija)
// Longest Common Subsequence (Dynamic programming)
// Returns the length of the longest common subsequence of two strings
// Time complexity O(n^2)

#include <bits/stdc++.h>

using namespace std;

#define MAXN 5005
int dp[MAXN][MAXN];

int lcs(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    int lcsLength = 0;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (s1[i-1] == s2[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j-1], max(dp[i-1][j], dp[i][j-1]));
        }
    }

    return dp[n][m];
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    cout << lcs(s1, s2) << "\n";
}
