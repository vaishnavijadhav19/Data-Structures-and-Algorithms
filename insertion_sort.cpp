#include <iostream>
using namespace std;


void insertion_sort(int arr[], int n)
{
   for(int i = 0; i<= n-1; i++)
   {
      int j = i;
      while((j> 0 && arr[j-1]> arr[j]))
      {
         int temp = arr[j-1];
         arr[j-1] = arr[j];
         arr[j] = temp;

         j--;
      }
   }

 cout<<"After insertion sort"<<endl;
   for(int k = 0; k< n; k++)
   {
      cout<<arr[k]<<" ";
   }
}

int main()
{

    int size = 0;
    cout<<"Enter the size of array:"<<endl;
    cin>> size;

    int *ptr = new int(size);

    cout<<"Enter the elements of array:"<<endl;

    for(int i = 0; i< size; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Before insertion sort:"<<endl;
     for(int i = 0; i< size; i++)
    {
        cout<<ptr[i]<<" ";
    }

    cout<<endl;

    insertion_sort(ptr, size);

    return 0;
}