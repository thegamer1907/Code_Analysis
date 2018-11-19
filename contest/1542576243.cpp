/*
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <stack>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
const int maxn = 100050;
typedef long long int ll;
string s[300];
int a[300],b[300];
string mas;
void init(){
    string yubei[1000];// = {"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
    for(int i=0;i<64;++i){
    // 0101 1001 0000 111
        int weishu = 6;
        int t = i;
        //cout<<i<<' '<<weishu<<endl;
        while(t >= 0 && weishu > 0){
            if(t % 2 == 0)yubei[i] += "0";
            else yubei[i] += "1";
            t = t/2;
            weishu--;
        }
        cout<<yubei[i]<<endl;
    }
    getchar();
    getchar();
    for(ll i = 1000;i <= 2 * (10e7); ++i){
        cout << i << endl;
        ll t = i;
        mas = "";
        while(t>0){
            if(t%2)mas += "1";
            else mas += "0";
            t = t/2;
        }
        int ok = 1;

        for(int j=0;j<64;++j){
            string::size_type idx = mas.find(yubei[j]);
            if(idx == string::npos){
                ok = 0;
                break;
            }
        }
        if(ok){
            cout<<mas<<endl;
            break;
        }
    }

}
int main()
{
    //cin.tie(0);
    //ios::sync_with_stdio(false);
    init();
    int n,m;
    cin >> n;
    for(int i = 1;i <= n;++i){
        cin >> s[i];
    }
    cin >> m;
    for(int i = 1;i <= m;++i){
        cin >> a[i] >> b[i];
        //s[n + i] = s[a[i]] + s[b[i]];
    }
    for(int i = 1;i <= m;++i){
        //s[n+i]
        ll k = 0;//len = s[n+i].length()/2;

        cout<<k<<endl;
    }
    return 0;
}

*/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <set>
#include <stack>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
const int maxn = 100005;
typedef long long int ll;
void scan_d(int &ret)
{
    char c;
    ret = 0;
    while((c=getchar())<'0' || c>'9');
    while (c>='0'&&c<='9')ret=ret*10+(c-'0'),c=getchar();
}
string t[150];
int main()
{
    //cin.tie(0);
    //ios::sync_with_stdio(false);
    int h;
    int m,s;
    int t1,t2;
    cin>>h>>m>>s>>t1>>t2;

    int ok = 0;
    if(t1 < t2){
        //shun
        if(h < t1 || h >= t2){
            if(m < t1 * 5 || m >= t2 * 5){
                if(s < t1 * 5 || s > t2 * 5){
                    ok = 1;
                }
            }
        }

        //ni
        if(h >= t1 && h < t2)
        {
            if(m >= t1 * 5 && m < t2 * 5){
                if(s > t1*5 && s < t2 * 5){
                    ok = 1;
                }
            }
        }
    }
    else{// t2<t1
        int temp = t1;
        t1 = t2;
        t2 = temp;

        if(h < t1 || h >= t2){
            if(m < t1 * 5 || m >= t2 * 5){
                if( s < t1 * 5 || s > t2 * 5){
                    ok = 1;
                }
            }
        }

        //ni
        if(h >= t1 && h < t2)
        {
            if(m >= t1 * 5 && m < t2 * 5){
                if(s > t1*5 && s < t2 * 5){
                    ok = 1;
                }
            }
        }

    }


    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}