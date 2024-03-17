#include <iostream>
#include <vector>

using namespace std;

/*
    Problem 2: Superman's Chicken Rescue
    This time complexity is O(nlogn).
    This memory complexity is O(n);
*/
int main() {
    unsigned int n, k;
    cin >> n >> k;

    vector<unsigned int> v(n);
    for (size_t i = 0; i < v.size(); i++) cin >> v[i];

    unsigned int maximumChicken = 0;
    for (unsigned int i = 0; i < n; i++) {
        unsigned int upper_idx = upper_bound(v.begin() + i, v.end(), v[i] + k - 1) - v.begin();
        maximumChicken = max(maximumChicken, upper_idx - i);
    }

    cout << maximumChicken << "\n";
    return 0;
}
