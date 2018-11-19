#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define fi first
#define se second
#define pd(x) printf("%d",x)
#define ps(x) printf(x)
#define sd(x) scanf("%d",&x)
#define pll(x) printf("%lld",x)
#define sll(x) scanf("%lld",&x)
#define MOD 1000000007
using namespace std;

int main() {
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);
  // getline(cin, string_name);
  int i, j, q, r, t, u, v;

  int n, k;
  cin>>n>>k;

  int a[n][k];
  for(i=0; i<n; i++) {
    for(j=0; j<k; j++) {
      cin>>a[i][j];
    }
  }

  int temp;

  if (k==1) {
    temp=0;
    for(i=0; i<n; i++) {
      if (a[i][0]==0) {
        temp=1;
        break;
      }
    }
    if (temp) cout<<"YES";
    else cout<<"NO";
  }

  else if (k==2) {
    temp=0;
    for(i=0; i<n; i++) {
      temp=0;
      for(j=0; j<k; j++) {
        if (a[i][j]!=0) {
          temp=1;
          break;
        }
      }
      if (!temp) {
        break;
      }
    }

    if (!temp) cout<<"YES";
    else {
      r = 0;
      t = 0;
      for(i=0; i<n; i++) {
        if (a[i][0]==1 && a[i][1]==0) r++;
        if (a[i][0]==0 && a[i][1]==1) t++;
      }
      if (r>0 && t>0) cout<<"YES";
      else cout<<"NO";
    }
  }

  else if (k==3) {
    //cout<<"k==3"<<endl;
    temp=0;
    for(i=0; i<n; i++) {
      temp=0;
      for(j=0; j<k; j++) {
        if (a[i][j]!=0) {
          temp=1;
          break;
        }
      }
      if (!temp) {
        break;
      }
    }

    if (!temp) cout<<"YES";
    else {

      for(i=0; i<3; i++) {
        r = 0, t = 0;
        for(j=0; j<n; j++) {
          temp=0;
          for(u=0; u<k; u++) {
            if (!((u==i && a[j][u]==1) || (u!=i && a[j][u]==0))) {
              temp=1;
              break;
            }
          }
          if (!temp) {
            r++;
          }
          temp=0;
          for(u=0; u<k; u++) {
            if (u==i && a[j][u]==1) {
              temp=1;
              break;
            }
          }
          if (!temp) {
            t++;
          }
        }
        //cout<<"i="<<i<<" r="<<r<<" t="<<t<<endl;
        if (r>0 && t>0) {
          break;
        }
      }

      if (r>0 && t>0) cout<<"YES";
      else cout<<"NO";



    }
  }


  else if (k==4) {
    temp=0;
    for(i=0; i<n; i++) {
      temp=0;
      for(j=0; j<k; j++) {
        if (a[i][j]!=0) {
          temp=1;
          break;
        }
      }
      if (!temp) {
        break;
      }
    }

    if (!temp) cout<<"YES";
    else {

      for(i=0; i<4; i++) {
        r = 0, t = 0;
        for(j=0; j<n; j++) {
          temp=0;
          for(u=0; u<k; u++) {
            if (!((u==i && a[j][u]==1) || (u!=i && a[j][u]==0))) {
              temp=1;
              break;
            }
          }
          if (!temp) {
            r++;
          }
          temp=0;
          for(u=0; u<k; u++) {
            if (u==i && a[j][u]==1) {
              temp=1;
              break;
            }
          }
          if (!temp) {
            t++;
          }
        }
        if (r>0 && t>0) {
          break;
        }
      }

      if (r>0 && t>0) cout<<"YES";
      else {
        //cout<<"search for 2"<<endl;
        // twos and their complements
        string g[6] = {"1100","1010","1001","0110", "0101", "0011"};
        int temp1=0;
        for(i=0; i<6; i++) {
          temp=0;
          for(j=0; j<n; j++) {
            temp=0;
            for(u=0; u<k; u++) {
              if (a[j][u]!=((int)g[i][u]-48)) {
                temp=1;
                break;
              }
            }
            if (!temp) {
              break;
            }
          }
          if (!temp) {// found template
            temp=0;
            for(j=0; j<n; j++) {
              temp=0;
              for(u=0; u<k; u++) {
                if ((a[j][u]==1 && ((int)g[i][u]-48)==1)) {
                  temp=1;
                  break;
                }
              }
              if (!temp) {
                break;
              }
            }
            if (!temp) { // found opposite
              temp1=1;
              break;
            }
          }
          if (temp1) break;
        }

        if (temp1) cout<<"YES";
        else cout<<"NO";



      }





    }

  }

  return 0;
}
