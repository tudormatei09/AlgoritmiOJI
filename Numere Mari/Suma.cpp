const int base = 10;
inline static void BIG_SUM() {
    if (a.size() > b.size()) {
       a.swap(b);
    }
    std::reverse(a.begin(),a.end());
    std::reverse(b.begin(),b.end());
    int carry = 0;
    for (int i = 0; i < a.size(); i++) {
        carry = carry + a[i] + b[i];
        res.emplace_back(carry % base);
        carry = carry / base;
    }
    for (int i = a.size(); i < b.size(); i++) {
        carry = carry + b[i];
        res.emplace_back(carry % base);
        carry = carry / base;
    }
    while (carry != 0) {
        res.emplace_back(carry % base);
        carry = carry / base;
    }
    std::reverse(res.begin(),res.end());
}
