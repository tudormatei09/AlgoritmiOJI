#include "bits/stdc++.h"
#define ll long long
ll n,k;
std::map<ll,ll>m;
inline static void task(){
    std::cin >> n;

    ll sum = 0;
    ll cnt = 0;
    m[0]++;
    for(int i = 1; i <= n; i++){
          ll x;
          std::cin >> x;
         sum = sum + x%n;
          sum = (sum+n)% n;
         cnt = cnt + m[sum];
         m[sum]++;

    }
    std::cout << cnt;
}
signed main(){
     std::ios_base::sync_with_stdio(false);
     std::cin.tie(0);
     std::cout.tie(0);
     task();

     return 0;
}
