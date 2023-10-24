#include <iostream>
#include <vector>

unsigned long long catalan(int n) {
    if (n <= 1) {
        return 1;
    }

    std::vector<unsigned long long> cat_num(n + 1, 0);
    cat_num[0] = 1;
    cat_num[1] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cat_num[i] += cat_num[j] * cat_num[i - j - 1];
        }
    }

    return cat_num[n];
}

int main() {
    int n = 10;

    if (n < 0) {
        std::cout << "Please add a valid number" << std::endl;
        return 1;
    }

    std::cout << "The first " << n << " terms of Catalan sequence are: ";
    for (int i = 0; i < n; i++) {
        std::cout << catalan(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}