//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        map<int,int>mp;
        for(int i=0;i<k;i++)
        {
           mp[arr[i]]++;
        }
        vector<int>ans;
        auto it1=mp.end();
        it1--;
        ans.push_back(it1->first);
        for(int i=1;i<(n-k+1);i++)
        {
           
            mp[arr[i+k-1]]++;
            if(mp[arr[i-1]]==1)
            mp.erase(arr[i-1]);
            else
             mp[arr[i-1]]--;
             
            it1=mp.end();
            it1--;
            ans.push_back(it1->first);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends