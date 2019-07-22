#include <bits/stdc++.h>

using namespace std;

#define ll long long

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


int main() {
    fast();
    ll x , flag = 0 , y = 1 , ans , apos ; 
    string s[3]; 
    /* cin >> x;
    if(x%4 == 0) cout << 1 << " A";
    else if(x%4 == 1) cout << 0 << " A";
    else if(x%4 == 3) cout << 2 << " A";
    else cout << 1 << " B";*/

    /* cin >> s[0] >> s[1] >> s[2];
    sort(s,s+3);
    if(s[0]==s[2] || (s[0][1] == s[1][1] && s[0][1]== s[2][1] && (int)(s[1][0] - s[0][0]) == 1 && (int)(s[2][0] - s[0][0]) == 2))
    cout << 0;
    else if(s[0] == s[1] || s[1] == s[2] || ((int)(s[1][0] - s[0][0] < 3) && s[1][1] == s[0][1] ) || ((int)(s[2][0] - s[0][0] < 3) && s[2][1] == s[0][1] ) || ((int)(s[2][0] - s[1][0] < 3) && s[2][1] == s[1][1] )){
        cout << 1;
    }
    else cout << 2;*/
    
    ll dif = 0 , str , cnt = 0 , n, m , k;
    cin >> n >> m >> k;
    vector <ll>  a(m);
    for(int i = 0 ; i < m  ; i++){
        cin >> a[i];
        a[i]--;
    }
     while(dif != m ){
        int i = 1;
        while( i+dif < m && (a[dif]-dif)/ k == (a[dif+i] - dif)/k ) i++;
        dif += i;
        cnt++;
        }
    cout << cnt;



 /*  ll n , cnt = 0 , d = 0;
   cin >> n;
   ll mas[n];
   for(int i = 0 ; i < n ; i ++ ){
       cin >> mas[i];
   }
   sort(mas, mas+n);
   if(0 == mas[1]){cout << "cslnb";
       return 0;}
   int f= mas[0] , t = 0, o =1 ;
   for(int i = 1 ; i < n ; i++){
       if(f!=mas[i]){f= mas[i];
       o =1;}
       else o++;
       if(o == 2) {t++;
       if(i > 1 && mas[i-2]==mas[i]-1){{cout << "cslnb";
       return 0;}}}
       if(o == 3 || t == 2) {cout << "cslnb";
       return 0;}

   }

   for(int i = 0 ; i < n ; i++){
        int flag = 0;
        if(mas[i] == d){
            d++;
            continue;
        }
        while(mas[i] > d){
            cnt++;
            mas[i]--;
            flag =1;
        }
        if(flag == 1)
        d++;
   }
   if(cnt%2 == 1) cout << "sjfnb";
   else cout << "cslnb";
    */

    
}