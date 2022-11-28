//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	     vector<int> ans;
	    vector<int> temp;
	    int i=0;
	    int sum = 0;
	    int maxi = INT_MIN;
	    while(i<n)
	    {
	        if(a[i]<0)
	        {
	            if(maxi == sum)
	            {
	                if(temp.size()>ans.size())
	                {
	                    ans.clear();
	                    ans = temp;
	                }
	            }
	            else
	            {
	                if(maxi<sum)
	                {
	                   ans.clear();
	                   ans = temp;
	                   maxi = sum;
	                }
	            }
	            sum = 0;
	           temp.clear();
	        }
	        else
	        {
	          sum+=a[i];
	          temp.push_back(a[i]);
	        }
	        i++;
	    }
	    if(maxi<sum)
	    {
	        ans = temp;
	    }
	    else
	    {   if(maxi==sum)
	        if(temp.size()>ans.size()) ans = temp;
	    }
	    if(ans.size()==0) ans.push_back(-1);
	    return ans;
	}
};

//{ Driver Code Starts.

void printAns(vector<int> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

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
        auto ans = ob.findSubarray(a, n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends