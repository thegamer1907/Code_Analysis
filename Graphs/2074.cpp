#include <string>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <cstring>
#include "stdio.h"
#include <utility>
#include<iostream>
#include<queue>
#include <iomanip>
#include <sstream>
#include <fstream>
#define forin(i, n) for (int i = 0; i < n; ++i)
using namespace std;
#define ll long long
int n = 0,m=0,gSize=20000;
bool spt[20000] = {0};
int dist[20000];
void dik(int i) {
	dist[i] = 0;
	while(1) {
		int minI = 0;
		int minD = INT_MAX;
		for (int j = 0;j < gSize;++j)
			if (dist[j] <= minD && !spt[j]) {
				minI = j;
				minD = dist[minI];
			}
		spt[minI] = 1;
        //cout<<minI<<endl;
        if(spt[m])
            return;
		if (minI>0 && minI<<1 < gSize ) 
		    dist[2*minI] = min(dist[2*minI], dist[minI] + 1);
		if (minI >1)
			dist[minI - 1] = min(dist[minI - 1], dist[minI] + 1);
			
	}
}

int main(){
	scanf("%d%d", &n,&m);
    memset(dist,0x7F,4*gSize);
    dik(n);
    printf("%d\n", dist[m]);
	
	return 0;
}

//int start_s = clock();
//
//int stop_s = clock();
//cout <<endl<< "time: " << (stop_s - start_s) / double(CLOCKS_PER_SEC) << endl;


/*struct node
{
int at;
int cost;
node(int x = 0, int y = 0)
{
at = x;
cost = y;
}

};
bool operator<(const node & n1, const node & n2) { return n1.cost > n2.cost; }
bool comp(node & n1, node & n2) { return n1.at < n2.at; }
bool operator==(node& n1, node& n2) {
if (n1.at == n2.at)
{
n1.cost = min(n1.cost, n2.cost);
return true;
}
return false;
}

vector<node> *graph;
int * visit;
int visited_num =0;
*/