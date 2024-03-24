#include <iostream>
using namespace std;


void selection_sort(int Arr1[], int n)
{
   

    for(int i = 0; i < n-1; i++)
    {
       int mini = i;
       for(int j = i+1; j < n; j++)
       {
          if(Arr1[j]< Arr1[mini])
          {
               mini = j;
          }
       }

       int temp = Arr1[mini];
       Arr1[mini] = Arr1[i];
       Arr1[i] = temp;
    }


    cout<<"After selection sort:"<<endl;
    for(int k = 0; k< n; k++)
    {
        
        cout<< Arr1[k]<<" ";
    }

    


}

int main()
{
    int arr[] = {13,46,24,52,20,9};

    int size = sizeof(arr)/ sizeof(arr[0]);

    cout<<"Before selection sort:"<<endl;

    for(int i = 0; i< size; i++)
    {
        
        cout<<arr[i]<<" ";
    }

    cout<< endl;
    selection_sort(arr, size);

    
  


    return 0;
}