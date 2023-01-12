//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
       int left =0;
       int right=n-1;
       int ans=-1;
       while(left<=right){
           int mid=left+(right-left)/2;
           if(a[mid]==1){
               ans=mid;
               right=mid-1;
           }
           else if(a[mid]<1){
               left=mid+1;
           }
           
       }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.firstIndex(a, n) << endl;
    }
}
// } Driver Code Ends