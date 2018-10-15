#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;
string s, ss;
int a[N];

bool can(int mid){
    string st = s;
    for(int i=0; i<mid; i++){
        st[a[i]-1] = '#';
    }
    //cout <<mid << ' '<<  st << endl;
    int cnt = 0;
    for(int i=0, j=0; i<ss.size() && j<st.size(); i++, j++){
        if(ss[i] == st[j])cnt++;
        else if(st[j]=='#'){ i--; continue;}
        else{
            //cnt = 0;
            i--;
        }
        if(cnt == ss.size()){return 1;}
    }
    return 0;
}
int main(){
    cin >> s >> ss;
    int n = s.size();
    for(int i=0; i<n; i++){
        scanf("%d", a + i);
    }
    int st = 0, en = n+5;
    while(en > st){
        int mid = (st + en + 1) >> 1;
        if(can(mid))
            st = mid;
        else
            en = mid - 1;
    }
    printf("%d", en);
	return 0;
}