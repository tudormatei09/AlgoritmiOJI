#include "bits/stdc++.h"
#define ll long long
ll n,k;
inline static void task(){
    std::cin >> n >> k;
    std::unordered_map<ll,ll>freq;
    freq[0] = 1;
    ll sum = 0;
    ll cnt = 0;
    for(int i = 1; i <= n; i++){
            ll x;
            std::cin >> x;
            sum = sum + x;
            if(freq.find(sum-k)!=freq.end()){
                    cnt = cnt + freq[sum-k];
            }
       freq[sum]++;
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
