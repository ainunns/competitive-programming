#include <bits/stdc++.h>
using namespace std;

long long countFairPairs(vector<int>& nums, int lower, int upper) {
    int n = nums.size();

    sort(nums.begin(), nums.end());

    long long ans = 0;
    for(int i = 0; i < n - 1; i++) {
        long long l = i+1, r = n - 1, mid = 0, lv = lower - nums[i], rv = upper - nums[i], fi = -1, se = -1;
        
        while(l <= r) {
            mid = l + (r-l)/2;
            if(nums[mid] >= lv) {
                r = mid - 1;
                fi = mid;
            } else {
                l = mid + 1;
            }
        }

        l = i + 1; r = n - 1;

        while(l <= r) {
            mid = l + (r-l)/2;
            if(nums[mid] <= rv) {
              l = mid + 1;
              se = mid;
            } else r = mid - 1;
        }
        ans += max(0ll, se - fi + 1);
    }

    return ans;
}

int main() {
    int n, lower, upper;
    scanf("%d %d %d", &n, &lower, &upper);
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }

    printf("%lld", countFairPairs(nums, lower, upper));
    return 0;
}
