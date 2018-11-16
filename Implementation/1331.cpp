#include <bits/stdc++.h>
using namespace std;

#define f(i,a,b) for(int i=(int)a;i<(int)b;i++)
#define fr(i,a,b) for(int i=(int)b;i>(int)a;i--)

int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n>>t;
	char str[n];
	cin>>str;
	f(i,0,t){
		f(j,0,n-1){
			if(str[j] == 'B' && str[j+1] == 'G'){
				str[j] = 'G';
				str[j+1] = 'B';
				j++;
			}
		}
	}
	cout<<str;
	cout<<endl;
	return 0;
}