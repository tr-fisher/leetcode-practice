class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Vị trí tiếp theo để ghi phần tử hợp lệ

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};