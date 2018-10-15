#include<bits/stdc++.h>
using namespace std;
const int M=5e5+4;
string s[M],pr;
char ch;
vector<string>ans;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>ch>>s[i];
	ans.push_back(s[n-1]);
	pr=s[n-1];
	for(int i=n-2;i>=0;i--)
	{
		string tmp="";
		if(pr=="")
		{
			ans.push_back("");
			continue;
		}
		int j=0,cc=0;
		while(j<s[i].length() && j<pr.length())
		{
			if(s[i][j]==pr[j]) tmp+=s[i][j];
			else if(s[i][j]<pr[j])
			{
				tmp+=s[i][j];
				j++;
				cc=1;
				break;
			}
			else break;
			j++;
		}
		if(cc==1)
		{
			while(j<s[i].length())
			{
				tmp+=s[i][j];
				j++;
			}
		}
		ans.push_back(tmp);
		pr=tmp;
	}
	reverse(ans.begin(),ans.end());
	for(auto x:ans)
	cout<<'#'<<x<<endl;
	return 0;
}