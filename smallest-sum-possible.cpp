#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>

using namespace std;

unsigned long long solution(const vector<unsigned long long>& arr) {
    unsigned long long prev_gcd = arr[0];
    for (auto i : arr) {
        prev_gcd = gcd(i, prev_gcd);
    }
    return arr.size() * prev_gcd;
}

int main() {
    const vector<unsigned long long> vec = {9, 6, 12};
    cout << solution(vec);
}
