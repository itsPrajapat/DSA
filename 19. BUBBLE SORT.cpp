// // (2)BUBBLE SORT = Reapetedly swap two adjacent elements if they are in wrong order

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     int counter = 1;

//     while (counter < n)
//     {
//         for (int i = 0; i < n - 1; i++)
//         {

//             if (arr[i] > arr[i + 1])
//             {
//                 int temp = arr[i + 1];
//                 arr[i + 1] = arr[i];
//                 arr[i] = temp;
//             }
//         }
//         counter++;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    string arr[n];

    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1;

    while (counter < n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                string temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
        counter++;
    }

    cout << "Sorted strings:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// void bubble(int a[], int n)
// {
//     int comparison = 0;
//     int swap = 0;

//     int i, j, temp;
//     for (i = 0; i < n; i++)
//     {
//         for (j = i + 1; j < n; j++)
//         {
//             comparison++;
//             if (a[j] < a[i])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//                 swap++;
//             }
//         }
//     }

//     cout << "Number of comparisons : " << comparison << endl;
//     cout << "Number of swaps : " << swap << endl;
// }
// int main()
// {
//     int n = 250;

//     int a[250] = {250, 249, 248, 247, 246, 245, 244, 243, 242, 241, 240, 239, 238, 237, 236, 235, 234, 233, 232, 231, 230, 229, 228, 227, 226, 225, 224, 223, 222, 221, 220, 219, 218, 217, 216, 215, 214, 213, 212, 211, 210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 196, 195, 194, 193, 192, 191, 190, 189, 188, 187, 186, 185, 184, 183, 182, 181, 180, 179, 178, 177, 176, 175, 174, 173, 172, 171, 170, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160, 159, 158, 157, 156, 155, 154, 153, 152, 151, 150, 149, 148, 147, 146, 145, 144, 143, 142, 141, 140, 139, 138, 137, 136, 135, 134, 133, 132, 131, 130, 129, 128, 127, 126, 125, 124, 123, 122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97, 96, 95, 94, 93, 92, 91, 90, 89, 88, 87, 86, 85, 84, 83, 82, 81, 80, 79, 78, 77, 76, 75, 74, 73, 72, 71, 70, 69, 68, 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41, 40, 39, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

//     // Start measuring time
//     clock_t start = clock();

//     bubble(a, n);

//     // Stop measuring time and calculate duration
//     clock_t stop = clock();
//     double duration = ((double)(stop - start) * 1000.0) / CLOCKS_PER_SEC;

//     cout << "Time taken by bubble sort: " << duration << " milliseconds" << endl;

//     return 0;
// }