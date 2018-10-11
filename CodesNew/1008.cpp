#include <bits/stdc++.h>

using namespace std;

int n,m,cnt;
string s;
vector <string> p,e;
map <string,int> si;

int main()
{
   cin>> n >> m;
   
   for(int i=0;i<n;i++){
        cin>> s;
        p.push_back(s);
   }
   for(int i=0;i<m;i++){
        cin>> s;
        e.push_back(s);
   }
   if(n>m){
        cout<< "YES" << endl;
   }
   else if(n<m){
        cout<< "NO" << endl;
   }
   else{
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(p[i]==e[j]){
                    cnt++;
                    break;
                }
            }
        }
        
        if(cnt%2==1){
            n++;
        }
        if(n>m){
            cout<< "YES" << endl;
        }
        else{
            cout<< "NO" << endl;
        }
        
   }



    return 0;
}
