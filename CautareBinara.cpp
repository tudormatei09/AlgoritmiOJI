#include "bits/stdc++.h"

int cb(std::vector<int>&v,int n){
    int st = 0;
    int dr = v.size();
    while(st<=dr){
       int mij = (st+dr)/2;
       if(v[mij] == n){
          return true;
       }
       if(v[mij] < n){
           st = mij+1;
       }
       if(v[mij] > n){
          dr = mij - 1;
       }
    }
  return false;
}

int main(){
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n;
    std::cin >> n;
    std::vector<int>v;
    for(int i = 0; i < n; i++){
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    std::sort(v.begin(),v.end());
    int m;
    std::cin >> m;
    for(int i = 0; i < m; i++){
    int x;
        std::cin >> x;
        std::cout << cb(v,x) << " ";
    }

     return 0;
}
