#include "bits/stdc++.h" 
#include <unordered_map>
using namespace std;
typedef long long int Int;
#define setbits(x) __builtin_popcount(x)
#define fast cin.sync_with_stdio(0);cin.tie(0)

Int fexpo(Int a,Int b)
{
    if(b == 0)      return 1LL;
    if(b == 1)      return a;
    if(b == 2)      return ((a) * (a));
    if(b%2 == 0)    return fexpo(fexpo(a,b/2),2);
    else          return ((a) * (fexpo(fexpo(a,(b-1)/2),2)));
}

int main()
{
	string x;
	cin >> x;
	int t;
	cin >> t;
	bool f1 = false , f2 = false;
	for(int i = 0 ; i < t ; i++)
		{
			string y;
			cin >> y;
			if(y == x)
			{
				f1 = f2 = true;
			}
			if(y[0] == x[1])
			{
				
				f2 = true;
				//cout << "Hain_  " << f2 << endl;
			}

			if(y[1] == x[0])
			{
				
				f1 = true;
				//cout << "Hain2++  " << f1 << endl;
			}
		}
		//cout << f1 << "and" << f2 << endl;
		if( f1 and f2)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		return 0;
}