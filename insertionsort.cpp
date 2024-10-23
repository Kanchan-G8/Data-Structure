#include<iostream>
using namespace std;
void Insertion(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       for(int j=i+1;j>0;j--)
       {
         if(arr[j]<arr[j-1])
         {
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
         }
         else
         {
            break;
         }
       }
    }

    cout<<"Your sorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
  int n;
  cout<<"Enter the number of elements you wanted to sort:";
  cin>>n;
  int arr[n];
  cout<<"Enter the array elements:";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  Insertion(arr,n);
}