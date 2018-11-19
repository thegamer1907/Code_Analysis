//////////////////////////////////////
//           Author : Hasan         //
//              CSE14,BUET            //
//////////////////////////////////////
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;



#define ll long long
#define N 100005
#define M 1000020
#define pb push_back
#define mp make_pair
#define rep(i,n,m) for(int i = n; i < m; i++)
#define reps(i,n,m) for(int i = n;i >= m; i--)
#define sc scanf
#define pc printf

int n,k,dp[17];



int main()
{

    sc("%d%d",&n,&k);

    rep(i,0,n){
        int u = 0,mask = 0;
        rep(j,0,k){
            sc("%d",&u);
            mask |= (u<<j);
        }
        //cout << mask << endl;
        dp[mask]++;
    }

    if(dp[0] > 0){
        pc("YES");
    }
    else{
        rep(i,1,65536){
            int cnt = 0,a = 0,b = 0,c = 0,d = 0;

            rep(j,0,16){
                if(((1<<j)&i) != 0 && dp[j] > 0){
                    cnt++;
                    rep(l,0,4){
                        if(((1<<l)&j) != 0){
                            if(l == 0) a++;
                            else if(l == 1) b++;
                            else if(l == 2) c++;
                            else if(l == 3) d++;
                        }
                    }

                }


            }
            if(a*2 <= cnt && b*2 <= cnt && c*2 <= cnt && d*2 <= cnt && cnt > 0){
                //cout << i << endl;
                pc("YES");
                return 0;
            }
        }

        pc("NO");

    }




    return 0;
}


