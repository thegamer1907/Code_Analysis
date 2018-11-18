#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>

using namespace std;

#define all(v) 	((v).begin()), ((v).end())
#define allr(v) ((v).rbegin()), ((v).rend())
#define sz(v) 	((int)((v).size()))
#define ll 	long long
#define loop(i,n) for(int i=0;i<n;i++)

void File()
{
	freopen("output.txt", "w", stdout);
	freopen("input.txt", "r", stdin);
}
void fast()
{
	ios::sync_with_stdio(NULL);
	cout.tie(NULL);
	cin.tie(NULL);
}
int main()
{
	fast();
	string pass;
	int n;
	cin >> pass;
	cin >> n;
	bool t = false;
	vector<string>arr(n);
	loop(i, n)
	{
		cin >> arr[i];
		if (pass == arr[i])
			t = true;
	}
	if (t)
	{
		cout << "YES\n";
		return 0;
	}
	if (n == 1)
	{
		string tmp = arr[0];
		if (pass == tmp)
			cout << "YES\n";
		else if (pass[0] == tmp[1] & pass[1] == tmp[0])
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	else
	{
		string ans = "";
		for (int i = 0; i < n; i++)
		{
			int f = arr[i].find(pass[0]);
			if (f == 0)
				ans += arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			int f = arr[i].find(pass[0]);
			if (f == 1)
				ans += arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			int f = arr[i].find(pass[1]);
			if (f == 0)
				ans += arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			int f = arr[i].find(pass[1]);
			if (f == 1)
				ans += arr[i];
		}
		int f = ans.find(pass);
		if (f != -1)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
#if _DEBUG
	system("pause");
#endif
	return 0;
}