using namespace std ;
    #include "iostream"
    #include "stdio.h"
    #include "cstring"
    #include "cmath"
    #include "iomanip"
    #include "cctype"
    #include "algorithm"
    #include "vector"
    #include "set"
    #include "stack"
    #include "queue"
    #include "deque"
    #include "map"
    #include "list"
    #include "bitset"
    typedef long long lld;
    typedef vector<int> vi;
    typedef pair<int,int> pii;
    typedef vector<pii> vpii;
    #define _CRT_SECURE_NO_DEPRECATE
    #define MAX 200
    #define CFT int ACCEPTED = 1 ;
    #define MYT int ACCEPTED = 1000 ;
    #define T_ISA ACCEPTED--
    #define AlhamdwLeAllah return 0
    #define el '\n'
    #define watch(x) cout << (#x) << " is " << (x) << endl
    #define all(c) c.begin(), c.end()
    #define present(container, element) (container.find(element) != container.end())        //for set & map
    #define vpresent(container, element) (find(all(container),element) != container.end()) //for vector
    #define write_to_file() freopen("output.txt","w",stdout);
    #define watchSTL(container) {\
                                    cout<<(#container)<<" values =  ";\
                                    for(auto _E:container)cout<<_E<<" ";\
                                    printf("\n");\
                                }
    void watchset_e(set<int>SET, int N)
    {
        set<int>::iterator ITERATOR=SET.begin();
        advance(ITERATOR,N);
        printf("Element in %dth = %d \n",N,*ITERATOR);
    }
    int SD()
    {
        int x;
        scanf("%d",&x);
        return x;
    }
    lld SLL()
    {
        lld x;
        scanf("%lld",&x);
        return x;
    }
    char SC()
    {
        char x;
        scanf("%c",&x);
        return x;
    }
    const int AKA = 1e6 + 5 ;
    vector<int>prime;
    lld notPrime[AKA];
    
    
     long long int n,c,MAAX,i,j,ar[1000010],arr[1000010],m,k,z,t,r,x,y;     
     vector<long long int>v,v1;    set< int>s;
    int main()
    {
     
        CFT ;
        while(T_ISA)
        {
         cin>>n>>m;
         for(i=0;i<n;i++) cin>>ar[i];
         for(i=n-1;i>=0;i--){
             s.insert(ar[i]);  
             arr[i]=s.size();
            // cout<<arr[i]<<" ";
         }
         for(i=0;i<m;i++)
         {
             cin>>k;  cout<<arr[k-1]<<"\n";
         }
         
         }
            
        AlhamdwLeAllah;
    }