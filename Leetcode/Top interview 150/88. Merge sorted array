class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int endpos=m+n-1;
        while(m>0 && n>0)
        {
            if(nums1[m-1]>nums[n-1])
            {
                nums1[endpos]=nums1[m-1];
                m-=1;
            }
            else
            {
                nums1[endpos]=nums2[n-1];
                n-=1;
            }
            endpos-=1;
        }
        while(n>0)
        {
            nums1[endpos] = nums2[n-1];
            n-=1;
            endpos-=1;
        }
    }
};

// or faster

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int endpos=m-- +n-- -1;
        while(m>=0 && n>=0)
            nums1[endpos--] = nums1[m]>nums2[n] ? nums1[m--] : nums2[n--];
        while(n>=0)
            nums1[endpos--] = nums2[n-- ];
    }
};
