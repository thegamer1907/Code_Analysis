#include <iostream>

#define ll long long
#define db(x) cout << "> " << #x << " : " << x << endl;

const int N = 100010;
using namespace std;

inline bool bit(int mask, int idx) { return ((mask & (1 << idx)) != 0); }

int n, k;
bool doesKnow[N][4];

bool dp[N][16][4];
bool vis[N][16][4];

bool isPossible(int idx, int mask, int rem)
{
	if(rem == 0)
		return true;
	
	if(idx == n)
		return false;
	
	if(vis[idx][mask][rem])
		return dp[idx][mask][rem];
		
	bool res = isPossible(idx +1, mask, rem);
	
	bool canSelect = true;
	int resultantMask = mask;
	
	for(int i = 0; i < k; i++)
	{
		if(doesKnow[idx][i])
		{
			if(bit(mask, i))
			{
				canSelect = false;
				break;
			}
			
			resultantMask |= (1 << i);
		}
	}
	
	if(canSelect)
		res |= isPossible(idx +1, resultantMask, rem -1);
	
	vis[idx][mask][rem] = true;
	dp[idx][mask][rem] = res;
	
	return res;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n >> k;
	
	for(int i = 0; i < n; i++)
	{
		bool isKnownToAtleastOneTeam = false;
		
		for(int j = 0; j < k; j++)
		{
			cin >> doesKnow[i][j];
			isKnownToAtleastOneTeam |= doesKnow[i][j];
		}
		
		if(not isKnownToAtleastOneTeam)
		{
			cout << "YES\n";
			return 0;
		}
	}
	
	bool res = isPossible(0, 0, 2);
	
	if(res)
		cout << "YES\n";
	
	else
		cout << "NO\n";
		
	return 0;
}