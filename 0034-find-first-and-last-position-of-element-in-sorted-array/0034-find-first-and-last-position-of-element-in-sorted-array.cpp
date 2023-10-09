class Solution
{
    int leftindex(vector<int> &arr, int element)
    {
        int x = -1;
        int l = 0, r = arr.size()-1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (element == arr[mid])
            {
                x = mid; 
                r = mid - 1;  // change
            }
            else if (element < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        return x;
    }
    int rightindex(vector<int> &arr, int element)
    {
        int x = -1;
        int l = 0, r = arr.size()-1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (element == arr[mid])
            {
                x = mid;
                l = mid + 1; // change
            }
            else if (element < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        return x;
    }

public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int l = leftindex(nums, target);
        int r = rightindex(nums, target);
        return {l, r};
    }
};