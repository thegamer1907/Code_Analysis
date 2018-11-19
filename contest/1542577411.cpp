#include <cstdio>
#include <stdint.h>
#include <cstring>

using namespace std;

int popcnt[16]; //2^4
int masks[5][16];
int masks_all[16];
int main(int argc, char **argv)
{
    popcnt[0] = 0;
    for(int x = 1; x < 16; x++){
        popcnt[x] = popcnt[x >> 1] + (x & 1);
    }
    memset(masks, 0, sizeof(masks));
    memset(masks_all, 0, sizeof(masks_all));
    int n, k; //n 1 1e5 k 1 4
    scanf("%d%d", &n, &k);
    for(int i = 0; i < n; i++){
        uint32_t mask = 0;
        for(int j = 0; j < k; j++){
            int x;
            scanf("%d", &x);
            if(x == 1){
                mask |= (1 << j);
            }
        }
        masks[popcnt[mask]][mask] = 1;
        masks_all[mask] = 1;
    }
    if(k == 1){
        if(masks[0][0]){
            puts("YES");
        }else{
            puts("NO");
        }
    }else if(k == 2){
        if(masks[0][0]){
            puts("YES");
            return 0;
        }
        //10 + 01
        if(masks[1][2] && masks[1][1]){
            puts("YES");
        }else{
            puts("NO");
        }
    }else if(k == 3){
        if(masks[0][0]){
            puts("YES");
            return 0;
        }
        //001 + ??0
        for(uint32_t mask = 0; mask < 8; mask++){
            if(masks[1][mask]){
                for(uint32_t mask2 = 0; mask2 < 8; mask2++){
                    if(masks_all[mask2] && (mask2 & mask) == 0){
                        puts("YES");
                        return 0;
                    }
                }
                //otherwise no 0-problem for that team
                puts("NO");
                return 0;
            }
        }
        //011 + 101 + 110, but this is not solution! 
        //add 2 - 1 = 1 more 1 each time.
        puts("NO");
    }else{ //k == 4
        if(masks[0][0]){
            puts("YES");
            return 0;
        }
        //0001 + ???0
        for(uint32_t mask = 0; mask < 16; mask++){
            if(masks[1][mask]){
                for(uint32_t mask2 = 0; mask2 < 16; mask2++){
                    if(masks_all[mask2] && (mask2 & mask) == 0){
                        puts("YES");
                        return 0;
                    }
                }
                //otherwise there is no 0-problem for that team.
                puts("NO");
                return 0;
            }
        }
        //0011
        for(uint32_t mask = 0; mask < 16; mask++){
            if(masks[2][mask]){
                //1100 (10?? or 01?? add at least one 1, must not solution)
                if(masks[2][(~mask) & 15]){
                    puts("YES");
                    return 0;
                }
            }
        }
        //anyway, there is only one valid pairs: 0111 + 1011 + 1101 + 1110 
        //but this is not solution, add 3 - 1 = 2 more 1 each time.
        puts("NO");
    }
    
    return 0;
}
