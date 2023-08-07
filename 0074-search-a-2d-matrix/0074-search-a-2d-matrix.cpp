class Solution {
            bool search(vector<int>& arr, int target) {
        int l=0,r=arr.size()-1;
            while(l<=r)
            {
         int mid=(l+r)/2;
                    
                    if(target<arr[mid])
                            r=mid-1;
                    if(target>arr[mid])
                            l=mid+1;
                    if(target==arr[mid])
                            return 1;
            }
            return 0;
    }
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            if(matrix[i][matrix[i].size()-1]>=target)
            {
                    if(search(matrix[i],target))
                            return 1;
               // for(int j=0;j<matrix[i].size();j++)
               // {
               //     if(matrix[i][j]==target)
               //         return 1;
               // }
            }
        }
        return 0;
    }
};