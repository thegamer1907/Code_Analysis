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
	int n,h;
	cin>>n>>h;
	int i,arr[n];
	for(i=0;i<n;i++)cin>>arr[i];
	int ans=0;
	for(i=0;i<n;i++)
	{
	    ans+=arr[i]>h?2:1;
	}
	cout<<ans<<endl;
	return 0;
}
