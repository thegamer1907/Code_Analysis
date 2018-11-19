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

int main(){
//	#ifdef LOCAL
//	freopen("C:\\Users\\B208\\Desktop\\data.txt","r",stdin);
//	#endif // LOCAL
	ios::sync_with_stdio(0);
	string str,str2;
	cin>>str;
	int n;
    cin>>n;
    bool head=0,tail=0,ok = 0;
    for(int i=0;i<n;i++){
		cin>>str2;
		if(str2[0]==str[1]) tail = 1;
		if(str2[str2.size()-1]==str[0]) head = 1;
		if(str2.find(str)!=str2.npos){
			ok = 1;
			break;
		}
    }
	if((head&&tail)||ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
    return 0;
}
