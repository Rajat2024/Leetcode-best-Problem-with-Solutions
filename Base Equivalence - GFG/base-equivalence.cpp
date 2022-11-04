//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
    char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
    string fromDeci(string& res, int base, int inputNum)
     {
    int index = 0; 
    while (inputNum > 0) {
        res.push_back(reVal(inputNum % base));
        index++;
        inputNum /= base;
    }
    reverse(res.begin(), res.end());
    return res;
   }
  public:
    string baseEquiv(int n, int m){
        string res="";
        for(int i=2;i<32;i++)
        {
            res="";
            string str=fromDeci(res,i,n);
            if(str.size()==m)
            return "Yes";
        }
        return "No";
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        cout<<ob.baseEquiv(n,m)<<endl;
    }
    return 0;
}

// } Driver Code Ends