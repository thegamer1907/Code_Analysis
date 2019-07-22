#include <bits/stdc++.h>
 
using namespace std;
 
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define MOD  1000000007
 
int main()
{
    FAST;
    //mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
	
	long long N, K;
	int M;
	cin >> N >> M >> K;
	
	vector<long long> P(M);
	int i;
	
	for(i = 0; i < M; i++)
	{
		cin >> P[i];
	}
	
	sort(P.begin(), P.end());
	
	long long S = ((P[0] % K) == 0) ? (P[0] - K) : (P[0] - (P[0] % K));
	long long C = K;
	long long Result = 0;
	while(S < N)
	{
		int Temp = upper_bound(P.begin(), P.end(), (S + C)) - upper_bound(P.begin(), P.end(), S);

		S += C;

		if(Temp)
		{
			C = Temp;
			Result++;
		}
		else
		{
			if(upper_bound(P.begin(), P.end(), S) == P.end())
			{
				break;
			}
			else
			{
				long long Next = *upper_bound(P.begin(), P.end(), S);
				C = (((Next - S + K - 1) / K) * K);
				//cout << C << endl;
			}
		}
		
		//cout << S << " " << C << endl;
	}
	
	cout << Result << endl;

    return 0;
}