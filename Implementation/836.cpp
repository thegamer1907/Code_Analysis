#include <bits/stdc++.h>

#define precise_out(num) cout<<setprecision(9)<<fixed<<num<<endl
#define out(val) cout<<val<< endl
#define sf scanf
#define sf1(val) scanf("%d",&val)
#define sf2(val1,val2) scanf("%d %d",&val1, &val2)
#define pf printf
#define pf1(val) printf("%d\n",val)
#define pb push_back
#define loop(i,n) for(int i;i<n;i++)
#define ll long long
#define ld long double
#define pii pair<int,int>
#define ff first
#define ss second
#define MX 100005
#define inf 1e9
#define pi  2*acos(0.0)

using namespace std;

//*************************************  Bitmask Opereations  **********************************//
int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N=N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
//********************************************************************************************//

//*****************************************************************************************//

int main()
{

    // clock_t start, end;
    // double cpu_time_used;
    // start = clock();

    int n,t;
    char str[55];
    sf2(n,t);
    sf("%s", str);
    for(int j=0;j<t;j++)
        for(int i=0;i<n;i++){
            if(str[i]=='B'&& str[i+1]=='G'){
                swap(str[i], str[i+1]);
                i++;
            }
        }
    pf("%s\n",str);

    // end = clock();
    // cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    // pf("CPU Time used =  %lf ms\n", cpu_time_used);

    return 0;
}
