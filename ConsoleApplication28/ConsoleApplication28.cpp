#include <iostream>
using namespace std;

void findMax(int arr[], int n, int& maxValue)
{
    maxValue = arr[0];
    for (int i = 1; i < n; i++) 
    { 
        if (arr[i] > maxValue) 
        {
            maxValue = arr[i];   
        }
    }
}
void findMin(int arr[], int n, int& minValue)
{
    minValue = arr[0]; 
    for (int i = 1; i < n; i++)
    { 
        if (arr[i] < minValue)
        {
            minValue = arr[i];   
        }
    }
}
void Sort(int arr[], int n) 
{
    for (int i = 1; i < n; i++) 
    {
        int key = arr[i]; 
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
  
    int arr1[] = { 34, 7, 23, 32, 5 };
    int n = sizeof(arr1) / sizeof(arr1[0]);

   
    int maxValue;
    findMax(arr1, n, maxValue);
    cout << "Max number " << maxValue << endl;

    
    int minValue;
    findMin(arr1, n, minValue);
    cout << "Min number " << minValue << endl;
    Sort(arr1, n);

   
    cout << "Sort mass ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
   
}

