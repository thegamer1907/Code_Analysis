#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

const int limite=55;

const int infinito=10000000;

int n;
vector<pair<int,int> > g[limite];
int eshoja[limite];
int dist[limite][limite];
int memcalcula[limite][limite];
int calculado[limite][limite];

int calcula(int u,int c);

int getvalue(int u,int v,int c)
{
  return dist[u][v]+calcula(v,c);
}

bool puede(int u,int c,int t)
{
  int cacum=0;
  for (int v=1;v<=n and cacum<c;v++) {
    if (eshoja[v] and v!=u) {
      int cc=0;
      while (cacum+cc+1<=c and getvalue(u,v,c-(cc+1))>t)
	cc++;
      cacum+=cc;
    }
  }
  return cacum<c;
}

int calcula(int u,int c)
{
  if (c==0) return 0;
  int &mem=memcalcula[u][c];
  if (calculado[u][c]) return mem;
  calculado[u][c]=1;
  int inf=0;
  int sup=infinito;
  while (inf+1<sup) {
    int med=(inf+sup)/2;
    if (puede(u,c,med)) sup=med;
    else inf=med;
  }
  mem=sup;
  //cout<<"calcula u "<<u<<" c "<<c<<" mem "<<mem<<endl;
  return mem;
}

int distrib[limite];
int p;
int m;
int distini[limite][limite];

bool llega(int u,int v)
{
  return distini[u][v]<infinito;
}

bool puedebis(int t)
{
  for (int u=1;u<=n;u++) {
    int c=distrib[u];
    int cacum=0;
    for (int v=1;v<=n and cacum<c;v++) {
      if (eshoja[v] and llega(u,v)) {
	int cc=0;
	while (cacum+cc+1<=c and getvalue(p,v,m-(cc+1))>t)
	  cc++;
	cacum+=cc;
      }
    }
    if (cacum<c) return true;
  }
  return false;
}

int main()
{
  cin>>n;
  for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
      if (i==j) dist[i][j]=0;
      else dist[i][j]=infinito;
  for (int i=1;i<=n;i++)
    for (int j=1;j<=n;j++)
      if (i==j) distini[i][j]=0;
      else distini[i][j]=infinito;
  for (int i=0;i<n-1;i++) {
    int u,v,d;
    cin>>u>>v>>d;
    g[u].push_back(pair<int,int> (v,d));
    g[v].push_back(pair<int,int> (u,d));
    dist[u][v]=dist[v][u]=d;
    distini[u][v]=distini[v][u]=d;
  }
  for (int u=1;u<=n;u++)
    eshoja[u]=int(g[u].size())==1;
  for (int k=1;k<=n;k++)
    for (int i=1;i<=n;i++)
      for (int j=1;j<=n;j++)
	dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
  cin>>p;
  for (int u=1;u<=n;u++)
    distini[u][p]=distini[p][u]=infinito;
  for (int k=1;k<=n;k++)
    for (int i=1;i<=n;i++)
      for (int j=1;j<=n;j++)
	distini[i][j]=min(distini[i][j],distini[i][k]+distini[k][j]);
  cin>>m;
  for (int caso=1;caso<=m;caso++) {
    int x;
    cin>>x;
    for (int u=1;u<=n;u++) {
      if (eshoja[u] and llega(x,u)) {
	distrib[u]++;
	break;
      }
    }
  }
  int inf=0;
  int sup=infinito;
  while (inf+1<sup) {
    int med=(inf+sup)/2;
    if (puedebis(med)) sup=med;
    else inf=med;
  }
  cout<<sup<<endl;
}
