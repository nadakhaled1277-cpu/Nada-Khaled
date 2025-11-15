#include <iostream>
using namespace std;
int main() {
    int length = 1;
    int n;
    cin >> n;
    while (n != 1){
        if (n % 2 == 0) {
            length++;
            n = n / 2;
        }
        else {
            length++;
            n = 3 * n + 1;
        }
    }
    cout << length;
    return 0;
}