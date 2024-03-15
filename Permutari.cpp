#include "bits/stdc++.h"
int n;
int st[105];
inline static void afisare(int k){
     for(int i = 1; i <= k; i++){
         std::cout << st[i] << ' ';
     }
     std::cout << '\n';
}
inline static bool valid(int k){
    for(int i = 1; i <= k-1; i++){
         if(st[k] == st[i]){
            return false;
         }
    }
    return true;
}
inline static void bkt(int k){
    for(int i = 1; i <= n; i++){
        st[k] = i;
        if(valid(k) == true){
             if(k==n){
                 afisare(k);
             }
             else{
           bkt(k+1);
        }
        }
    }
}
signed main(){
     freopen("permutari.in","r",stdin);
     freopen("permutari.out","w",stdout);
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(0);
     std::cout.tie(0);
     std::cin >> n;
     bkt(1);
     return 0;
}
