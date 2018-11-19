    #include <bits/stdc++.h>
     
    using namespace std;
     
    const int N = 2000;
   
    int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
    // 2
        int h, m, s;
        cin >> h >> m >> s;
        int t1, t2;
        cin >> t1 >> t2; 
        t1 %= 12;
        t2 %= 12;
        h %= 12;
        h *= 5;
        ++h;
        t1 *= 5;
        t2 *= 5;
        if (s % 5 == 0) ++s;
        if (m % 5 == 0) ++m;
        if (t1 > t2) swap(t1, t2);
        int cnt = (t1 < h && h < t2);
        cnt += (t1 < m && m < t2);
        cnt += (t1 < s && s < t2);
        if (cnt == 0 || cnt == 3) cout << "YES";
        else cout << "NO";

    //  1
        return 0;
    }