    #include <iostream>  
    #include <string>  
    #include <algorithm>  
    #include <map>  
    #include <memory.h>  
      
    using namespace std;  
      
    bool judge(int x){  
        int sum=0;  
        while(x){  
            sum+=x%10;  
            x/=10;  
        }  
        if(sum==10)  
            return true;  
        else  
            return false;  
    }  
      
    int aaa[1000005];  
    int main()  
    {  
      
        int x=0;  
        for(int i=0;i<=12000000;i++)  
            if(judge(i))  
                aaa[x++]=i;  
      
        int k;  
        cin>>k;  
        cout<<aaa[k-1]<<endl;  
      
      
      
      
        return 0;  
      
    }  