#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<long long> v,cnt;
void func(string s)
{
	long long i,j;
	v.resize(s.length(),0);
	cnt.resize(1000002,0);
	cnt[0]=1;
	for(j=1;j<v.size();j++)
	{
		i=v[j-1];
		while(1)
		{
			if(s[i]==s[j])
			{
				v[j]=i+1;
				break;
			}
			else if(i==0)
				break;
			else 
				i=v[i-1];
		}
		cnt[v[j]]++;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	long long i,len;
	string s;
	cin>>s;
	func(s);
	if(v[s.length()-1]==0)
	{
		cout<<"Just a legend\n";
		return 0;
	}
	else if(cnt[v[s.length()-1]]>1)
	{
		len=v[s.length()-1];
	}
	else if(v[v[s.length()-1]-1]!=0)
	{
		len=v[v[s.length()-1]-1];
	}
	else
	{
		cout<<"Just a legend\n";
		return 0;
	}
	for(i=0;i<len;i++)
		cout<<s[i];
	cout<<"\n";
	return 0;
}
