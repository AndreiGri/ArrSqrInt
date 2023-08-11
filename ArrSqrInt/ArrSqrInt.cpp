#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    system("chcp 1251 > nul");
    int n;
    const int k = 10;
    cout << "Введите натуральное число: ";
    cin >> n;
    int arr[k];
    int i = 0;
    while (i < k) {
        arr[i] = n * n;
        cout << arr[i] <<" ";
        i++;
        n++;
    }
    system("pause > nul");
    return 0;

}
