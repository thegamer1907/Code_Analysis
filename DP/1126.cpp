#include<bits/stdc++.h>
#include<set>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<iterator>
#include<iostream>

#define lli long long int
#define ld long double
#define llu long unsigned int
#define mod ((lli)(1e10+7)
#define ilpf(a,b) for(lli i=a;i<=b;i++)
#define jlpf(a,b) for(lli j=a;j<=b;j++)
#define ilpb(a,b) for(lli i=a;i>=b;i--)
#define jlpb(a,b) for(lli j=a;j>=b;j--)
#define vlli vector<lli>
#define vld vector<ld>
#define vb vector<bool>
#define vch vector<char>
#define vstr vector<string>
#define vpllilli vector<pair<lli,lli>>
#define vpllild vector<pair<lli,ld>>
#define vpldlli vector<pair<ld,lli>>
#define vpllib vector<pair<lli,bool>>
#define vpldld vector<pair<ld,ld>>
#define vpldb vector<pair<ld,bool>>
#define vpstrlli vector<pair<string,lli>>
#define vpllistr vector<pair<lli,string>>
#define vpstrld vector<pair<string,ld>>
#define vpldstr vector<pair<ld,string>>
using namespace std;
lli llin(){lli x;scanf("%lld",&x);return x;}
ld ldin(){ld x;scanf("%Lf",&x);return x;}
char chin(){char ch;scanf("%c",&ch);return ch;}
string strin(){string str;cin>>str;return str;}
void No(){ cout<<"No"<<endl;}
void NO(){ cout<<"NO"<<endl;}
void Yes(){ cout<<"Yes"<<endl;}
void YES(){ cout<<"YES"<<endl;}
lli fmin_i(vlli v){lli n=v.size(),mn_i=0,mn_e=v[0];ilpf(0,n-1){lli MIN=min(mn_e,v[i]);if(MIN!=mn_e){mn_e=MIN;mn_i=i;}}return mn_i;}
lli fmax_i(vlli v){lli n=v.size(),mx_i=0,mx_e=v[0];ilpf(0,n-1){lli MAX=max(mx_e,v[i]);if(MAX!=mx_e){mx_e=MAX;mx_i=i;}}return mx_i;}
lli lmin_i(vlli v){lli n=v.size(),mn_i=0,mn_e=v[0];ilpf(0,n-1){if(v[i]<=mn_e){mn_e=v[i];mn_i=i;}}return mn_i;}
lli lmax_i(vlli v){lli n=v.size(),mx_i=0,mx_e=v[0];ilpf(0,n-1){if(v[i]>=mx_e){mx_e=v[i];mx_i=i;}}return mx_i;}
lli min_e(vlli v){lli mn_e=v[0],n=v.size();ilpf(0,n-1)mn_e=min(mn_e,v[i]);return mn_e;}
lli max_e(vlli v){lli mx_e=v[0],n=v.size();ilpf(0,n-1)mx_e=max(mx_e,v[i]);return mx_e;}
void make_prime(vb&v){lli I=2,n=(lli)v.size()-1;ilpf(0,n)v[i]=true;v[0]=false;v[1]=false;while(I<=n){while(I<=n&&!v[I])I++;if(I>n)break;lli i=2;while(i*I<=n){v[i*I]=false;i++;}I++;}}

  
/*_______________________________________________________________________________________________________________________________*/
 /*
  * STACK               :LIFO
  * stack<data_type>s
  * push()              :s.push(data)           :O(1)
  * pop()               :s.pop(data)            :O(1)
  * top()               :s.top()                :O(1)
  * size()              :s.size()               :O(1)
  */
  
 /* QUEUE                :FIFO
  * queue<data_type>q    
  * push()               :q.push(data)          :O(1)
  * pop()                :q.pop()               :O(1)
  * front()              :q.front()             :O(1)
  * size()               :q.size()              :O(1)
  */
  
 /* priority_queue        :default MAX HEAP
  * priority_queue(data_type>pq
  * push()               :pq.push(data)         :O(log(n))
  * pop()                :pq.pop()              :O(long(n))
  * top()                :pq.top()              :O(1)
  * size()               :pq.size()             :O(1)
  */

 /*_____________________________________________________________________________________________________________________________*/
 
/*
 * SET           :Element in sorted order
 * declaration   : set<lli>s
 * insertion     : s.insert(data)                                    :O(log(n))             
 * size          : s.size()                                          :O(1) 
 * find          :auto it=s.find(data) //if it!=s.end -> data found  :O(log(n))
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 
/*
 * Unorderd SET  :Elements in unsorted order
 * declaration   :unordered_set<lli>s
 * insertion     :s.insert(data)                                     :O(1)
 * size          :s.size()                                           :O(1)
 * find          :auto it=s.find(data)//if it!=s.end ->data found    :O(1)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */

/*
 * MAP           :Elemnet r SORTED,unlike set we insert (key and data)
 * declaration   :map<key_type,data_type>m
 * insert        :m.insert(make_pair(key,data));                     :O(log(n))
 * find          :auto it=m.find(key) //if(it!=m.end)it->first=key   :O(log(n))
 * []            :m[key]++      //data=data+1 ,at that key           :O(log(n))
 * size          :m.size()                                           :O(1)
 * loop          :for(auto it=m.begin();it!=s.end();it++)
 */
 
/* Unordered MAP :Element r UNSORTED,unlike unordered set we insert (key and data)
 * declaration   :unorderd_map<key_type,data_type> m
 * insert        :insert(make_pair(key,data))                        :O(1) 
 * find          :auto it=m.find(key) //if (it!=m.end)it->first=key  :O(1)
 * []            :m[key]++      //data=data+1 ,at that key           :O(1)
 * size          :m.size()                                           :O(1)
 * loop          :for(auto it=s.begin();it!=s.end();it++)
 */
 
 /* muti_set             :similar to set but have duplicate element
  * multi_set<data_type>ms
  * insert()               :ms.insert(data)         :O(log(n))
  * find()                 :auto it=ms.find(data)   :O(long(n))
  * size()                 :ms.size()               :O(1)
  */
  
  /* multimap              :similar to MAP but can have duplicate keys  :search O(logn):insert O(logn):delete O(logn)  
   * mulimap<key_type,data_type>mm
   * mm.insert(pair<key_type,data_type>(key,data))        :O(long(n))
   * multimap<key_type,data_type> mm2(mm.begin(),mm.end())  
   * find()                :it=mm.find(key)  //first it   :O(long(n))
   * mm.lower_bound(key)->second //data      mm.lower_bound(key)=it  1st elemet having the key  or mm.end()
   * mm.upper_bound(key)->second //data      mm.upper_bound(key)=it  1st element just after the key or mm.end()
   * mm.erase(key)         :erase all element of the key value
   * mm.erase(mm.begin(),mm.find(key))    :remove all having(key) less than the given key
   * mm.size()                                             :O(1)
   * for(auto it=mm.begin();it!=mm.end;it++)     :traversal
   */
 /*_________________________________________________________________________________________________________________________________*/
 

int main()
{
	//see the constrain first to time complexity
	lli n=llin(),mx=0,ONE=0;
	vlli v(n);
	ilpf(0,n-1)v[i]=llin();
	ilpf(0,n-1)ONE+=v[i];
	ilpf(0,n-1)
	{
	    jlpf(i,n-1)
	    {
			lli one=ONE;
			for(lli k=i;k<=j;k++)
			if(v[k]==0)
			one++;
			else
			one--;
			mx=max(mx,one);
			//cout<<"I:"<<i<<" "<<"J"<<j<<" "<<one<<" "<<endl;
		}
	}
	cout<<mx<<endl;
}
		
		
	

	

	
	

			
	
	
	

		
		


		
