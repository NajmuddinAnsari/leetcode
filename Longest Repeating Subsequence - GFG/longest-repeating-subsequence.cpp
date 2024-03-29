//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int lcs(string str1,string str2,int n,int m){
	        int dp[n+1][m+1];
	        for(int i=0;i<n+1;i++){
	            dp[i][0] = 0;
	        }
	        for(int i=0; i<m+1; i++){
	            dp[0][i]=0;
	        }
	        for(int i=1; i<n+1; i++){
	            for(int j=1; j<m+1; j++){
	                if(str1[i-1] == str2[j-1] && i!=j){
	                    dp[i][j] = 1 + dp[i-1][j-1];
	                }
	                else{
	                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
	                }
	            }
	        }
	        return dp[n][m];
	    }
		int LongestRepeatingSubsequence(string str){
		    return lcs(str,str,str.size(),str.size());
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends