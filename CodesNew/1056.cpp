#include <bits/stdc++.h>
using namespace std;
vector <string> v1;
vector <string> v2;
int main() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
    	string s;
    	cin>>s;
    	v1.push_back(s);
    }
  
  int ele=0;
    for(int i=1;i<=m;i++)
    {
    	string s1;
    	cin>>s1;
    	v2.push_back(s1);
    }
    if(n>m)
    {
    	cout<<"YES"<<endl;
    }
    else if(n<m)
    {
    	cout<<"NO"<<endl;
    }
    else if(n==m)
    {
      for(int i=0;i<m;i++)
       {   
       	//cout<<v2[i];
         if(find(v1.begin(), v1.end(), v2[i]) != v1.end())
          {
          	ele++;
          }
       }
       if(ele&1)
       {
       	cout<<"YES"<<endl;
       }
       else
       {
       	cout<<"NO"<<endl;
       }
    }
 
	return 0;
}