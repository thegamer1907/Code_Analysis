#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> d;
vector <pair<int, string>> a;
string buf;
string cur;
string nw;
vector <int> z;
int len;
char kek[10];

void gen(int l){
    if (l == len){
        for (int i = 0; i < len; i++){
            nw[z[i]] = kek[i];
        }
        if (d[nw] >= 1){
            cout << "YES";
            exit(0);
        }
    }
    else{
        for (int i = 0; i < 2; i++){
            kek[l] = char(i + '0');
            gen(l + 1);
        }
    }
}

int main()
{
    #ifdef HOME
        freopen("input.txt", "rt", stdin);
    #endif // HOME
    int n, k;
    scanf("%d%d", &n, &k);
    buf.resize(k);
    bool ans = false;
    for (int i = 0; i < n; i++){
        int kn = 0;
        for (int j = 0; j < k; j++){
            int x;
            scanf("%d", &x);
            buf[j] = char('0' + x);
            if (x == 1)
                kn++;
        }
        if (kn == 0){
            ans = true;
        }
        a.push_back({kn, buf});
        d[buf]++;
    }
    if (ans){
        cout << "YES";
        return 0;
    }
    sort(a.begin(), a.end());
    z.resize(k + 10);
    int l = 0;
    for (int i = 0; i < n; i++){
        l = 0;
        cur = a[i].second;
        nw = cur;
        for (int j = 0; j < cur.size(); j++){
            if (cur[j] == '1'){
                nw[j] = '0';
            }
        }
        for (int j = 0; j < cur.size(); j++){
            if (cur[j] == '0'){
                z[l++] = j;
            }
        }
        len = l;
        gen(0);
    }
    cout << "NO";
    return 0;
}
