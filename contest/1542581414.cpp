#include <bits/stdc++.h>
using namespace std;


int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    bool valid = 0;
    for(int i = 0, st = (t1*3600)%43200; i < 43200; i++, st = (st+1)%43200){
        if(st == (h*3600+m*60+s)%43200 || st == m*720+s*12 || st == s*720)
            break;
        if(st == (t2*3600)%43200)
            valid = 1;
    }

    for(int i = 0, st = (t2*3600)%43200; i < 43200; i++, st = (st+1)%43200){
        if(st == (h*3600+m*60+s)%43200 || st == m*720+s*12 || st == s*720)
            break;
        if(st == (t1*3600)%43200)
            valid = 1;
    }


    puts(valid?"YES":"NO");
}
