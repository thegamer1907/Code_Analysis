// Lasers67
#include <bits/stdc++.h>
using namespace std;
#define vc vector
#define vcI vector<int>
#define vcLL vector<long long int>
#define vcC vector<char>
#define pb emplace_back
#define mp make_pair
#define vcpII vector<pair<int,int> >
#define vcpLL vector<pair<long long int,long long int> >
#define vcpIS vector<pair<int,string> >
#define SORT(A) sort(A.begin(),A.end())
#define REV(A) reverse(A.begin(),A.end())
#define fsp(i,b,n,a) for(long long int i=b;i<n;i=i+a)
#define fdf(i,n) for(long long int i=0;i<n;i++)
#define outln(a) cout<<a<<endl;
#define outsp(a) cout<<a<<" ";
#define len(a) a.size()
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
#define debuggerOFF cout.rdbuf(orig_buf) 
#define endln cout<<"\n"
// template <class T>
struct print {
public:
    static void lnrev(vcI x){ll n=len(x);for(int i=n-1;i>=0;i--)cout<<x[i]<<" ";cout<<endl;}
    static void ln(vector<ll> y){ll n=len(y);fdf(i,n)cout<<y[i]<<" ";cout<<endl;}
};
// ListNode *reverseLinkedList(ListNode *head, int size) {
//    if (size <= 1) return head; 
//        ListNode *cur = head, *nextNode = head->next, *tmp;

//    for (int i = 0; i < (size - 1); i++) {
//        tmp = nextNode->next;
//        nextNode->next = cur; 
//        cur = nextNode;
//        nextNode = tmp; 
//    }

//    head->next = nextNode;
//    return cur;
//    }
ll SUM(vector<int> temp)
{
	ll ans=0;
	fdf(i,temp.size())
	{
		ans+=temp[i];
	}
	return ans;
}
long long int power(long long int x, long long int y, long long int p)
{
    long long int res = 1;
    x = x % p; 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = ((res%p)*(x%p)) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;  
    }
    return res;
}
long long int gcd(long long int  a, long long int b)
{
    if (!a)
    	return b;
   	return gcd(b%a,a);
}
int findGCD(int a,int b,int c)
{
	int arr[3];
	arr[0]=a;
	arr[1]=b;
	arr[2]=c;
    int result = arr[0];
    for (int i = 1; i < 3; i++)
        result = gcd(arr[i], result);
    return result;
}
vector<int> computeLPSArray(string pat)
{
	int M=pat.size();
    // length of the previous longest prefix suffix
    vector<int> lps(M);
    int len = 0;
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M)
    {

        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar 
            // to search step.
            if (len != 0)
            {
                len = lps[len-1]; 
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}
struct TreeNode
{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode* next;
	TreeNode(int x) : val(x),left(NULL),right(NULL),next(NULL){}
};
class graph
{
private:
	vector<vector<int> > Adj;
	int Edges;
	int Vertices;
public:
	// vector<pair<int,int> > P;
	graph(int V,int E)
	{
		Vertices=V;
		Edges=E;
		int a,b;
		// P.resize(V);
		Adj.resize(V);
		fdf(i,E)
		{
			// cout<<i<<endl;
			cin>>a>>b;
			Adj[a-1].pb(b-1);
			Adj[b-1].pb(a-1);
		}
		// for(int i=0;i<V;i++)
		// {
		// 	cout<<i<<" -> ";
		// 	fdf(j,Adj[i].size())
		// 	{
		// 		cout<<Adj[i][j]<<" ";
		// 	}
		// 	endln;
		// }
	}
	int BFS(int start,int dest)
	{
		queue<pair<int,int> >st;
		// int dist=0;
		if(start==dest)
			return 0;
		st.push({start,0});
		vector<int> visited(Vertices);
		while(st.empty()==false)
		{
			int curr=st.front().first;
			int curr_dist=st.front().second;
			// cout<<curr<<" "<<curr_dist<<endl;
			if(curr==dest)
				return curr_dist;
			visited[curr]=true;
			st.pop();
			for(int i=0;i<Adj[curr].size();i++)
			{
				if(visited[Adj[curr][i]]==false)
				{
					st.push({Adj[curr][i],curr_dist+1});
				}
			}
		}
	}
	bool checkedge(int a,int b)
	{
		for(int i=0;i<Adj[a].size();i++)
		{
			if(Adj[a][i]==(b))
				return true;
		}
		return false;
	}
	
};
map < vector<int>,int> G;
void SOL(vector<int> &V)
{
	queue< pair<vector<int>,int> > q;
	q.push({V,0});
	while(q.empty()==false)
	{
		vector<int> P=q.front().first;
		int K=q.front().second;
		if(K==P.size())
		{
			G[q.front().first]++;
			q.pop();
			continue;
		}
		q.pop();
		for(int i=0;i<P.size();i++)
		{
			vector<int> L=P;
			int temp=L[K];
			L[K]=L[i];
			L[i]=temp;
			q.push({L,K+1});
		}
	}
}
int main()	
{
	fastIO;	
	//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
	int n,m;
	cin>>n>>m;
	if((min(n,m))%2==0)
	{
		cout<<"Malvika"<<endl;
	}
	else
	{
		cout<<"Akshat"<<endl;
	}
	//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
	//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-  
	return 0;
}