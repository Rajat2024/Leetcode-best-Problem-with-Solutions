```
class Solution {
public:
int search(vector<int>& arr, int target) {
int l=0,r=arr.size()-1;
while(l<=r)
{
int mid=(l+r)/2;
if(target<arr[mid])
r=mid-1;
if(target>arr[mid])
l=mid+1;
if(target==arr[mid])
return mid;
}
return -1;
}
};
```