#include<iostream>
using namespace std;

using namespace std;
 
void rearrange(int arr[], int n)
{
    for (int i=0; i<n-1; i=i+2)
    {
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    }
 
    if (n & 1)
    {
        for (int i=n-1; i>0; i=i-2)
            if (arr[i] > arr[i-1])
                swap(arr[i], arr[i-1]);
    }
}

void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        printf("%d ", arr[i]);
 
    printf("\n");
}

int main()
{
    int size;
    cin>>size;
    int arr[200];
    cout<<"Enter array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Before rearranging\n";
    printArray(arr, size);
    rearrange(arr, size);
    cout << "After rearranging\n";
    printArray(arr, size);
    return 0;
}