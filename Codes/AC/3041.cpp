#include<bits/stdc++.h>
#define lli long long int
#define test()  int test;cin>>test;while(test--)
const lli MOD = 1000000007ll;
const int mxsz = 200005;
using namespace std;
int F[1000005];
int was[1000005];
void prefix_function (string Z) {
    int n = (int) Z.length();
    F[0]=0;
    for (int i=1; i<n; ++i) {
        int j = F[i-1];
        while (j > 0 && Z[i] != Z[j])
            j = F[j-1];
        if (Z[i] == Z[j])  ++j;
        F[i] = j;
        if(i!=n-1){
        	was[j] = 1;
		}
       // cout << F[i] << " ";
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    string st;
    cin >> st;
    prefix_function(st);
    /*for(int i=0;i<st.length()-1;i++){
    	if(F[i]==F[st.length()-1] && F[i]!=0){
    		for(int j=0;j<F[i];j++){
    			cout << st[j];
			}
			return 0;
		}
	}*/
	int k = F[st.length()-1];
	
		if(was[k]==1 && k>0){
			for(int j=0;j<k;j++){
    			cout << st[j];
			}
			return 0;
		}
		k = F[k-1];
		if(was[k]==1 && k>0){
			for(int j=0;j<k;j++){
    			cout << st[j];
			}
			return 0;
		}
	
	cout << "Just a legend";
    return 0;
}