vector<vector<int> > fourSum(vector<int> &a, int k) {
    if (a.size() < 4) return {};
    vector<vector<int>> ans;
    sort(a.begin(), a.end());
    for (int i = 0; i < a.size() - 3; ++i) {
        // current element is greater than k then no quadruplet can be found
        if (a[i] > 0 && a[i] > k) break;
        // removing duplicates
        if (i > 0 && a[i] == a[i - 1]) continue;
        for (int j = i + 1; j < a.size() - 2; ++j) {
            // removing duplicates
            if (j > i + 1 && a[j] == a[j - 1]) continue;

            // taking two pointers
            int left = j + 1;
            int right = a.size() - 1;
            while (left < right) {
                int old_l = left;
                int old_r = right;
                // calculate current sum
                int sum = a[i] + a[j] + a[left] + a[right];
                if (sum == k) {
                    // add to answer
                    ans.push_back({a[i], a[j], a[left], a[right]});

                    // removing duplicates
                    while (left < right && a[left] == a[old_l]) left++;
                    while (left < right && a[right] == a[old_r]) right--;
                } else if (sum > k) {
                    right--;
                } else {
                    left++;
                }
            }
        }
    }
    return ans;

}