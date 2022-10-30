//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    
	    long long expires[43]={0};/// to store the number of chick expires on ith day
	    
	    long long live=1;//initial i.e day1
	    
	    expires[6]=1;// on 6th day no of chicks expires
	    
	    for(int i=1;i<n;i++)
	    {
	        live-=expires[i];
	        expires[i+6]=2*live;// the chicks that born today die after 6 day
	        live=live+2*live;// todays live count + todays born chick
	    }
	    return live;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends