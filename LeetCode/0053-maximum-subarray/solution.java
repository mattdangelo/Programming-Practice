class Solution {
    public int maxSubArray(int[] nums) {
        int local_max = nums[0];
        int global_max = nums[0];

        for(int i=1;i<nums.length;i++) {
            local_max = Math.max(local_max + nums[i], nums[i]);
            global_max = Math.max(local_max, global_max);
        }

        return global_max;
    }
}
