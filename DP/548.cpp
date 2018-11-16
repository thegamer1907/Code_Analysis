#include <bits/stdc++.h>
using namespace std;


int main()
{	
     int N = 100005;
        int d[N];
	string s;
	cin >> s;
	for(int i = 1; i < s.size(); i++)
                {
		if(s[i]==s[i-1])
                        {
			d[i]=d[i-1]+1;
                        }
		else
                       {
			d[i]=d[i-1];
                       }
	}
	int m;
	cin >> m;
	int x,y;
	while(m--)
                {
		cin >> x >> y;
		cout << d[y-1]-d[x-1] << endl;
	        } 


    return 0;
}