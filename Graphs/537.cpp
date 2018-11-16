#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,t;
	cin>>n>>t;

	char str[n];

	for(int i=0;i<n;++i)
        cin>>str[i];

	for(int j=0;j<t;++j)
    {
        for(int i=0;i<n-1;++i)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                str[i]='G';
                str[++i] = 'B';

            }
        }
    }

    for(int i=0;i<n;++i)
        cout<<str[i];

    return 0;
}

