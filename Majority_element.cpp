class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n = a.size(), cur = 0, cur_count = 0;

        if(n==1)    return a[0];

        sort(a.begin(), a.end());

        for(int i = 0; i < n-1; i++){
            cur = a[i];
            cur_count++;

            if (cur_count > n/2)   return cur;

            if(a[i] != a[i+1])  cur_count = 0;
        }
        return cur;
    }
};
