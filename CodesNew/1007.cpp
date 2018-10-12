#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    map<string, int> mp;
    string s1[n], s2[m];
    for(int i=0; i<n; i++){
        cin >> s1[i];
        mp[s1[i]]++;
    }
    for(int i=0; i<m; i++){
        cin >> s2[i];
        mp[s2[i]]++;
    }
    int cnt1 = 0, cnt2 = 0;
    int mutual = 0;
    for(int i=0; i<n; i++){
        if(mp[s1[i]] == 1) cnt1++;
        else mutual++;
    }
    for(int i=0; i<m; i++){
        if(mp[s2[i]] == 1) cnt2++;
        else mutual++;
    }
    mutual = mutual / 2;
    if(mutual % 2 == 0){
        cnt1 += mutual/2;
        cnt2 += mutual/2;
    }
    else {
        cnt1 += mutual/2 + 1;
        cnt2 += mutual/2;
    }
    if(cnt1 > cnt2) printf("YES");
    else printf("NO");
}
