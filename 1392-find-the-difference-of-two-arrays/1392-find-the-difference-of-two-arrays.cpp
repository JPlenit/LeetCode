class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> v(2);
        map<int, int> myMap1, myMap2;
        myMap1 = func(nums1, nums2);
        myMap2 = func(nums2, nums1);

        for (const auto& pair : myMap1) {
            v[0].push_back(pair.first);
        }

        for (const auto& pair : myMap2) {
            v[1].push_back(pair.first);
        }

        return v;
    }

    map<int, int> func(vector<int> nums1, vector<int> nums2) {
        map<int, int> m;
        for (int i = 0; i < nums1.size(); i++) {
            m[nums1[i]] = m[nums1[i]];
        }
        for (int i = 0; i < nums2.size(); i++) {
            if (m.find(nums2[i]) != m.end()) m.erase(nums2[i]);
        }
        return m;
    }
};