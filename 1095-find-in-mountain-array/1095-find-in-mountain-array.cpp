/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
    int findInMountainArray(int target, MountainArray &mA)    {
        int l=0,r=mA.length()-1-1,peek=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(mA.get(mid)<=mA.get(mid+1))
               { l=mid+1;peek=l;}
            else
                r=mid-1;
                
        }
        l=0; r=peek;
        while(l<=r)
        {
                int mid=(l+r)/2;
                int mm=mA.get(mid);
                if(mm==target)
                        return mid;
                if(mm<target)
                        l=mid+1;
                else
                        r=mid-1;
                        
        }
            l=peek;r=mA.length()-1;
            while(l<=r)
            {
                    int mid=(l+r)/2;
                    int mm=mA.get(mid);
                    if(mm==target)
                            return mid;
                    if(mm<target)
                            r=mid-1;
                    else
                            l=mid+1;
            }
        return -1;
    }
};