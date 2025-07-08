class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // handle k > n

        // Step 1: Reverse from index 0 to n - k - 1
        reverse(nums, 0, n - k - 1);

        // Step 2: Reverse from index n - k to n - 1
        reverse(nums, n - k, n - 1);

        // Step 3: Reverse the entire array
        reverse(nums, 0, n - 1);
    }

private:
    void reverse(vector<int>& nums, int start, int end) {
        while (start < end) {
            // Swap nums[start] and nums[end]
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;

            start++;
            end--;
        }
    }
};
