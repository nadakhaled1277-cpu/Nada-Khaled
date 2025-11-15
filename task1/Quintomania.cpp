#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << "enter the size of melody \n";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << "enter the size of the " << i << " melody\n";

        int j;
        cin >> j;
        vector <int> m_arr (j);
        for (int m = 0; m < j; m++)
        {
            cout << "enter the " << m << " range of the " << i << " melody\n";
            cin >> m_arr[m];
        }
        bool approve = true;
        for (int k = 1; k < j; k++)
        {
            int dif = abs(m_arr[k] - m_arr[k-1]);
            if (dif != 5 && dif != 7) {
                approve = false;
                break;
            }
        }

        cout << (approve ? "YES" : "NO") << "\n";

    }
    return 0;
}