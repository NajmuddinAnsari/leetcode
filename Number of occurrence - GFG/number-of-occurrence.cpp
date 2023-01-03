//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
private:
    int firstOccurance(int arr[],int n,int target){
        int left=0;
        int right=n-1;
        int firstIndex=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==target){
                firstIndex=mid;
                right=mid-1;
            }
            else if(arr[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return firstIndex;
    }
    int lastOccurance(int arr[],int n,int target){
        int left=0;
        int right=n-1;
        int lastIndex=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==target){
                lastIndex=mid;
                left=mid+1;
            }
            else if(arr[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return lastIndex;
    }
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int firstIndex=firstOccurance(arr,n,x);
	    int lastIndex=lastOccurance(arr,n,x);
	   // cout<<firstOccurance(arr,n,x)<<endl;
	   // cout<<lastOccurance(arr,n,x)<<endl;
	    return firstIndex==-1 && lastIndex==-1 ? 0 : (lastOccurance(arr,n,x) - firstOccurance(arr,n,x)) + 1;
	}
};

//{ Driver Code Starts.

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
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends