public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> indexing = new Dictionary<int, int>(nums.Length); // Initialize with capacity
        
        for (int i = 0; i < nums.Length; i++) {
            int check = target - nums[i];
            
            if (indexing.TryGetValue(check, out int index)) {
                return new int[] { index, i };
            }
            
            // Only add to the dictionary if the key does not exist
            if (!indexing.ContainsKey(nums[i])) {
                indexing[nums[i]] = i;
            }
        }
        
        return null; // In case no solution is found    
    }
}