#include <bits/stdc++.h>
using namespace std;


int main()
{
	int n, t;scanf("%d %d", &n, &t);
	string s;
	cin >> s;

	while(t--){
		bool f=false;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='B' and s[i+1]=='G'){
				swap(s[i], s[i+1]);
				i++;f=true;
			}
		}
		if(!f)break;
	}
	cout << s << endl;
}