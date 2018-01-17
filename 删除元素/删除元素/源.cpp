#include <vector>
#include <iostream>
#include <ctime>
#include <mutex>
#include <thread>
#include <algorithm>


#define SCALE 100000000

using namespace std;

class Solution {
public:
	/**
	* @param nums an integer array
	* @return nothing, do this in-place
	*/
	int removeElement(vector<int>& nums,int elem) {
		// Write your code here
		vector<int> zero_pos;
		//mutex m;
		for (int i = 0; i<nums.size(); i++)
		{
			if (nums[i] == elem)
			{
				zero_pos.push_back(i);
			}
		}
		if (zero_pos.size()) {
			int sum = 1; 
			for (size_t i = zero_pos[0] + 1; i < nums.size(); i++)
			{
				if (sum<zero_pos.size() && i == zero_pos[sum]) sum++;
				else nums[i - sum] = nums[i];
			}
			for (size_t i = 0; i < zero_pos.size(); i++)
			{
				nums[nums.size() - zero_pos.size() + i] = 0;
			}
		}
		return nums.size() - zero_pos.size();
	}
};






int main(void) {
	clock_t start = clock();
	vector<int> a(100000000);
	clock_t end = clock();
	cout << end - start<<endl;
	start = clock();
	for (int i=0;i<100000000;i++)
	{
		a.push_back(rand());
	}
	end = clock();
	cout << end - start << endl;
	vector<int> to;
	start = clock();
	copy(a.begin(), a.end(), back_inserter(to));

	end = clock();
	cout << end - start << endl;
	
	Solution s;
	start = clock();
	s.moveZeroes(a);
	end = clock();
	cout << end - start << endl;
	
	system("pause");
}