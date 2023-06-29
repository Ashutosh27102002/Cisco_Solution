#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {11, 20, 2, 10};
    int arrlength = sizeof(arr) / sizeof(arr[0]);
    int hit, oppo;
    int i = 0;
    int sum = 0;
    int j = arrlength - 1;
    while (i < j)
    {
        if (abs(arr[i] - arr[j]) >= abs(arr[i + 1] - arr[j - 1]))
        {
            hit = max(arr[i], arr[j]);
        }
        else
        {
            if (arr[i+1]>arr[j-1])
            {
                hit=arr[j];
            }
            else{
                hit=arr[i];
            }
            
            // hit = min(arr[i], arr[j]);
        }
        sum = sum + hit;
        if (hit == arr[i])
        {
            i++;
        }
        else
        {
            j--;
        }
        // opponent
        oppo = max(arr[i], arr[j]);
        if (oppo == arr[i])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << sum;

    return 0;
}

