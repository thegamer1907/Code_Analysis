#include<bits/stdc++.h>
#define lli long long int
#define test()  int test;cin>>test;while(test--)
const lli MOD = 1000000007ll;
using namespace std;
vector<int> adj[100005];

int main()
{
    std::ios_base::sync_with_stdio(false);
    int n,k;
    cin >> n >> k;
    int ar[n][k];
    int sum[150] = {};
    
    for(int i=0;i<n;i++){
    	int sum1 = 0;
    	for(int j=0;j<k;j++){
    		cin >> ar[i][j];
    		if(ar[i][j]==1){
    			sum1 += pow(2,j+1);
			}
    	}
    	sum[sum1] = 1;
	}
	for(int i=0;i<n;i++){
		int bin = 0;
		for(int j=0;j<k;j++){
			bin += ar[i][j]*pow(2,j);
		}
		if(bin==0){
			cout << "YES";
			return 0;
		}
		if(bin==1){
			if(sum[4]==1){
				cout << "YES";
				return 0;
			}
			if(sum[8]==1){
				cout << "YES";
				return 0;
			}
			if(sum[16]==1){
				cout << "YES";
				return 0;
			}
			if(sum[12]==1){
				cout << "YES";
				return 0;
			}
			if(sum[20]==1){
				cout << "YES";
				return 0;
			}
			if(sum[24]==1){
				cout << "YES";
				return 0;
			}
			if(sum[28]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==2){
			if(sum[2]==1){
				cout << "YES";
				return 0;
			}
			if(sum[8]==1){
				cout << "YES";
				return 0;
			}
			if(sum[16]==1){
				cout << "YES";
				return 0;
			}
			if(sum[10]==1){
				cout << "YES";
				return 0;
			}
			if(sum[18]==1){
				cout << "YES";
				return 0;
			}
			if(sum[24]==1){
				cout << "YES";
				return 0;
			}
			if(sum[26]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==3){
			if(sum[8]==1){
				cout << "YES";
				return 0;
			}
			if(sum[16]==1){
				cout << "YES";
				return 0;
			}
			if(sum[24]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==4){
			if(sum[2]==1){
				cout << "YES";
				return 0;
			}
			if(sum[4]==1){
				cout << "YES";
				return 0;
			}
			if(sum[16]==1){
				cout << "YES";
				return 0;
			}
			if(sum[6]==1){
				cout << "YES";
				return 0;
			}
			if(sum[20]==1){
				cout << "YES";
				return 0;
			}
			if(sum[18]==1){
				cout << "YES";
				return 0;
			}
			if(sum[22]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==5){
			if(sum[4]==1){
				cout << "YES";
				return 0;
			}
			if(sum[16]==1){
				cout << "YES";
				return 0;
			}
			if(sum[20]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==6){
			if(sum[2]==1){
				cout << "YES";
				return 0;
			}
			if(sum[16]==1){
				cout << "YES";
				return 0;
			}
			if(sum[18]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==7){
			if(sum[16]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==8){
			if(sum[2]==1){
				cout << "YES";
				return 0;
			}
			if(sum[4]==1){
				cout << "YES";
				return 0;
			}
			if(sum[8]==1){
				cout << "YES";
				return 0;
			}
			if(sum[6]==1){
				cout << "YES";
				return 0;
			}
			if(sum[12]==1){
				cout << "YES";
				return 0;
			}
			if(sum[10]==1){
				cout << "YES";
				return 0;
			}
			if(sum[14]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==9){
			if(sum[4]==1){
				cout << "YES";
				return 0;
			}
			if(sum[8]==1){
				cout << "YES";
				return 0;
			}
			if(sum[12]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==10){
			if(sum[2]==1){
				cout << "YES";
				return 0;
			}
			if(sum[8]==1){
				cout << "YES";
				return 0;
			}
			if(sum[10]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==11){
			if(sum[8]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==12){
			if(sum[2]==1){
				cout << "YES";
				return 0;
			}
			if(sum[4]==1){
				cout << "YES";
				return 0;
			}
			if(sum[6]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==13){
			if(sum[4]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==14){
			if(sum[2]==1){
				cout << "YES";
				return 0;
			}
		}
		if(bin==15){
			if(sum[0]==1){
				cout << "YES";
				return 0;
			}
		}
	}
	cout << "NO";
    return 0;
}
