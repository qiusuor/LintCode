#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	    /** 
		     * Determine whether s3 is formed by interleaving of s1 and s2. 
			      * @param s1, s2, s3: As description. 
				       * @return: true of false. 
					        */  
	bool isInterleave(string s1, string s2, string s3) {
		// write your code here  
		if (s3.length() != s1.length() + s2.length())
			return false;
		if (s1.length() == 0)
			return s2 == s3;
		if (s2.length() == 0)
			return s1 == s3;
		vector<vector<bool> > dp(s1.length() + 1,vector<bool>(s2.length() + 1,false));
		dp[0][0] = true;
		for (int i = 1; i <= s1.length(); i++)
			dp[i][0] = dp[i - 1][0] && (s3[i - 1] == s1[i - 1]);
		for (int i = 1; i <= s2.length(); i++)
			dp[0][i] = dp[0][i - 1] && (s3[i - 1] == s2[i - 1]);
		for (int i = 1; i <= s1.length(); i++)
		{
			for (int j = 1; j <= s2.length(); j++)
			{
				int t  = i + j;
				if (s1[i - 1] == s3[t - 1])
					dp[i][j] = dp[i][j] || dp[i - 1][j];
				if (s2[j - 1] == s3[t - 1])
					dp[i][j] = dp[i][j] || dp[i][j - 1];
			}
		}
		return dp[s1.length()][s2.length()];
	}
};

int main(void) {
	Solution s;
	string a = "sdfjas;dfjoisdufzjkndfasdkfja;sdfa;dfa;dfaskdjhfasdhjdfakhdgfkajdfasdjfgajksdfgaksdhfasdkbfjkdsfbajksdfhakjsdfbajkdfbakdjsfgaksdhgfjkdsghfkdsfgadsjfgkajsdgfkjasdfh";
	string b = "dfnakdjnfjkzghdufguweygfasjkdfgb2gf8asf7tgbgasjkdfgasodf7asdgfajksdfguayfgaogfsdkagfsdhfajksdvfbgkadsghfakdsfgasduyfgajsdkfgajkdghfaksdgfuyadgfasjkdvfjsdkvfakfgauyksgfajkefgjkdasgfdjksfgadjkghfajksdfgaskdjfgasjkdgfuyaegfasdjkfgajkdfygadjskfgjkadfg";
	string c = "sdfjas;dfjoisdfnakdjnfjkzghdufguwdufzjkeygfasjkdfgb2gf8asf7ndtgbgasjkdfgasodf7asdfgfajkasdksdfguayfgaogfsdkagfsfjadhfajksdvfbgkadsghfa;sdkdsfgasduyfgajsdkfgafajkdghfaksdgfuyadgfas;dfjkdvfjsdkvfakfgauyksa;dgfajkefgjkdasgfdjksffaskdjhfasdhjdfakhdgadjkghfajgfkajdfksdfgaskdjfgasjkdgfuasdjfgajksdfgaksdhfasdkbfjkdsfbajksdfyaegfasdjkfgajkdfygadjskfgjkadfghakjsdfbajkdfbakdjsfgaksdhgfjkdsghfkdsfgadsjfgkajsdgfkjasdfh";
	cout << s.isInterleave(a, b, c);
	system("pause");
}