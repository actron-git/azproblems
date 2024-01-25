#include <iostream>
#include <vector>

using namespace std;

// Function to check if it's possible to divide the array into k subarrays
bool canDivide(vector<int> &nums, int k, long long maxSum)
{
    long long sum = 0;
    int subarrays = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum > maxSum)
        {
            subarrays++;
            sum = nums[i];
        }
    }

    return subarrays <= k;
}

// Function to find the maximum subarray sum with binary search
long long optimaldiv(vector<int> &nums, int k)
{
    long long left = 1;     // Minimum possible maximum sum
    long long right = 1e18; // Maximum possible maximum sum
    long long result = 0;

    while (left <= right)
    {
        long long mid = left + (right - left) / 2;

        if (canDivide(nums, k, mid))
        {
            result = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return result;
}

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    long long maxSubarraySum = optimaldiv(nums, k);
    cout << maxSubarraySum << endl;

    return 0;
}
