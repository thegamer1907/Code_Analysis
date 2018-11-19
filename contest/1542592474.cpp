/*
 *
 ********************************************************************************************
 * AUTHOR : Vijju123                                                                        *
 * Language: C++14                                                                          *
 * Purpose: -                                                                               *
 * IDE used: Codechef IDE.                                                                  *
 ********************************************************************************************
 *
 Comments will be included in practice problems if it helps ^^
 */



#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	#ifdef JUDGE
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    #endif
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	string s;
	cin>>s;
	int n;
	cin>>n;
	string pass[n];
	int i;
	int flag=0;
	for(i=0;i<n;i++)
	{
	    cin>>pass[i];
	    if(pass[i]==s)flag=1;
	}
	int pre=0;
	for(i=0;i<n;i++)
	{
	    if(pass[i][0]==s[1])pre=1;
	}
	int pos=0;
	for(i=0;i<n;i++)if(pass[i][1]==s[0])pos=1;
	if(pre+pos==2)flag=1;
	if(flag)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
	return 0;
}
