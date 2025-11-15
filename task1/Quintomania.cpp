#include <iostream>
#include <vector>
using namespace std;
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int j;
        cin >> j;
        vector <int> m_arr(j);
        for (int m = 0; m < j; m++)
        {
            cin >> m_arr[m];
        }
        bool approve = true;
        for (int k = 1; k < j; k++)
        {
            int dif = abs(m_arr[k] - m_arr[k - 1]);
            if (dif != 5 && dif != 7) {
                approve = false;
                break;
            }
        }
        cout << (approve ? "YES" : "NO") << "\n";
    }
    return 0;
}