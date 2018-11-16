// author : naem
// bismillahir rahmanir rahim

#include <bits/stdc++.h>

#define ll                  long long
#define str_end '\0'
#define SIZE                100000
#define read(fn)            freopen(fn, "r", stdin)
#define write(fn)           freopen(fn, "w", stdout)
#define getarrsize(x)       (sizeof(x) / sizeof((x)[0]))
#define pb					push_back
#define rep(i, n) 			for(int i = 0; i < n; i++)
#define back_rep(i, n) 		for(int i = n -1; i >= 0; i--)
#define fogg(i,a,b) 		for(int i = (a); i <= (b); i++)
#define ford(i,a,b) 		for(int i = (a); i >= (b); i--)
#define for_str(str) 		for(int i = 0; str[i] != str_end; i++)
#define test_cin_int 		int t; cin >> t; while(t--)
#define test_cin_ll 		ll t; cin >> t; while(t--)
#define test_int 			int t; scanf("%d", &t); while(t--)
#define test_ll 			ll t; scanf("%I64d", &t); while(t--)
#define debug(x) 			cout << '>' << #x << ':' << x << "\n";
#define endl 				'\n'
#define off 				ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define maxx 				1e6+7

using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		read("in.txt");
		write("out.txt");
	#endif

	string input;

	cin >> input;

	int len = input.length();
	bool zero = false, one = false, flag = false;
	int countzero = 0, countone = 0;

	for(int i=0; i<len; i++)
	{
		if(input[i] == '0')
		{
			if(zero)
			{
				zero = true;
				one = false;

				countzero++;
				countone = 0;
			}
			else{
				zero = true;
				one = false;

				countzero = 1;
				countone = 0;
			}
			
		}
		else if(input[i] == '1')
		{
			if(one)
			{
				one = true;
				zero = false;
				
				countone++;
				countzero = 0;
			}
			else{
				one = true;
				zero = false;
				
				countone = 1;
				countzero = 0;
			}
		}

		if(countone >= 7 || countzero >= 7){
			flag = true;
			break;
		}
	}

	if(flag){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

	return 0;
}


