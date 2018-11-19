#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pii pair < int , pair < int , int > >
#define pi pair < int , int >
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define sf(a) scanf("%d",&a)
#define sf2(a,b) scanf("%d%d",&a,&b)

int main()
{
    cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string pas;
	cin >> pas;
	int n;
	cin >> n;
//	cout <<n << endl;
	vector <string> a(n);
	string temp;
	bool flag = false;
	for(int i = 0; i < n; i++)
	{
	    cin >> temp;
	    a[i] = temp;
	    if(temp == pas)
	    {
	        flag = true;
	    }
	    if(temp[0] == pas[1] && temp[1] == pas[0]) flag = true;
	}
	if(flag) cout << "YES";
	else
	{
	    int i = 0,count = 0;
	    while(i < n)
	    {
	        if(pas[0] == a[i][1])
	        {
	            count++;
	            pas[0] = ' ';
	            }
	        if(pas[1] == a[i][0]){
	            pas[1] = ' ';
	            count++;
	        }
	        if(count == 2) break;
	        i++;
	    }
	    if(count == 2) cout << "YES";
	    else cout << "NO";
	}
}