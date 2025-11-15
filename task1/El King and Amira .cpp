#include <iostream>
using namespace std;
int main() {
    int sum = 0;
    int n;
    cin >> n;
    bool odd = false;
    for (int i = 1; i <= n; i++){
        if (n % i == 0)
            sum++;
    }
    if (sum % 2 != 0)
        odd = true;
    cout << (odd ? "YES" : "NO");
    return 0;
}

