class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;      // nums1 ke valid elements ka last index
        int j = n - 1;      // nums2 ka last index
        int k = m + n - 1;  // nums1 ka total last index 

        // Piche se dono ke bade elements ko compare karke sahi jagah pr daal rhe hain
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // Agar nums2 mein abhi bhi elements bache hain toh unhe copy kar ke dal dange
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};