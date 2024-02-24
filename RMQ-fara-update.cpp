///->RMQ implementare fara Update    https://cses.fi/problemset/task/1647
#include "iostream"
#include "vector"
#include "cmath"
#define ll long long int
#pragma GCC optimize("03","unroll-loops")
std::vector<ll> v;
class RMQ {
private:
    std::vector<std::vector<ll>> mat;

public:
    RMQ(const std::vector<ll>& v) {
        int n = v.size();
        int k = log2(n) + 1;
        mat.resize(n, std::vector<ll>(k));
        for (int i = 0; i < n; i++) {
            mat[i][0] = v[i];
        }
        for (int j = 1; (1 << j) <= n; j++) {
            for (int i = 0; i + (1 << j) - 1 < n; i++) {
                mat[i][j] = std::min(mat[i][j - 1], mat[i + (1 << (j - 1))][j - 1]);
            }
        }
    }

    int query(int left, int right) {
        int k = log2(right - left + 1);
        return std::min(mat[left][k], mat[right - (1 << k) + 1][k]);
    }
};

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    ll n, q;
    std::cin >> n >> q;
    for (int i = 0; i < n; i++) {
        ll x;
        std::cin >> x;
        v.push_back(x);
    }

    RMQ rmq(v);

    for (int i = 0; i < q; i++) {
        ll st, dr;
        std::cin >> st >> dr;
        std::cout << rmq.query(st - 1, dr - 1) << '\n';
    }

    return 0;
}
