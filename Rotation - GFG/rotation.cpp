//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    int numberOfRotation=0;
	    int left=0;
	    int right=n-1;
	    while(left<=right){
	        int mid=left+(right-left)/2;
	        if(arr[mid]<arr[mid-1] ||arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1]){
	            numberOfRotation=mid;
	            break;
	        }
	        else if(arr[mid]>arr[n-1]){
	            left=mid+1;
	        }
	        else{
	            right=mid-1;
	        }
	    }
	    return numberOfRotation;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends