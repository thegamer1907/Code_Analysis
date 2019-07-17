#include <bits/stdc++.h>
 
using namespace std;
 
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);
#define MOD  1000000007
 
int main()
{
    FAST;
    //mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
	
	long long N;
	int M, K;
	cin >> N >> M >> K;
	
	vector<long long> P(M);
	int i;
	
	for(i = 0; i < M; i++)
	{
		cin >> P[i];
	}
	
	sort(P.begin(), P.end());
	
	long long S = 0;
	int C = K;
	int Result = 0;
	while(S < N)
	{
		int Temp = upper_bound(P.begin(), P.end(), (S + C)) - upper_bound(P.begin(), P.end(), S);

		//cout << S << ":" << C << endl;

		if(Temp)
		{
			//cout << S << " " << C << endl;
			Result++;
		}

		S += C;
		C = (Temp == 0) ? K : Temp;
	}
	
	cout << Result << endl;

    return 0;
}