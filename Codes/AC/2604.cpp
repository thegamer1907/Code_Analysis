#include<bits/stdc++.h>
using namespace std;
#define fori(a,b) for(lli (i)=(lli)(a);(i)<=(lli)(b);(i)++)
#define forj(a,b) for(lli (j)=(lli)(a);(j)<=(lli)(b);(j)++)
#define fork(a,b) for(lli (k)=(lli)(a);(k)<=(lli)(b);(k)++)
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define inf 1000000007
#define pi 3.14159265359
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define sz(a) (lli)(a).size()
#define iter(a) typeof((a).begin())
typedef int lli;
typedef vector< lli > vlli;
typedef pair<lli,lli> plli;
typedef set<lli> slli;
typedef map<lli,lli> mlli;
 
#define pr(...) dbs(#__VA_ARGS__, __VA_ARGS__)
template <class T> void dbs(string str, T t) {cerr << str << " : " << t << "\n";}
template <class T, class... S> void dbs(string str, T t, S... s) {int idx = str.find(','); cerr << str.substr(0, idx) << " : " << t << ","; dbs(str.substr(idx + 1), s...);}
template <class S, class T>ostream& operator <<(ostream& os, const pair<S, T>& p) {return os << "(" << p.first << ", " << p.second << ")";}
template <class T>ostream& operator <<(ostream& os, const vector<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T>ostream& operator <<(ostream& os, const set<T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class S, class T>ostream& operator <<(ostream& os, const map<S, T>& p) {os << "[ "; for (auto& it : p) os << it << " "; return os << "]";}
template <class T> void prc(T a, T b) {cerr << "["; for (T i = a; i != b; ++i) {if (i != a) cerr << ", "; cerr << *i;} cerr << "]\n";}
 
//*****************************************************************

vlli DD(10000001,0);
vlli PP(10000001,0);

class totient_functions{

    public:       //vector of prime numbers
        vector<lli> Pr;
        vector<bool>Npr;
//This is segmented sive of erasthones 
        void calc_sieve_2(lli NN ){//NN is the number and S is the partition size 
            lli S=sqrt(NN); //Remember you cannot change s it will affect the code so before changing do verify
            Npr.resize(sqrt(NN)+1,false);
            Npr[1]=true;
            lli sqrti=sqrt(NN);
            for(lli i=2;i<=sqrti;i++){
                if(!Npr[i]){
                    Pr.push_back(i);
                    for(long long int j=i*i;j<=sqrti;j+=i){
                        Npr[j]=true;
                    }
                }
            }
            vector<bool> B;
            lli n=sz(Pr);
            fori(0,NN/S){
                B.clear();
                B.resize(S,false);
                lli start=i*S;
                forj(0,n-1){
                    lli st_idx=ceil(start*1.0/Pr[j]);
                    lli k=max(st_idx,(lli)2) * Pr[j] - start;
                    for(;k<S;k+=Pr[j]){
                        B[k]=true;
                    }
                }
                if(i==0){
                    B[0]=true;
                    B[1]=true;
                }
                forj(0,S-1){
                    if(B[j]==false&&j+start>sqrti&&j+start<=NN){
                    	Pr.push_back(j+start);
                    }
                }
            }

            fori(1,sz(Pr)){
            	for(lli j=Pr[i-1];j<=NN;j+=Pr[i-1]){
            		PP[Pr[i-1]]+=DD[j];
            	}
            }  
 
        }

};



int main()
{
	//**************************************
	lli n;
	scanf("%d",&n);
	lli max1=-1;
	fori(1,n){
		lli a;
		scanf("%d",&a);
		DD[a]++;
		max1=max(max1,a);
	}
	totient_functions T;
	T.calc_sieve_2(max1);
	//***************************************


	//***************************************
	fori(2,10000000){
		PP[i]+=PP[i-1];
	}
	lli m;
	scanf("%d",&m);
	fori(1,m){
		lli a;
		lli b;
		scanf("%d%d",&a,&b);
		lli l=a>10000000?10000001:a;
		lli u=b>10000000?10000000:b;
		if(l>u)
			printf("0\n");
		else
			printf("%d\n",PP[u]-PP[l-1]);
	} 
	return 0;
} 