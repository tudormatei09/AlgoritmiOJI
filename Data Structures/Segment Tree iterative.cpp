#include "bits/stdc++.h"
#define ull unsigned long long int
const int DIM = 100000;
ull aint[2*DIM+10],v[DIM+5],n,q;
inline static void update(int val, int poz){
        poz = poz + n;
        aint[poz] = val;
        for(int i = poz; i  > 1; i = i / 2){
                aint[i/2] = std :: min(aint[i],aint[i^1]);
        }
}
inline static void build(){
          for(int i = 1; i <= n; i++){
                  std :: cin >> v[i];
                  aint[n+i] = v[i];
          }
          for(int i = n-1; i > 0; i--){
                 aint[i] = std :: min(aint[2*i],aint[2*i+1]);
          }
}
inline static ull query(int st, int dr){
            st = st + n;
            dr = dr + n + 1;
            ull rez = INT_MAX;
            while(st < dr){
                 if(st & 1){
                        rez = std :: min(rez, aint[st++]);
                 }
                 if(dr & 1){
                        rez = std :: min(rez,aint[--dr]);
                 }
                 st = st / 2;
                 dr = dr / 2;
            }
            return rez;
}

inline static void solve(){
            std :: cin >> n >> q;
            build();
            while(q--){
                  int op;
                  std :: cin >> op;
                  if(op == 1){
                        int poz, val;
                        std :: cin >> poz >> val;
                        update(val, poz);
                  }else{
                        int st,dr;
                        std :: cin >> st >> dr;
                        std :: cout << query(st,dr) << '\n';
                  }
            }
}
signed main(){
      freopen("aint.in","r",stdin);
      freopen("aint.out","w",stdout);
      std :: ios_base :: sync_with_stdio(false);
      std :: cin.tie(0);
      std :: cout.tie(0);
      solve();
      return 0;
}
