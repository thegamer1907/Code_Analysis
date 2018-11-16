#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

// USE : unordered_map<int, int, custom_hash> m;
// 	   : unordered_set<int, custom_hash> s;

/* Iterative Function to calculate (x^y)%p in O(log y) */
long long power(long long x, unsigned long long y, long long p) 
{ 
    long long res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 


#define endl "\n"
#define pb push_back
#define INF ll_MAX/10
#define F first
#define S second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long ll;
typedef pair<ll,ll> PII;

int dp[105];

int p[105];

int main(){
    
    ios;
    string s;
    cin >> s;
    int n = s.size();

    dp[n-1] = stoi(s.substr(n-1,1)) % 8 == 0 ? 1 : 0;

    for ( int i = n-1 ; i >= 0 ; i-- ){
    	//cout << " i : " << i << endl;
    	if ( s[i] == '0' ){	
    		//cout << "gone here" << endl; 
    		dp[i] = 1; p[i] = -1; continue;
    	 }

    	int cur_max = 0;
    	// check if there exists a 3 digit no. divisible by 8 after it
    	for ( int j = i+1 ; j < n ; j++ ){
    		//cout << "nhere " << j << " " << dp[j] << endl;
    		if ( dp[j] >= 3  ){
    			//cout << "here" << endl;
    			dp[i] = dp[j]+1;
    			p[i] = j;
    			break;
    		}
    	}

    	if ( dp[i] > 0 )	continue;

    	// check if current no. can make a 3 digit divisible by 8
    	for ( int j = i+1 ; j < n ; j++ )
    		for ( int k = j+1 ; k < n ; k++ ){

    			int c_num = stoi(s.substr(i,1)+s.substr(j,1)+s.substr(k,1));

    			if ( c_num % 8 == 0 ){
    				dp[i] = 3;
    				p[i] = j;
    				p[j] = k;
    				p[k] = -1;
    			}

    		}

    	if ( dp[i] == 3 )	continue;

    	// check if current no. can make a 2 digit divisible by 8
    	for ( int j = i+1 ; j < n ; j++ ){

    		int c_num = stoi( s.substr(i, 1)+s.substr(j,1));
    		if ( c_num % 8 == 0 ){
    			dp[i] = 2;
    			p[i] = j;
    			p[j] = -1;
    		}
    	}

    	if ( dp[i] == 2 ) 	continue;

    	if ( stoi(s.substr(i, 1)) % 8 == 0 ){
    		dp[i] = 1;
    		p[i] = -1;
    	}
    	//cout << endl;
     }

    //for ( int i = 0 ; i < n ; i++ )	cout << dp[i] << " ";cout << endl;
    //for ( int i = 0 ; i < n ; i++ ) cout << p[i] << " ";cout << endl;

    int k = 0;
	int c_max = 0;

	for ( int i = 0 ; i < n ; i++ ){
		if ( dp[i] > c_max ){
			k = i;
			c_max = dp[i];
		}
	}

	if ( c_max == 0 ){	cout << "NO" << endl; 	return 0;}

	cout << "YES" << endl;
	//cout << k << endl;
	do {
		cout << s[k];
		k = p[k];
	}while(k != 0 && k!=-1);
	//cout << endl;
    
    return 0;
}


