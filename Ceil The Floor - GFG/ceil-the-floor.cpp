//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr,arr+n);
    pair<int,int> ans={-1,-1};
    int left = 0;
    int right=n-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==x){
            ans.first=arr[mid];
            ans.second=arr[mid];
            return ans;
        }
        else if (arr[mid]<x){
            left=mid+1;
            ans.first=arr[mid];
        }
        else{
            right=mid-1;
            ans.second=arr[mid];
        }
        
    }
    return ans;
}