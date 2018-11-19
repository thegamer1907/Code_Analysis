#include <bits/stdc++.h>

using namespace std;

#define F first
#define S second
#define FILE "conquest"

typedef long long ll;

int n, k;
vector < string > v;
set < string > st;

int main()
{
    ios_base::sync_with_stdio(0);
#ifdef LOCAL
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#else
    //freopen(FILE".in", "r", stdin);
    //freopen(FILE".out", "w", stdout);
#endif
    cin >> n >> k;
    for (int i = 0 ; i < n ; i++)
    {
        string cur = "";
        char x;
        for (int j = 0 ; j < k ; j++)
        {
            cin >> x;
            cur += x;
        }
        v.push_back(cur);
        st.insert(cur);
    }
    bool f = st.find("0000") != st.end();
    for (int i = 0 ; i < n ; i++){
        string cur = v[i];
        for (int j = 0 ; j < (1 << k) ; j++){
            string ss = "";
            for (int q = 0 ; q < k ; q++){
                if (j & (1 << q))
                    ss += '1';
                else
                    ss += '0';
            }
            reverse(ss.begin() , ss.end());
            int f1 = 0;
            for (int q = 0 ; q < k ; q++){
                if (ss[q] == '1' && cur[q] == '1'){
                    f1 = 1;
                }
            }
            if (!f1){
                f |= st.find(ss) != st.end();
            }
        }
    }
    if (f)
        cout << "YEs";
    else
        cout << "no";
    return 0;
}
