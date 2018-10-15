#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,i;
    cin>>a;
    int s[a];
    for (i=0;i<a;i++){
        cin>>s[i];
    }
    sort(s,s+a);
    int  j =a/2;
    int ans =a;
    for (i=0 ; i<a/2 ; i++ )
        {
            while(1){
                if(s[i]*2<=s[j]){
                    ans--;
                    j++;
                    break;
                }
                else {
                    j++;
                }
                if(j==a) break;
                    }
                    if(j==a) break;

        }
        cout<<ans<<endl;
    return 0;
}
 