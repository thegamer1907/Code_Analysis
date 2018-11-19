         #include <bits/stdc++.h>

         #define fio             ios_base::sync_with_stdio(false),cin.tie(NULL)
         #define ll              long long int
         #define ld              long double
         #define f(a,b)          for(int i=a;i<b;i++)
         #define in(a,b)         (b.find(a) != string::npos)
         #define X               first
         #define Y               second
         #define fill(a,x)       memset(a,x,sizeof(a))
         #define pb              push_back
         #define pf              push_front
         #define mp              make_pair
         #define all(v)          v.begin(),v.end()
         #define el              "\n"
         const ll M = 1e9 + 7;
              
               
         using namespace std;
        int main(){
          fio;
          string p;cin>>p;
          ll q;
            cin>>q;
            char s[q][2];
          f(0,q)cin>>s[i][0]>>s[i][1];
            for(int i=0;i<q;i++){
                for(int j=0;j<q;j++){
                    if((s[i][0]==p[1] && s[j][1]==p[0] )|| (s[i][0]==p[1] && s[j][1]==p[0]) || (s[i][0]==p[0]) && s[i][1]==p[1]){
                        cout<<"YES"<<el;
                        return 0;
                    }
                }
            }
             cout<<"NO"<<el;
        return 0;
    } 