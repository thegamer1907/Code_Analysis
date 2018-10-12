#include<stdio.h>
#include<vector>
#include<iostream>

//unsigned long long M,N,count1 = 0,count = 0;
//unsigned int n, f,g = 0,visited[100001] = {0};//, in[100001]={0},out[100001]={0};
//unsigned int bfs[100001] = {0}, lIndex = 0;
//
//typedef struct node_list{
//	unsigned int v;
//	struct node_list *next;
//}NodeList;
//
//NodeList Nodes[900002];
//
//NodeList* getNode(){
//	Nodes[lIndex].next = nullptr;
//	return &Nodes[lIndex++];
//}
//
//struct nodes{
//	//unsigned short childs[1500];
//	NodeList *node;
//	unsigned short length;
//	unsigned short catCount;
//}LIST[100001];
//
////std::vector<struct node LIST> LIST[50000];
//
//void findProb(char *s, int i, int count){
//	if (!s[i]){
//		if(count == ::count){
//			count1++;
//		}
//		return;
//	}
//	if (s[i] == '?'){
//		findProb(s, i+1, count+1);
//		findProb(s, i+1, count-1);
//	} else{
//		count += s[i] == '+'?1:-1;
//		findProb(s, i+1, count);
//	}
//}

int main(){
	long long n =0,m=0,a[9]= {0};
	long long index = 0,j=1,k=1,val = 2,i1=0;
	std::cin>>n>>index;
	while(index%2==0)k++,index/=2;
	std::cout<<k;
}