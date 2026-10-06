class Solution {
public:
    
    int solve(vector<int>& arr, int s, int e)
    {
        if(s == e)
            return e;

        int mid = s + (e - s) / 2;

        if(arr[mid] < arr[mid + 1])
            return solve(arr, mid + 1, e);

        return solve(arr, s, mid);
    }

    int peakIndexInMountainArray(vector<int>& arr) {
        return solve(arr, 0, arr.size() - 1);
    }
};