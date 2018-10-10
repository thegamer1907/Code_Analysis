#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define MX 1000100



int failure[MX];

void build_failure(string s, int len) {
    for(int i=2; i<=len; i++) {
        int j = failure[i-1];
        while(true) {
            if(s[i-1] == s[j]) {
                failure[i]= j+1;
                break;
            } else if(j==0) {
                failure[i]=0;
                break;
            }
            j = failure[j];
        }
    }
}

bool is_inside_substr(string s, int len, int len_sub) {
    int i =1, j=0;
    while(true) {
        if(i==len-1)
            return false;
        if(s[i] == s[j]) {
            i++, j++;
            if(j == len_sub) {
                return true;
            }
        } else if(j==0)
            i++;
        else
            j = failure[j];
    }
}


int main()
{
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    int len;

    cin>>s;
    len = s.size();

    build_failure(s, len);

    int lim = failure[len];
//    cout<<"failure_len "<<lim<<endl;
    while(lim) {
        if(is_inside_substr(s, len, lim)) {
            cout<<s.substr(0, lim)<<endl;
            return 0;
        }
        lim = failure[lim];
    }

    cout<<"Just a legend"<<endl;


    return 0;
}


