#include <iostream>
using namespace std;

void Bubble_sort(int Arr[], int n)
{

    for(int i = n-1; i>= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(Arr[j]> Arr[j+1])
            {
                int temp = Arr[j+1];
                Arr[j+1] = Arr[j];
                Arr[j] = temp;
            }
        }
    }

    cout<<"After Bubble sort:"<<endl;

    for(int k = 0; k < n; k++)
    {
        cout<< Arr[k]<<" ";

    }
    

}

int main()
{

    int arr[] =  {13,46,24,52,20,9};

    int size = sizeof(arr)/ sizeof(arr[0]);


    cout<<"Before Bubble sort"<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }

    cout<<endl;
    Bubble_sort(arr, size);


    return 0;
}