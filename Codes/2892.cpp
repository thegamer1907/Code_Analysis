#include<bits/stdc++.h>
using namespace std;
#define N 1000009
int z[N];
int L, R, asw, n, flag;
int check1 = 0, check2;
string s;

void Zfuck()
{
		L = R = 0;
		z[0] = n;
		for(int i = 1; i < n; ++i)
		{
				flag = 0;
				if(i > R)
				{
						R = L = i;
						while(R < n && s[R] == s[R - L]) R ++;
						z[i] = R - L; R --;
						flag = R;
				}
				else
				{
						int k = i - L;
						if(z[k] < R - i + 1) z[i] = z[k], flag = i + z[k] - 1;
						else
						{
								L = i;
								while(R < n && s[R] == s[R - L]) R ++;
								z[i] = R - L; R --;
								flag = R;
						}
				}
				if(R < n - 1) check1 = max(check1, z[i]);
				else if(R == n - 1) check2 = max(check2, z[i]);
				//cout << check1 << ' ' << check2 << ' ' << z[i] << endl;
				if(flag == n - 1) 
					if(check1 >= z[i] || check2 > z[i])
						asw = max(asw, z[i]);
						
				
		}
}

int main()
{
	cin >> s;
	n = s.length();
	Zfuck();
	if(asw)
		for(int i = 0; i < asw; ++i) cout << s[i];
	else cout << "Just a legend";
} 