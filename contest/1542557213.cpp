#include<bits/stdc++.h>
using namespace std;

const int MX = 16;

int N, M;
vector<string> S;

struct Info {
    string L, R;
    vector<int> cnt[MX + 1];
};
vector<Info> info;

int main() {
    scanf("%d", &N);

    S.resize(N);

    for(int i = 0; i < N; i++) {
        cin >> S[i];
    }

    scanf("%d", &M);

    info.resize(N + M);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < min((int)S[i].size(), MX); j++) info[i].L.push_back(S[i][j]);
        for(int j = S[i].size() - 1; j >= max((int)S[i].size() - MX, 0); j--) info[i].R.push_back(S[i][j]);
        reverse(info[i].R.begin(), info[i].R.end());

        for(int j = 1; j <= MX; j++) {
            info[i].cnt[j] = vector<int>((1<<j), 0);
            if(S[i].size() < j) continue;
            int mask = 0;
            for(int k = 0; k < j; k++) {
                if(S[i][k] == '1') mask += (1<<k);
            }
            info[i].cnt[j][mask] = 1;
            for(int k = 1; k <= (int)S[i].size() - j; k++) {
                if(S[i][k - 1] == '1') mask--;
                mask >>= 1;
                if(S[i][k + j - 1] == '1') mask += (1<<(j - 1));
                info[i].cnt[j][mask] = 1;
            }
        }
/*
        cout << info[i].L << ' ' << info[i].R << endl;

        for(int j = 1; j <= 3; j++) {
            for(int k = 0; k < (1<<j); k++) {
                cout << info[i].cnt[j][k] << ' ';
            }
            cout << endl;
        }
        //*/
    }

    for(int i = 0; i < M; i++) {
        int a, b; scanf("%d %d", &a, &b);
        a--; b--;

        string L, R;
        vector<int> cnt[MX + 1];

        int pos = 0;
        while(pos < info[a].L.size() && L.size() < MX) L.push_back(info[a].L[pos]), pos++;
        pos = 0;
        while(pos < info[b].L.size() && L.size() < MX) L.push_back(info[b].L[pos]), pos++;
        pos = info[b].R.size() - 1;
        while(pos >= 0 && R.size() < MX) R.push_back(info[b].R[pos]), pos--;
        pos = info[a].R.size() - 1;
        while(pos >= 0 && R.size() < MX) R.push_back(info[a].R[pos]), pos--;
        reverse(R.begin(), R.end());

        string T = info[a].R + info[b].L;

        for(int j = 1; j <= MX; j++) {
            cnt[j] = vector<int>((1<<j), 0);
            for(int k = 0; k < (1<<j); k++) {
                cnt[j][k] = info[a].cnt[j][k] | info[b].cnt[j][k];
            }
        }

        for(int j = 2; j <= MX; j++) {
            if(T.size() < j) break;
            int mask = 0;
            for(int k = 0; k < j; k++) {
                if(T[k] == '1') mask += (1<<k);
            }
            cnt[j][mask] = 1;
            for(int k = 1; k <= (int)T.size() - j; k++) {
                if(T[k - 1] == '1') mask--;
                mask >>= 1;
                if(T[k + j - 1] == '1') mask += (1<<(j - 1));
                cnt[j][mask] = 1;
            }
        }
/*
        cout << L << ' ' << R << endl;

        for(int j = 1; j <= 3; j++) {
            for(int k = 0; k < (1<<j); k++) {
                cout << cnt[j][k] << ' ';
            }
            cout << endl;
        }
//*/
        int ans = 0;
        for(int j = MX; j >= 1; j--) {
            bool ok = true;
            for(int k = 0; k < (1<<j); k++) {
                if(!cnt[j][k]) {
                    ok = false;
                    break;
                }
            }
            if(ok) {
                ans = j;
                break;
            }
        }
        printf("%d\n", ans);

        info[N + i].L = L;
        info[N + i].R = R;
        for(int j = 0; j <= MX; j++) info[N + i].cnt[j] = cnt[j];
    }
}
