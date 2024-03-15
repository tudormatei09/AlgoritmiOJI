#include "bits/stdc++.h"
int n;
int p;
int st[105];
inline static void afisare(int k){
     for(int i = 1; i <= k; i++){
         std::cout << st[i] << ' ';
     }
     std::cout << '\n';
}
inline static bool valid(int k){
    if(st[k] <= st[k-1] and k > 1){
         return false;
    }
    return true;
}
inline static void bkt(int k){
    for(int i = 1; i <= n; i++){
        st[k] = i;
        if(valid(k) == true){
             if(k==p){
                 afisare(k);
             }
             else{
           bkt(k+1);
        }
        }
    }
}
signed main(){
     freopen("combinari.in","r",stdin);
     freopen("combinari.out","w",stdout);
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(0);
     std::cout.tie(0);
     std::cin >> n >> p;
     bkt(1);
     return 0;
}
