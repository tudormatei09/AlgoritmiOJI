///Complexitate O(n)
#include "bits/stdc++.h"

const int DIM  = 1005;
int stiva[DIM];
int v[DIM];
std::vector<int>rez;

inline static void task(){
        int n;
        std::cin >> n;
        for(int i = 0; i < n; i++){
                std::cin >> v[i];
        }
        int top = 0;
        for(int i = n-1; i >= 0; i--){
               while(top > 0 and stiva[top] <= v[i]){
                        top--;
               }
                 if(top == 0){
                        rez.push_back(-1);
                }else{
                     rez.push_back(stiva[top]);
                }
                stiva[++top] = v[i];
        }
        std::reverse(rez.begin(),rez.end());
        for(auto i : rez){
            std::cout << i << ' ';
        }
}

signed main(){
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(0);
      std::cout.tie(0);
        task();
     return 0;
}
