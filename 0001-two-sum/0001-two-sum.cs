public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> indexing = new Dictionary<int, int>(nums.Length); 
        
        for (int i = 0; i < nums.Length; i++) {
            int check = target - nums[i];
            
            if (indexing.TryGetValue(check, out int index)) {
                return new int[] { index, i };
            }
            
            indexing[nums[i]] = i;  // Update even if key exists (trusting no duplicates)
        }
        
        return null;    
    }
}