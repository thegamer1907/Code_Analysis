#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define pb push_back
#define vi vector<int>
#define vt vector<tup>
#define vtt vector<vt >
#define vii vector<vi >
#define viii vector<vii >
#define vb vector<bool>
#define vd vector<double>
#define vbb vector<vb >
#define vl vector<long long int>
#define vll vector<vl >
#define vlll vector<vll >
#define foi(x) for (int i = 0; i < x; ++i)
#define foj(x) for (int j = 0; j < x; ++j)
#define fok(x) for (int k = 0; k < x; ++k)
#define foi1(x) for (int i = 1; i <= x; ++i)
#define foj1(x) for (int j = 1; j <= x; ++j)
#define si size()
#define le length()


int main(int argc, char const *argv[])
{
	bool done=0;
	string s;
	cin>>s;
	int n;
	cin>>n;
	string t[n];
	foi(n){
		cin>>t[i];
		if(t[i]==s)
			done=1;
	}
	foi(n){
		foj(n){
			// if(i==j)
			// 	continue;
			if(t[i][1]==s[0] and t[j][0]==s[1])
				done=1;
		}
	}
	if(done)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}