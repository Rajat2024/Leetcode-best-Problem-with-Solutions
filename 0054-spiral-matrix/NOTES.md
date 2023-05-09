```
class Solution {
public:
vector<int> spiralOrder(vector<vector<int>>& matrix) {
int n=matrix.size();
int m=matrix[0].size();
int left=0,right=m-1,bottom=n-1,top=0;
int direction=1;
vector<int> v;
while(left<=right && top<=bottom)
{
if(direction==1)
{
for(int i=left;i<=right;i++) v.push_back(matrix[top][i]);
direction=2;
top++;
}
else if(direction==2)
{
for(int i=top;i<=bottom;i++) v.push_back(matrix[i][right]);
direction=3;
right--;
}
else if(direction==3)