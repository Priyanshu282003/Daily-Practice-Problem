class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
       
        vector<int> res;
        int q = queries.size();
        
        for (int i=0; i<q; i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            int x = queries[i][2];
            
            int idx = lower_bound(arr.begin()+l, arr.begin()+r, x) - arr.begin();
            int uIdx = upper_bound(arr.begin()+l, arr.begin()+r, x) - arr.begin();
            
            if (arr[uIdx]==x) uIdx++;
            res.push_back(uIdx-idx);
        }
        
        return res;
        
    }
};