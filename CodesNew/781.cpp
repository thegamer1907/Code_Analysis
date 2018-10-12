#include <bits/stdc++.h>

using namespace std;
int n,m,a,b;
map<string,int>v;
map<string,int>v1;
string s;
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		{
			cin>>s;
			v[s]++;
		}
	for(int i=1;i<=m;i++)
		{
			cin>>s;
			v1[s]++;
			for(auto i:v)
				{
					if(i.first==s){
						a++;
						b++;
						break;
					}
				} 
		}
		while(1)
		{
			if(a!=0 or b!=0)
				{
					a--;
					b--;
					n--;
					m--;
				}
			else{
		    	if(n!=0)
		    		n--;
		    	else{
		    		cout<<"NO";
					return 0;
				}
			}
			if(a!=0 or b!=0)
				{
					a--;
					b--;
					n--;
					m--;
				}	
			else
				{
					if(m!=0)
						m--;
					else{
						cout<<"YES";	
						return 0;   
					}
				}
					
		}
		
			
}


















