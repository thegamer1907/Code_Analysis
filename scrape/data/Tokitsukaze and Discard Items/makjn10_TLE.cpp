#include <bits/stdc++.h>
//#include <boost/multiprecision/cpp_int.hpp> 
//using namespace boost::multiprecision;
using namespace std;
 
#define itern(n) for(int i = 0 ; i < n ; i++)
#define itern2(n) for(int j = 0 ; j < n ; j++)
#define itern3(n) for(int k = 0 ; k < n ; k++)
#define ritern(n) for(int i = n ; i >= 0 ; i--)
#define ritern2(n) for(int j = n ; j >= 0 ; j--)
#define ritern3(n) for(int k = n ; k >= 0 ; k--)
#define ll long long
#define ull unsigned long long
#define str string
#define pq priority_queue
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define len length()
#define yes "YES"
#define no "NO"
#define sp " "
#define nl cout << endl
#define null NULL
#define pii pair<int , int> 
#define pll pair<ll , ll>
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vii vector<vi>
#define vllll vector<vll>
#define vpii vector<pii>
#define vpll vector<pll> 
#define um unordered_map 
#define umii um<int , int>
#define umsi um<string , int>
#define mii map<int , int>
#define msi map<string , int>
#define mid(s , e) (s + (e - s) / 2)
#define sqr(x) x * x
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define PI acos(1)
#define inf (int)1e9
#define modu 1000000007
#define mod % (modu)
 
#define mem0(dp) memset(dp , 0 , sizeof(dp))
#define memneg(dp) memset(dp , -1 , sizeof(dp))
//functions
int gcd(int a, int b) {return b == 0 ? a : gcd(b, a % b);}
 
//----------------------------------------tmp-end------------------------------------------//
/* 
int bs(int arr[] , int s , int e , int ele){
    int st = s , en = e;
    while(st <= en){
        int mid = st + ((en - st) / 2);
        if(arr[mid] == ele) return mid;
        else if(arr[mid] > ele){
            en = mid - 1;
        }
        else{
            st = mid + 1;
        }
    }
    return -1;
} 
*/
int main(){
	fast;
	int n , m , k;
	cin >> n >> m >> k;
	int arr[m];
	itern(m){
	    cin >> arr[i];
	}
	
	int s = 1 , e = k , se = n , i = 0 , opn = 0;
	while(1){
	    int t = 0;
	    while(arr[i] <= e){
	       i++;
	       t++;
	    }  
	    int sp_page = t;
	    if(t == 0 && e == se)   break;
	    if(sp_page == 0){
	        s = k + 1;
	        e = (s + k - 1) < se ? (s + k -1) : se;
	        continue;
	    }
	    else{
	        opn++;
	        e = (e + t) < se ? e + t : se;
	    }
	}
	cout << opn << endl;
	return 0;
}