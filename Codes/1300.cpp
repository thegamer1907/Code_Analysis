#include <bits/stdc++.h>
#include <vector>
#define pb push_back
#define mp make_pair
#define ii pair<int,int>
using namespace std ;
int main()
{
//    freopen("in.txt","r",stdin);
    int n , m ;
    scanf("%d%d",&n,&m);
    map<string,int> a ,b;
    set<string> uni;
    vector<string>A,B,AB;
    for(int i = 0 ;i < n ;i++){
        string s;
        cin>>s;
        a[s] = 1;
        uni.insert(s);
    }
    for(int i = 0 ;i < m ;i++){
        string s;
        cin>>s;
        b[s] = 1;
        uni.insert(s);
    }
    set<string>::iterator it = uni.begin();
    for(;it != uni.end();it++){
        if(a[*it]){
            if(b[*it])AB.pb(*it);
            else A.pb(*it);
        }else B.pb(*it);
    }
    int turn = 1;
    while(true){
        if(turn&1){
            if(AB.size())AB.pop_back();
            else if(A.size())A.pop_back();
            else {
                cout<<"NO";
                break;
            }
        }else{
            if(AB.size())AB.pop_back();
            else if(B.size())B.pop_back();
            else{
                cout<<"YES";
                break;
            }
        }
        turn++;
    }
    return 0;
}
