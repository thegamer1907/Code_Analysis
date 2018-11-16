#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <stack>
#include <algorithm>
#include <unordered_map>
#include <limits>
#include <utility>
#include <queue>
#include <iomanip>
#include <bitset>

#define loop(x,n) for(int x = 0; x < n; ++x)
#define println(x) cout << x <<"\n";
#define printv(x) for(int i=0;i<x.size();i++)cout << x[i] <<" ";
using namespace std;
int main(){
int n,b;
int max_v=0,cur_v=0,one_count=0;
cin>>n;
if(n==1)
{
    cin>>b;
    cout<< (b==0)?1:0;
    return 0;
}
for(int i=0;i<n;i++)
{
    cin>>b;
    if(b==0)
    {
    cur_v++;
    max_v=max(cur_v,max_v);

    }
    else{
        one_count++;
        cur_v=max( 0,cur_v-1);
    }

}
if (one_count==n)
{
    cout<<n-1;
    return 0 ;
}
cout<<one_count+max(max_v,cur_v);

}
