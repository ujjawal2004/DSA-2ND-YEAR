class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		vector<int> ans = nums1;
		if(n == 0)
			ans = nums1;
		else
		{
			int counter1 = 0;
			int counter2 = 0;
			int counter = 0;
			int v1 = INT_MAX;
			int v2 = INT_MAX;
			while(counter1 < m || counter2 < n)
			{
				v1 = (counter1 < m) ? nums1[counter1] : INT_MAX;
				v2 = (counter2 < n) ? nums2[counter2] : INT_MAX;

				if(v1 < v2 && counter1 < m)
				{
					ans[counter] = v1;
					++counter;
					++counter1;
				}
				else if(v1 >= v2 && counter2 < n)
				{
					ans[counter] = v2;
					++counter;
					++counter2;
				}
			}
		}
		nums1 = ans;
	}
};
