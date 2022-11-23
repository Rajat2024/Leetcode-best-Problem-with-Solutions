//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	      int MX=0;
	    int n=nums.size();
	    int LDS[n];
	    int LIS[n];
	    
	    for(int i=0;i<n;i++){
	        LDS[i]=1;
	        LIS[i]=1;
	    }
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++){
	            if(nums[i]>nums[j]){
	                LIS[i]=max(LIS[i],LIS[j]+1);
	            }
	        }
	    }
	    
	    for(int i=n-2;i>=0;i--){
	        for(int j=n-1;j>i;j--){
	            if(nums[i]>nums[j]){
	                LDS[i]=max(LDS[i],LDS[j]+1);
	            }
	        }
	    }
	    
	    for(int i=0;i<n;i++){
	        MX=max(MX,LIS[i]+LDS[i]-1);
	    }
	    
	    return MX;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends