#include<bits/stdc++.h>
using namespace std;

struct Trie{
	Trie* nxt[2];
	bool flag;
	Trie(){	flag=false;nxt[0]=nxt[1]=NULL;}
};

Trie head;
int K;
void insert(int* arr)
{
	Trie *tmp;
	tmp=&head;

	for(int i=0;i<K;++i)
	{
		if(tmp->nxt[arr[i]]==NULL)	tmp->nxt[arr[i]]=new Trie;
		tmp=tmp->nxt[arr[i]];
	}
	tmp->flag=true;
}

bool find(Trie* now,int *arr,int k)
{
	if(now==NULL)	return false;
	if(k==K)	return now->flag;
	if(arr[k]==0&&find(now->nxt[1],arr,k+1))	return true;
	return find(now->nxt[0],arr,k+1);
}

bool dfs(Trie* now,int *arr,int k)
{
	if(now==NULL)	return false;
	if(now->flag)	return find(&head,arr,0);
	for(int i=0;i<2;++i)
	{
		arr[k]=i;
		if(dfs(now->nxt[i],arr,k+1))	return true;
	}
	return false;
}
int arr[4];
int main()
{
	int n;
	scanf("%d%d",&n,&K);
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<K;++j)
		{
			scanf("%d",&arr[j]);
		}
		insert(arr);
	}
	if(dfs(&head,arr,0))	printf("YES");
	else printf("NO");
	return 0;
}