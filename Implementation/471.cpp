#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,m,n,x,c=0,ara[1000];
    cin >> m >> n;
    for(i=0; i<m; i++){
        cin >> ara[i];
    }
    for(i=0; i<m; i++){
        if(ara[i] >= ara[n-1] && ara[i]>0) c++;
    }
    cout << c << endl;
    return 0;
}
