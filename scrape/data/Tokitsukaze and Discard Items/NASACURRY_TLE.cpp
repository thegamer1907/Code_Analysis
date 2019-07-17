#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
const int maxn=1e5+5;
#define LL long long
template<typename tp,typename tpc=tp>
class segment_tree{
	#define lson l,mid,rt<<1 //简化操作 
	#define rson mid+1,r,rt<<1|1
	private:
	int maxn_seg; //设置线段树长度 
	tp *sum; //线段树节点所存权值的和 
	tpc *col; //线段树标记 	

	void updata(int l,int r,int rt){ //更新当前节点的值(自下向上) 
		sum[rt]=std::max(sum[rt<<1],sum[rt<<1|1]);
	}
	void clear(tpc &x){ //清空节点标记 
		x=0;
	}	
	void color(int l,int r,int rt,tpc colv){ //标记节点 
		col[rt]+=colv;
		sum[rt]+=colv;
	}
    void pushcol(int l,int r,int rt){ //下放当前节点的标记 
	    int mid=(l+r)>>1;
    	if(col[rt]){
			color(lson,col[rt]);
			color(rson,col[rt]);
		}
		clear(col[rt]); //下放后清除标记 
	}
	
	public:
	segment_tree(int N){ //初始化线段树长度 
		maxn_seg=N+1;
		sum=new tp[maxn_seg<<2];
		col=new tpc[maxn_seg<<2];
	}
	void build(int l,int r,int rt,tp *orv){ //初始化线段树 
//	printf("%d %d\n",l,r);
		clear(col[rt]); //初始化标记 
  	  	if(l==r){
			sum[rt]=orv[l]; //初始化权值 
        	return;
		}
    	int mid=(l+r)>>1;
    	build(lson,orv);
   	 	build(rson,orv);
    	updata(l,r,rt); 
	}
	void modify(int l,int r,int rt,int tl,int tr,tpc colv){ //区间[tl,tr]进行colv类型的修改 
   		if(tl<=l&&tr>=r){
        	color(l,r,rt,colv);
        	return;
    	}
    	pushcol(l,r,rt); 
    	int mid=(l+r)>>1;
    	if(tl<=mid)modify(lson,tl,tr,colv);
    	if(tr>mid)modify(rson,tl,tr,colv);
    	updata(l,r,rt);
	}
	LL queryval(int l,int r,int rt,int pos){
		if(l==r)return sum[rt];
    	pushcol(l,r,rt);
    	int mid=(l+r)>>1;
		if(pos<=mid)return queryval(lson,pos);
		else return queryval(rson,pos);
	}
	int query(int l,int r,int rt,tp v){ //对区间[tl,tr]进行查询     
		if(l==r){
			if(sum[rt]<=v)return l;
			else return l-1;
		};
    	pushcol(l,r,rt);
    	int mid=(l+r)>>1;
		if(sum[rt<<1]<v)return query(rson,v);
		else return query(lson,v);
	}
	#undef lson
	#undef rson
};
LL a[maxn];
int n,m;
LL k;
int main(){
//	freopen("in.txt","r",stdin);
	scanf("%d%d%I64d",&n,&m,&k);
	for(int i=1;i<=m;i++)scanf("%I64d",&a[i]);
	segment_tree<LL>T(m);
//	printf("n=%d\n",n);
	T.build(1,m,1,a);
//	printf("!!\n");
	int tot=0;
	int nk;
	for(int i=1;i<=m;i++){
	//	printf("%d\n",i);
		LL val=T.queryval(1,m,1,i);
		nk=((val-i+1+k-1)/k)*k+i-1; 
	//	printf("nk=%d\n",nk);
		i=T.query(1,m,1,nk);
	//	printf("i=%d\n",i);
	//	T.modify(1,n,1,i,n,-(ni-i+1));
		tot++;
	}
	printf("%d\n",tot);
}