#include<iostream>
using namespace std;
long long unsigned int start=0,last,mid;
long long unsigned int N,R,temp;

long long unsigned int binary(long long unsigned int wts[],long long unsigned int num,long long unsigned int sub){  ///returns the position of the num closest to and less than reading limit
        last=N-1;
        mid=(start+last)/2;
        while((start!=mid&&mid!=last)&&(wts[mid]-sub)!=num){
            if((wts[mid]-sub)<num){
                start=mid;
                mid=(start+last)/2;
            }
            else{
                last=mid;
                mid=(start+last)/2;
            }
        }
        if((wts[mid]!=num)&&(mid==start||mid==last)){
            if(mid==start){

                if(((wts[last]-sub)<=num)&&(wts[last]>wts[start]))
                    mid=last;
                else if((wts[start]-sub)<=num)
                       ;
                else
                    mid=-1;///so that zero is output
            }
           else if(mid==last){
                if((wts[last]-sub)<=num)
                    ;
                else if((wts[start]-sub)<=num)
                    mid=start;
                else
                    mid=-1;
           }
           else
                ;

        }
     return mid+1; ///return array position of value lesser than or equal to the reading limit
}

int main(){

    cin>>N>>R;
    long long unsigned int *wts= new long long unsigned int[N];
    cin>>wts[0];
    for(long long unsigned int i=1;i<N;i++){
        cin>>wts[i];
        wts[i]+=wts[i-1];
    }
    long long unsigned int max_lenght=0;
    max_lenght=binary(wts,R,0);
    for(long long unsigned int i=1;i<N;i++){
        temp=binary(wts,R,wts[i-1])-i;
        if(temp>max_lenght){
            max_lenght=temp;
        }
    }
    cout<<max_lenght; ///max consecutive books that can be read
    delete []wts;
        }
