#include <bits/stdc++.h>
#define f first
#define s second
#define mp make_pair
#define pb push_back

using namespace std;
const int N = 100001;
int lst[26], st[26];
int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<string> vec(n);
    bool found = false;
    for(int i = 0;i<n;i++) {
        cin>>vec[i];
        if(vec[i] == s)
            found = true;
        lst[vec[i][1]-'a']++;
        st[vec[i][0]-'a']++;
    }
    if(found || (lst[s[0]-'a'] && st[s[1]-'a']) )
        cout<<"YES";
    else
        cout<<"NO";
//    for(int i = 0;i<n;i++) {
//        string curr = vec[i];
//        for(int j = 0;j<n;j++) {
//            curr += vec[j];
//            if( (curr.substr(0,2) == s) || (curr.substr(1,2) == s) || (curr.substr(2,2) == s) ) {
//                cout<<"YES";
//                return 0;
//            }
//        }
//    }
//    cout<<"NO";
    return 0;
}
