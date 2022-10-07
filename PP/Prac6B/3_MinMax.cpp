#include<iostream>
using namespace std;

int getMin(int arr[], int n);
int getMax(int arr[], int n);


int main()
{
    int m;	//Declaring size of array
    cout<<"Enter the size of the array: ";
    cin>>m;	//Taking input for size of array
    int arr[m];	//Declaring array
    cout<<"Enter value of "<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<"element "<<i+1<<" : ";
        cin>>arr[i];	//Taking elemental input
    }
    //Print Original Array
    cout<<"Original array : ";
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";	//Printing elements
    }cout<<endl;
    //Printing output
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element of array: " << getMin(arr, n)<<endl;
    cout << "Maximum element of array: " << getMax(arr, n)<<endl;
    return 0;
}
//Function to get minimum
int getMin(int arr[], int n)
{
    return *min_element(arr, arr + n);
}
//Function to get maximum
int getMax(int arr[], int n)
{
    return *max_element(arr, arr + n);
}

