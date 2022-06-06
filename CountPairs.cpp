class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map <int,int> m;
        int ans = 0;
        for(int i=0;i<n;i++) {
            int diff = k - arr[i];
            if(m[diff])
                ans += m[diff];
            m[arr[i]]++;
        }
        return ans;
    }
};
