#include <iostream>
using namespace std;

const int MAXBUF = 10000;
char buf[MAXBUF], *ps = buf, *pe = buf+1;

inline void rnext()
{
    if(++ps == pe)
        pe = (ps = buf)+fread(buf,sizeof(char),sizeof(buf)/sizeof(char),stdin);
}

template <class T>
inline bool rin(T &res)
{
    res = 0;
    T f = 1;
    if(ps == pe) return false;//EOF
    do{
        rnext();
        if('-' == *ps) f = -1;
    }while(!isdigit(*ps) && ps != pe);
    if(ps == pe) return false;//EOF
    do
    {
        res = (res<<1)+(res<<3)+*ps-48;
        rnext();
    }while(isdigit(*ps) && ps != pe);
    res *= f;
    return true;
}

int a[20];

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, k, flag=0, ss;
    // cin >> n >> k;
    rin(n);rin(k);
    for (int i = 0; i < n; i++)
    {
        int t,tsum=0;
        ss = 0;
        for (int j = 1; j <= k; j++)
        {
            // cin >> t;
            rin(t);
            ss += t << (k - j);
            tsum+=t;
        }
        if(!tsum) flag++;
        a[ss]++;
    }

    // for(int i=0;i<16;i++)
    //     cout<<i<<"   "<<a[i]<<endl;

    if(flag)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(int i=0;i<15;i++)
    {
        if(!a[i]) continue;
        for(int j=i;j<16;j++)
        {
            if(!a[j]) continue;
            if(!(i&j))
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}