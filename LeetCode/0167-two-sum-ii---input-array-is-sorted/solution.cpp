class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        
        while(left < right) {
            int sum = numbers[right] + numbers[left];
            if(sum == target) {
                return {left + 1, right + 1};
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
        
        return {-1, -1};
    }
};
