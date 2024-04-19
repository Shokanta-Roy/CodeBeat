#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[100];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // check both side;
        int diffIndex = -1;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
            {
                diffIndex = i + 1;
                break;
            }
        }

        // check first and last;
        if (diffIndex == -1)
        {
            if (arr[0] != arr[1])
            {
                diffIndex = 1;
            }
            else if (arr[n - 1] != arr[n - 2])
            {
                diffIndex = n;
            }
        }

        cout << diffIndex << endl;
    }

    return 0;
}
