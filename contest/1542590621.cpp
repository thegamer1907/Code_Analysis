#include<bits/stdc++.h>

#define ll long long
#define ld long double
#define pb push_back
#define pl pop_back
#define pf push_front
#define pp pop_front
#define f first
#define s second
#define PI 3.141592653589

using namespace std;

ll i , x , y , R , n , j , k , color[500000];
string a[500000] , b;

int main()
{
    ///ios_base::sync_with_stdio(0) , cin.tie(NULL) , cout.tie(NULL);
    cin>>b>>n;
    k = n;
    for (i = 1 ; i <= n ; i ++)
        cin>>a[i] , k ++ , a[k] = a[i];
    n = k;
    for (i = 1 ; i <= n ; i ++)
    {
        if (a[i] == b)
        {
            cout<<"YES";
            return 0;
        }
        else if (a[i][0] == b[1])
        {
            for (j = 1 ; j <= n ; j ++)
                if (i != j && a[j][1] == b[0])
                {
                    cout<<"YES";
                    return 0;
                }
        }
        else if (a[i][1] == b[0])
        {
            for(j = 1 ; j <= n ; j ++)
                if (i != j && a[j][0] == b[1])
                {
                    cout<<"YES";
                    return 0;
                }
        }
    }
    cout<<"NO";
    return 0;
}
