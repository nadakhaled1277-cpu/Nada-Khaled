#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;

    cin >> num1 >> num2;

    int min = num1;
    int max = num2;

    if (max < num1) {
        swap(max, min);
    }

        long long int sum = ((max * (max + 1)) / 2) - (((min - 1) * (((min - 1)) + 1)) / 2);
        cout << sum << endl;

        
        long long int even_sum = 0;
        long long int odd_sum = 0;

        for (int i = min; i <= max; i++)
        {
            if (i % 2 == 0) {
                even_sum += i;
            }
            else {
                odd_sum += i;
            }
        }

        cout << even_sum << endl;
        cout << odd_sum << endl;
        
        

    return 0;
}



