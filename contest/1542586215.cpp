#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
   //freopen("input.txt","r",stdin);
   string s;
   while(cin>>s){
   	int n;
   	cin>>n;
   	std::vector<string> v;
   	bool istrue = false;
   	for(int i=0;i<n;i++)
   	{
   		string temp;
   		cin>>temp;
   		v.push_back(temp);
   		temp = temp+temp;
   		for(int i=0;i<temp.size()-1;i++)
   		{
   			if(temp[i]==s[0]&&temp[i+1]==s[1])
   			istrue=true;
   		}
   	}
   	bool end =false,start = false;
   	for(int i=0;i<n;i++){
   		string temp = v[i];
   		if(temp[1]==s[0])
   			end = true;
   	}
   	for(int i=0;i<n;i++){
   		string temp = v[i];
   		if(temp[0]==s[1])
   			start = true;
   	}
   	if(end&&start)
   		istrue=true;
   	if(istrue)
   		cout<<"YES"<<endl;
   	else
   		cout<<"NO"<<endl;

   }
}