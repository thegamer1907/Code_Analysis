#include <bits/stdc++.h>
#define mp make_pair
#define MAX 100000
#define PI 3.14159265
#define EPS 1e-9
#define eq(x,y) (fabsl(x-y)<EPS)
#define sum(i,j) (acc[i]-(j? acc[j-1] : 0))

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
struct data {int x,y,v; data(){} data(int _x , int _y , int _v) {x=_x,y=_y,v=_v;} bool operator <(const data& cmp)const{ return v<cmp.v;}};

int n,memo[100][101];
string s,arr[100];
bool solve(int,int);

int main()
{
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==s)
            return puts("YES"),0;
    }
    for(int i=0;i<n;i++)
        if(arr[i][1]==s[0])
            for(int j=0;j<n;j++)
                if(arr[j][0]==s[1])
                    return puts("YES"),0;
    puts("NO");
}

