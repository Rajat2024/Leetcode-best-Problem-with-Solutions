//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string s)
	{
	    // Your code goes here
	    int curr_sum=0;
	    int ans=INT_MIN;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='0')
	        curr_sum++;
	        else
	        curr_sum--;
	        ans=max(ans,curr_sum);
	        if(curr_sum<0)
	        curr_sum=0;
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}

// } Driver Code Ends