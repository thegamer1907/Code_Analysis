#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0),cin.tie(0), cout.tie(0);
	int n,p1=0,p2=0;
	char a, b;
	cin >> a >> b;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		char a1, a2;
		cin >> a1 >> a2;
		if((a1==a && a2==b) || (a1==b && a2==a)){
		
	 cout << "YES";return 0;}
	 else if(a1==b)
	 		p1++;
	 		else if(a2==a)
	 			p2++;
	}
	if(p1!=0 && p2!=0)
		cout << "YES";
		else cout << "No";
}