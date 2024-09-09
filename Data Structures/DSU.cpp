#include "bits/stdc++.h"
const int SIZE = 100000;
int root[SIZE + 5], sz[SIZE + 5], n, q;
void init(){
    for(int i = 1; i <= n; i++){
        root[i] = i;
        sz[i] = 1;
    }
}
int Find(int x){
    if(root[x] == x){
        return x;
    }
    root[x] = Find(root[x]);
    return root[x];
}
void Unite(int x, int y){
    int RootX = Find(x);
    int RootY = Find(y);
    if(sz[RootX] < sz[RootY]){
        std :: swap(RootX, RootY);
    }
    root[RootY] = RootX;
    sz[RootX] += sz[RootY];
}
void Solve(){
    std :: cin >> n >> q;
    init();
    while(q -- ){
        int op;
        std :: cin >> op;
        if(op == 1){
            int x, y;
            std :: cin >> x >> y;
            Unite(x, y);
        }
        if(op == 2){
            int x, y;
            std :: cin >> x >> y;
            if(Find(x) == Find(y)){
                std  :: cout << "DA" << '\n';
            }else{
                std :: cout << "NU" << '\n';
            }
        }
    }
}
signed main(){
    std :: ios_base :: sync_with_stdio(false);
    std :: cin.tie(0);
    Solve();
    return 0;
}
