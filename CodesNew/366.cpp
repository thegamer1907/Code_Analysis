#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
typedef long long int ll;
int main(){
    int n,t;
    int arr[100005];
    scanf("%d%d",&n,&t);
    REP(i,n){
		scanf("%d",&arr[i]);
	}
	int left=0;
	int ans=0;
	int sum=0;
	int current=0;
	//2 pointers/sliding window algorithm
	REP(i,n){
		sum+=arr[i];//add item to current Sum
		current++;
		//The following while loop is to adjust the boundary of the current window of 
		//books. if a new book is added in the right and if the sum exceed given t
		//we have to window by removing element(s) from the left
		while(sum>t){//if current Sum is greater that available time
			current--;
			sum-=arr[left];//remove the leftmost element
			left++;//increment left pointer
	    }
	    ans=max(ans,current);//at each iteration update ans with maximum book window length till now
			
	}
	printf("%d",ans);
}