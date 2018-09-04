#include<bits/stdc++.h>

using namespace std;

bool canBeProduced(int mB, int mS, int mC, int nB, int nS, int nC, int pB, int pS, int pC, long long r, long long num) {
	long long neededB = num * mB, neededS = num * mS, neededC = num * mC;
	if ((neededB - nB)*pB > r) return false;
	else if ((neededB - nB) > 0) r -= ((neededB - nB)*pB);
	if ((neededS - nS)*pS > r) return false;
	else if ((neededS - nS) > 0) r -= ((neededS - nS)*pS);
	if ((neededC - nC)*pC > r) return false;
	else if ((neededC - nC) > 0) r -= ((neededC - nC)*pC);
	return true;
}

int main()
{
	string s;
	int mB = 0, mS = 0, mC = 0, nB, nS, nC, pB, pS, pC;
	long long r, num;
	cin >> s >> nB >> nS >> nC >> pB >> pS >> pC >> r;
	for (int i(0); i < s.length(); ++i) {
		if (s[i] == 'B') mB++;
		else if (s[i] == 'S') mS++;
		else mC++;
	}
	long long mid, L = 0, R = r + max(nB, max(nS, nC));
	while (L < R)
	{
		mid = (L + R + 1) / 2;
		if (canBeProduced(mB, mS, mC, nB, nS, nC, pB, pS, pC, r, mid))
		{
			L = mid;
		}
		else R = mid - 1;
	}
	cout << L << endl;
	//system("pause");
	return 0;
}
