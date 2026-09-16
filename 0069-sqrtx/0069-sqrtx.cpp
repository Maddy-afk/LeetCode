class Solution {
public:

    int solve(int x, long long s, long long e, int ans)
    {
        if(s > e)
            return ans;

        long long mid = s + (e - s) / 2;
        long long square = mid * mid;

        if(square == x)
            return mid;

        if(square < x)
            return solve(x, mid + 1, e, mid);

        return solve(x, s, mid - 1, ans);
    }

    int mySqrt(int x) {
        return solve(x, 0, x, 0);
    }
};