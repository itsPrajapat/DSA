// Given a sorted and rotated array A of N distinct elements which is rotated at some point, and given an element key. The task is to find the index of the given element key in the array A.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = low + high / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[low] < arr[mid])
        {
            // it means left array is sorted
            if (arr[low] <= key && key <= arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                high = mid + 1;
            }
        }
        else
        {
            // right array is sorted
            if (key >= arr[mid] && key <= arr[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return 0;
}