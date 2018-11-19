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
const int maxn = 100050;
typedef long long int ll;
void scan_d(int &ret)
{
    char c;
    ret = 0;
    while((c=getchar())<'0' || c>'9');
    while (c>='0'&&c<='9')ret=ret*10+(c-'0'),c=getchar();
}
int problem[maxn][5];
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int ok = 0;
    int n,k;
    cin>>n>>k;
    //int psum[5]={0},team[5]={0};
    set<int> teamcanchoose[5];
    for(int i=0;i<n;++i){
        int both = 1;
        for(int j=0;j<k;++j){
            cin >> problem[i][j];
            if(problem[i][j])both=0;
            else{
                teamcanchoose[j].insert(i);
            }
        }
        if(both){
            ok=1;
        }
    }
    if(ok == 0){
        if(k == 1){
            if(teamcanchoose[0].size() > 0){ok=1;}
        }
        if(k == 2){
            if(teamcanchoose[0].size() > 0 && teamcanchoose[1].size() > 0){
                ok = 1;
            }
        }
        if(k == 3) {
            if(teamcanchoose[0].size() == 0 || teamcanchoose[1].size() == 0 || teamcanchoose[2].size() == 0){
                cout<<"NO"<<endl;
                return 0;
            }
            set<int>::iterator it;
            for (it = teamcanchoose[0].begin(); it != teamcanchoose[0].end(); ++it) {
                if (teamcanchoose[1].find(*it) != teamcanchoose[1].end()){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            for (it = teamcanchoose[0].begin(); it != teamcanchoose[0].end(); ++it) {
                if (teamcanchoose[2].find(*it) != teamcanchoose[2].end()){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
            for (it = teamcanchoose[1].begin(); it != teamcanchoose[1].end(); ++it) {
                if (teamcanchoose[2].find(*it) != teamcanchoose[2].end()){
                    cout<<"YES"<<endl;
                    return 0;
                }
            }
        }
        if(k == 4){
            if(teamcanchoose[0].size() == 0 || teamcanchoose[1].size() == 0 || teamcanchoose[2].size() == 0 || teamcanchoose[3].size() == 0){
                cout<<"NO"<<endl;
                return 0;
            }
            set<int>::iterator it,oth;
            int towthreecom = 0,onethreecom = 0;
            for(oth = teamcanchoose[2].begin();oth != teamcanchoose[2].end();++oth){
                if(teamcanchoose[3].find(*oth) != teamcanchoose[3].end()){
                    towthreecom = 1;
                    break;
                }
            }
            for(oth = teamcanchoose[1].begin();oth != teamcanchoose[1].end();++oth){
                if(teamcanchoose[3].find(*oth) != teamcanchoose[3].end()){
                    onethreecom = 1;
                    break;
                }
            }
            for (it = teamcanchoose[0].begin(); it != teamcanchoose[0].end(); ++it) {
                if (teamcanchoose[1].find(*it) != teamcanchoose[1].end()){
                    //2 3
                    if(towthreecom){
                        cout<<"YES"<<endl;
                        return 0;
                    }

                    if (teamcanchoose[2].find(*it) != teamcanchoose[2].end()){
                        cout<<"YES"<<endl;
                        return 0;
                    }
                    if (teamcanchoose[3].find(*it) != teamcanchoose[3].end()){
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }

                if (teamcanchoose[2].find(*it) != teamcanchoose[2].end()){
                    //1 3
                    if(onethreecom){
                        cout<<"YES"<<endl;
                        return 0;
                    }
                    if (teamcanchoose[3].find(*it) != teamcanchoose[3].end()){
                        cout<<"YES"<<endl;
                        return 0;
                    }
                }
            }
            if(ok == 0){
                int zerothreecom = 0;
                for(oth = teamcanchoose[0].begin();oth != teamcanchoose[0].end();++oth){
                    if(teamcanchoose[3].find(*oth) != teamcanchoose[3].end()){
                        zerothreecom = 1;
                        break;
                    }
                }
                for (it = teamcanchoose[1].begin(); it != teamcanchoose[1].end(); ++it) {
                    if (teamcanchoose[2].find(*it) != teamcanchoose[2].end()){
                        // 0 3
                        if(zerothreecom){
                            cout<<"YES"<<endl;
                            return 0;
                        }
                        if (teamcanchoose[3].find(*it) != teamcanchoose[3].end()){
                            cout<<"YES"<<endl;
                            return 0;
                        }
                    }
                }

            }
        }
    }

    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}