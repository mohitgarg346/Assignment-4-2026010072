#include <iostream>
using namespace std;
int main()
{
    int q[20], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter queue elements: ";
    for(int i = 0; i < n; i++)
        cin >> q[i];
    int half = n / 2;
    cout << "Interleaved Queue: ";
    for(int i = 0; i < half; i++)
    {
        cout << q[i] << " ";
        cout << q[i + half] << " ";
    }
    return 0;
}
