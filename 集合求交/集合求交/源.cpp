#include <vector>
#include <iostream>
#include <ctime>
#include <mutex>
#include <thread>
#include <algorithm>
#include <set>


using namespace std;



class Solution {
public:
	/**
	* @param nums1 an integer array
	* @param nums2 an integer array
	* @return an integer array
	*/
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		// Write your code here
		vector<int> result;
		if (nums1.size() && nums2.size())
		{
			sort(nums2.begin(), nums2.end());
			sort(nums1.begin(), nums1.end());


			int i = 0;
			int j = 0;

			while (i < nums1.size() && j < nums2.size())
			{
				if (nums1[i] == nums2[j])
				{
					result.push_back(nums1[i]);
					i++;
					j++;
				}
				else if (nums1[i] < nums2[j]) {
					i++;
				}
				else {
					j++;
				}
			}
			int sum = 0;
			for (int i = 1; i < result.size(); i++)
			{
				if (result[sum] != result[i])
				{
					sum++;
					result[sum] = result[i];
				}

			}
			result.resize(sum + 1);
		}

		return result;
	}
};

int main(void) {
	vector<int> a{ 1 ,1 ,4 ,4 ,6 ,6 ,6 ,8 ,10 ,13 ,14 ,18 ,20 ,20 ,21 ,22 ,22 ,22 ,23 ,24 ,24 ,25 ,27 ,27 ,27 };
	vector<int> b{ 0, 0, 0, 5, 5, 6, 6, 6, 8, 9, 11, 11, 14, 14, 15, 16, 17, 18, 19, 20, 24, 24, 24, 25, 26, 27, 27 };

	Solution s;

	vector<int> re = s.intersection(a, b);
	for (auto i : re) {
		cout << i << " ";
	}
	system("pause");
}