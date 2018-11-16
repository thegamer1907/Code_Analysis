#include <iostream>
#include <vector>
#include <cmath>
#include <set>
#include <map>
#include <algorithm>
#include <stack>
#include <climits>
#include <queue> 
#include <deque> 

#define in freopen("input.txt", "r", stdin) 
#define out freopen("output.txt", "w", stdout) 
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define mp make_pair
#define p push
#define pp pop
#define endl '\n'
#define NO cout << "NO"
#define YES cout << "YES"
#define SP system("pause");

using namespace std;

vector < pair<int, int>> Dancer;

bool UsedB[1000000], UsedG[1000000];

int main()
{
	int N, M, B[100000], G[100000], Count = 0;

	cin >> N;
	for (int i = 0; i < N; i++) cin >> B[i];
	cin >> M;
	for (int i = 0; i < M; i++) cin >> G[i];

	sort(B, B + N);
	sort(G, G + M);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (abs(B[i] - G[j]) <= 1 && !UsedB[i] && !UsedG[j])
			{
				Count++;
				UsedB[i] = 1;
				UsedG[j] = 1;
				break;
			}
		}
	}

	cout << Count;

//	SP;
}