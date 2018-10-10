#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

bool isperfect(int n)
    {
        int s=0;
        while (n>0)
        {
            s=s+n%10;
            n=n/10;
        }
        if (s!=10)
            return 0;
        else
            return 1;
    }

int main() {
 //   freopen("pp.in","r",stdin);
    ull x,i=19;
    cin>>x;
    while (x>0)
    {
        if (isperfect(i))
        {
            x--;
            if (x==0)
                break;
        }
        i++;
    }
    cout<<i;
    return 0;
}

