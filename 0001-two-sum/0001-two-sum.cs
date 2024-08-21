public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> indexing = new Dictionary<int, int>();
        List<int> res = new List<int>();
        
        for (int i = 0; i < nums.Length; i++) {
            int check = target - nums[i];
            
            if (indexing.ContainsKey(check)) {
                res.Add(indexing[check]);
                res.Add(i);
                break;  // You can exit the loop once the solution is found
            }
            else {
                indexing[nums[i]] = i;
            }
        }
        
        return res.ToArray();
    
    }
}