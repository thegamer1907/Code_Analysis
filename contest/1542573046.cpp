#include <iostream>
#include <string>
#include <set>
#include <utility>
#include <assert.h>
#include <functional>
#include <algorithm>
#include <queue>
using namespace std;

#define REP(i, n) for(int i=0;i<n;i++)
#define REPS(i,a,b) for(int i=a;i<b;i++)
#define isOn(n, j) (n & (1<<j))
#define ll long long
#define ii pair<int, int>
#define iii pair<int, ii>


int N, K;
bool A[100010][4];

unsigned int B[16];


int comp(int i)
{
	return  (1 << K) - (i+1);
}

int  main()
{
//	freopen("input.txt", "r", stdin);
	cin >> N >> K; REP(i, N)REP(j, K)cin >> A[i][j];


	REP(i, 1 << K)B[i] = 0;
	REP(i, N)
	{
		int temp = 0;
		REP(j, K)
			temp += A[i][j] * (1 << j);
		B[temp]++;
	}

	if (B[0] > 0){
		cout << "YES\n";
		return 0;
	}

	REP(i, 1 << K)
		REPS(j, i+1, 1 << K)
	{
		if ( B[i]>0 && B[j]>0 )
		{
			if ((i&j) == 0)
			{
				cout << "YES\n"; return 0;
			}
		}
	}

	cout << "NO\n";
	return 0;

}




