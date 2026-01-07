#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    float avg = 0;
    avg = sum / n;
    cout << "The sum of number is:" << sum << endl;
    cout << "The average of the numbers is :" << avg;
    return 0;
}
