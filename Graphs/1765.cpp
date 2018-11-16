#include<bits/stdc++.h>

#define MOD 1000000007
#define MAX 100005
#define ll long long 
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define ss(s) scanf("%s",&s)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();container.end();it++)
#define mp(a,b) make_pair(a,b)
#define FF first
#define SS second
#define pb push_back(x)
#define vi vector<int>
#define vpii vector<pii>
#define vll vector<ll>
#define clr(x) memset(x,0,sizeof(x))
#define endl '\n'
#define forl(i,n) for (int i = 0; i < int(n); ++i)
#define INF 1e9


using namespace std;

void io(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
}

int binary_search(ll arr[],int l,int r,ll a){
	int mid=(l+r)/2;
	if(a>arr[mid]){
		return binary_search(arr,mid+1,r,a);
	}else if(a<arr[mid]){
		return binary_search(arr,l,mid-1,a);
	}else if(a==arr[mid]){
		return mid;
	}else{
		return 0;
	}
}

ll fast_exp(ll base,int exp,int m){      //using spread property of modulus
	ll res=1;
	while(exp>0){
		if(exp%2==1){
			res=(res*base)%m;             //because exp/2 counts for odd also
		}
		base=(base*base)%m;
		exp/=2;
	}
	return res%m;
}


//take array from function as pointers
//list->all operations using iterators,like vectors eg--push_back,reverse,push_front...
//set-:everything using iterators,no[] and takes in ascending order,find(value)->serches and returns iter otherwise
//end(),count(5)-> return 0 or 1
//pair,no[],single entity
//maps->finally ['b'] types allowed,where 'b' is key,the values be will be in sorted order 
//according to the key,unique,find(key)--same,count(key)--0 or 1,use = to assign,at('b')for values,erase('d')
//stack,queue->push,pop,front(or top in stacks),empty,size
//priority_queue-->in descending order,pop,push,size(),top(),empty(),is based on binary heap(==parent r)
//multiset->ascending order(default),same values applicable,<int,greater<int> >for descending,all other iterators
//hashing->vector <string> hashTable[20];,20 indexes for all elements,such type is open hashing or chaining
//vector is initially uniniatialised(logic->0 is not pushed into),string is "";
/*DFS-recursive(G, s):
    mark s as visited
    for all neighbours w of s in Graph G:
        if w is not visited:
            DFS-recursive(G, w)*/

//***ALERT_IMP::first create the solution in the mind then only start;

//when nothing in head,thought of iterators in doing
//dynamic programming is storing the results of smaller sub-problems to calculate the bigger problem
//like--in fibonacci,use a[3]=a[2]+a[1](so if know a[4],a[3]--write a[5] in O(1),instead of return f(2)+f(1)
/*DP[0] = DP[1] = DP[2] = 1; DP[3] = 2;
    for (i = 4; i <= n; i++) {
      DP[i] = DP[i-1] + DP[i-3] + DP[i-4];  //bottom-up approach
    }
*/
//recursion--max(profit(be+1, en) + year * p[be];profit(be, en-1) + year * p[en]);),here 1st will be calculated till 
//base condition-1,then we will start making the best solution,which is the optimum solution as from build up we take
//the best only without knowing of future
//dp--->n this step think about, which of the arguments you pass to the function are redundan
/*int N; // read-only number of wines in the beginning
    int p[N]; // read-only array of wine prices
    int cache[N][N]; // all values initialized to -1 (or anything you choose)

        int profit(int be, int en) {
          if (be > en)
            return 0;
         // these two lines save the day
          if (cache[be][en] != -1)    //if we already have the answer,no need to calculate again
            return cache[be][en];
          int year = N - (en-be+1) + 1;
          // when calculating the new answer, don't forget to cache it,storing the every answer
          return cache[be][en] = max(
            profit(be+1, en) + year * p[be],
            profit(be, en-1) + year * p[en]);
        }
 */       
//dp is mostly using arrays to store previous information
//Meaning each object gets its own copy of data members and all objects share single copy of member functions.
//this->used for object that uses the function
//quicksort==leftsorted+pivot+rightsorted,mergesort==breaktill 1 element and merge
//dijkstra--for every node,for all the unvisited neighbours of that node,find dist(neighbour via node) 
//and modify of it is lesser(har node se unvisited neighbour ka distance nikalte hain)
int t,n;
vector<int>adj[30005];
bool visited[30005];

//only to check from one vertex to another
void DFS(int s){
	
    visited[s]=1;			
    for(int i=0;i<adj[s].size();i++){  	
    		if(!visited[adj[s][i]]){
    			DFS(adj[s][i]); 
    		} 
    } 
}

void init(){
	for(int i=0;i<n;i++){
		visited[i]=false;
	}
}



int main(){
io();
	
	init();
	visited[0]=true;
	sd(n);sd(t);
	for(int i=1;i<=n-1;i++){
		int temp;
		cin>>temp;
		adj[i].push_back(i+temp);
	}
	adj[0].push_back(0);
	DFS(1);
	if(visited[t]==1){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	



}

