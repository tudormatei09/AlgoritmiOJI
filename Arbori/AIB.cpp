#include "iostream"
#include "vector"
#pragma GCC optimize("03","unroll-loops")
void update(std::vector<long long int>& AIB, long long int n, long long int index, long long int val) {
    index = index + 1;
    while (index <= n + 1) {
        AIB[index] = AIB[index] + val;
        index = index + (index & (-index));
    }
}

long long int getSum(std::vector<long long int>& AIB, long long int index) {
    long long int sum = 0;
    index = index + 1;
    while (index > 0) {
        sum = sum + AIB[index] *1LL;
        index = index - (index & (-index));
    }
    return sum;
}

std::vector<long long int> build(std::vector<int>& v, int n) {
    std::vector<long long int> AIB(n + 2, 0);
    for (int i = 0; i < n; i++) {
        update(AIB, n, i + 1, static_cast<long long int>(v[i]));
    }
    return AIB;
}

signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    std::vector<int> v;
    std::vector<long long int> AIB;
    int n, q;
    std::cin >> n >> q;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        v.push_back(x);
    }
    AIB = build(v, n);
    for (int i = 0; i < q; i++) {
        int st, dr;
        std::cin >> st >> dr;
        long long int sum = 0;
        sum = getSum(AIB, dr) - getSum(AIB, st - 1);
        std::cout << sum << '\n';
    }
    return 0;
}
