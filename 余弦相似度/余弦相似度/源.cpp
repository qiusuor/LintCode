#include <map>
#include <set>
#include <list>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	/**
	* @param A: An integer array.
	* @param B: An integer array.
	* @return: Cosine similarity.
	*/
	double cosineSimilarity(vector<int> A, vector<int> B) {
		// write your code here
		double squar_A, squar_B, dot;
		squar_B = squar_A = dot = 0;
		if (A.size() != B.size()) return 2.;
		for (int i = 0; i < A.size(); i++) {
			squar_A += A[i] * A[i];
			squar_B += B[i] * B[i];
			dot += A[i] * B[i];
		}
		if (squar_A == 0 || squar_B == 0) return 2.;
		return dot / (sqrt(squar_A)*sqrt(squar_B));
	}
};


