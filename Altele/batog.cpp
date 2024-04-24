#include "bits/stdc++.h"

const int DIM  = 1e6 + 6;
int v[DIM];
int batog[DIM];
int lg,n;

inline static void build(){

      for(int i = 0;  i < n; i++){
                  std :: cin >> v[i];
                  batog[i/lg] = batog[i/lg] + v[i];
    }

}

inline static void update(int x, int poz){

    int block = poz/lg;
    batog[block] = batog[block] + x - v[poz];
    v[poz]  = x;

}

inline static void query(int st, int dr){
    long long sum = 0;
    int dim1 = st/lg;
    int dim2 = dr/lg;
    if(dim1 == dim2){
           for(int i = st; i <= dr; i++){
                    sum = sum + v[i];
           }
    }else{
          for(int i = st; i < (dim1+1)*lg; i++){
                 sum = sum + v[i];
          }
          for(int i  = dim2*lg; i <= dr; i++){
                  sum = sum + v[i];
          }
          for(int i = dim1+1; i < dim2; i++){
                sum =  sum + batog[i];
          }
    }
        std :: cout << sum << '\n';
}

inline static void solve(){

    std :: cin >> n;
    lg = std::sqrt(n);
    build();
    int q;
    std :: cin >> q;
    while(q--){
           std :: string op;
           std :: cin >> op;
           if(op == "update"){
                int x,poz;
                std :: cin >> x >> poz;
                update(x,poz-1);
           }else if(op == "query"){
                int st,dr;
                std :: cin >> st >> dr;
                query(st-1,dr-1);
           }
    }

}


signed main(){

        std :: ios_base :: sync_with_stdio(false);
        std :: cin.tie(0);
        std :: cout.tie(0);

        solve();

     return 0;
}
