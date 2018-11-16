#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,m=-999,x,cpt=0;
    cin >> n;
    vector<int> A(n+1);
    A[0]=0;
    for(i=1;i<=n;i++){
        cin >> x;
        A[i]=x+A[i-1];
        if (x==1) cpt++;
    }
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            x=(j-i+1)-2*(A[j]-A[i-1]);
            if ( x>m ) m=x;
        }
    }
    cout << m+cpt;
    return 0;
}
