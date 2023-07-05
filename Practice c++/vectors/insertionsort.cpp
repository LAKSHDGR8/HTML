#include<iostream>
//#define MAX_SIZE 100;
using namespace std;


void enter_elements(int arr[],int size)
{
    //cin>>size;
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }
}

void insertion_sort(int arr[], int size)
{
    int temp;
    for(int i=1;i<size;i++)
    {
        temp = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            //arr[j]=arr[j+1]; THIS IS WROONG>
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}

void print_array(int arr[],int size)
{
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int size;
    cout<<"Enter the size of the array";
    cin>>size;
    //int array[MAX_SIZE];
    int* array= new int[size];
    enter_elements(array,size);
    print_array(array,size);
    insertion_sort(array,size);
    print_array(array,size);

    delete[] array;

    return 0;
}