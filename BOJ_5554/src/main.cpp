#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int sec{ 0 };
    for (int i = 0; i < 4; ++i)
    {
        int t;
        cin >> t;

        sec += t;
    }

    auto x = sec / 60;
    cout << x << '\n';

    auto y = sec - 60 * x;
    cout << y << '\n';

    return 0;
}