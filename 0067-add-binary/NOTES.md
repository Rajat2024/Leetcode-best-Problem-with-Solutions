```
class Solution {
public:
string addBinary(string a, string b) {
string s="";
int m=a.length();
int n=b.length();
int carry=0;
while(m && n){      /// check till the smaller string
if(a[m-1]=='1' && b[n-1]=='1'){
if(carry==0){
carry=1;
s+='0';
}
else{
s+='1';
carry=1;
}
}
else if((a[m-1]=='0' && b[n-1]=='1') || (a[m-1]=='1' && b[n-1]=='0')){
if(carry==0){
s+='1';
carry=0;
}
else{
s+='0';