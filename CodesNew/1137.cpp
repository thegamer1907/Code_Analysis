
#include <cstdio>
long long n ;
bool check(long long k){
    long long tmp = n;
    long long s = 0;
    while(true){
        if(k > tmp) s += tmp;
        else s += k;
        tmp -= k;
        
        if(tmp<=0){
            if(s*2 >=n) return true;
            return false;
        }
        tmp -= (tmp/10);
        if(tmp<=0){
            
            if(s*2 >=n) return true;
            return false;
        }
    }

    return 0;
}
int main(int argc, const char * argv[]) {
   

    
    scanf("%lld",&n);
    
    long long l = 1;
    long long r = n;
    long long ans = 1000000000000000001;
    
    while(l<=r){
        long long mid = (l+r)/2;
        if(check(mid)){
            r = mid -1;
            if(ans > mid) ans = mid;
        }else{
            l = mid+1;
        }
    }
    
    printf("%lld\n",ans);
    
    return 0;
}
