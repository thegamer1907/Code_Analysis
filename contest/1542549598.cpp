#include <bits/stdc++.h>
#define nmax 10005

using namespace std;

int N,a[nmax],ans,c[nmax],s[nmax],k,mat[1000][1000],g[nmax][5],w[5];
bool viz[nmax];

inline bool Valid(int l,int r){
    int i,j,x,y;
    for(i = 1; i <= k; ++i){
        if(mat[l][i] && mat[l][i] == mat[r][i]){
            return false;
        }
    }
    x = y = 0;
    for(i = 1; i <= k; ++i){
        if(mat[l][i] == 1){
            x=x*2+1;
        }
        else{
            x*=2;
        }
          if(mat[r][i] == 1){
            y=y*2+1;
        }
        else{
            y*=2;
        }
    }
    if(!viz[x] || !viz[y]){
        return false;
    }
    return true;
}

inline void Gen(int top){
    if(top == k+1){
        ++ans;
        for(int i = 1; i <= k; ++i)
            mat[ans][i] = s[i];
        return;
    }
    s[top] = 0;
    Gen(top+1);
    s[top]=1;
    Gen(top+1);
}

int main(){
    int i,x,nr,j,y,z,t;
    cin >> N >> k;
    for(i = 1; i <= N; ++i){
            nr=0;
        for(j = 1; j <= k; ++j){
            cin >> x;
            g[i][j]=x;
            if(x == 1){
                nr=nr*2+1;
            }else{
                nr*=2;
            }

        }
        viz[nr] = true;
        if(!nr){
            cout << "YES\n";
            return 0;
        }
    }

    Gen(1);
    for(i = 1; i < ans; ++i)
        for(j = i+1; j <= ans; ++j){
            if(Valid(i,j)){
                cout << "YES\n";
                return 0;
            }
    }
    cout << "NO\n";
    return 0;
}

	 				 		  		 				  	 			 			