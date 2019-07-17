#include<bits/stdc++.h>
    using namespace std;
     
    #ifdef LOCAL
      #define eprintf(...) fprintf(stderr, __VA_ARGS__)
    #else
      #define eprintf(...) 42
    #endif
     
    // #define lli long long int
    #define mp make_pair
    #define pb push_back
    #define sqr(a) ((a) * (a))
    #define sz(a) int(a.size())
    #define all(a) a.begin(), a.end()
    #define forn(i, n) for(int i = 0; i < int(n); i++) 
    #define fore(i, l, r) for(int i = int(l); i < int(r); i++)
int n, m, k;
int fallback;
 
 
set<int> items; 
 
int main(){
    int temp;
 
    cin>>n>>m>>k;
 
    for(int i=0;i<m;i++){
        cin>>temp;
 
        items.insert(temp);
    }
 
 
    fallback=0;
    temp=0;
 
    int current;
 
    while(items.size()){
        fallback=m-items.size();
 
        current=*(items.begin());
        current-=fallback;
 
        for(int i=(current/k)*k+1;i<=((current/k)+1)*k;i++)
            if(items.find(i+fallback)!=items.end())
                items.erase(i+fallback);
 
        temp++;
    }
 
    cout<<temp<<"\n";
 
    return 0;
}