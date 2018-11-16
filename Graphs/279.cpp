#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
	#endif
	
    int n,t;
    cin >> n >> t;
    string am;
    cin >> am;

    while(t--)
    for(int i = 0; i<am.size()-1; i++)
    {
    	if(am[i]=='B' && am[i+1]=='G'){
    	am[i]='G';
    	am[i+1]='B';
    	i++;
    	}
    }
    cout << am << endl;




	return 0;
}