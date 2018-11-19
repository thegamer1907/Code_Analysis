//coder:OX_louis
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <stack>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int INF = 0x3f3f3f3f;

int h,m,s,t1,t2;
double a[10];


int main(){
//	#ifdef LOCAL
//	freopen("C:\\Users\\B208\\Desktop\\data.txt","r",stdin);
//	#endif // LOCAL
	ios::sync_with_stdio(0);
	cin>>h>>m>>s>>t1>>t2;
    h *= 5;
    t1*= 5;
    t2*= 5;
    h %= 60;
    t1 %= 60;
    t2 %= 60;
	a[0] = h + m/12.0;
	a[1] = m + s/60.0;
	a[2] = s;
	sort(a,a+3);
//	for(int i=0;i<3;i++){
//		cout<<a[i]<<' ';
//	}
	int l=lower_bound(a,a+3,t1)-a,r =lower_bound(a,a+3,t2)-a;
//	cout<<l<<' '<<r<<endl;
	if(a[l]==t1&&a[r]==t2){
		cout<<"YES"<<endl; return 0;
	}
	if(l==r||(min(l,r)==0&&max(l,r)==3)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
    return 0;
}
