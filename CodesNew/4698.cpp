#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , s[500005]={0};
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>s[i];
    sort(s , s+n , greater<int>());
    int p1=0 , p2=n/2 , counter=0; // p1 point to the greatest thing , p2 point to the first one to be held
    while(p2<n && p1<n/2)
    {
        if(s[p2]*2<=s[p1])
        {
            counter++;
                p1++;
                p2++;
        }
        else
            p2++;
    }
    cout<<n-counter<< endl;

}
