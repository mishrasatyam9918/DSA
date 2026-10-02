 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
int arr[10];
cout<<"enter the elements of the array \n";
for(int i = 0;i<10;i++)
{
    cin>>arr[i];

}
//approach 1

sort(arr,arr+10);
cout<<"output by approach 1 \nminimum is "<<arr[0]<<endl;
cout<<"maximum is "<<arr[9]<<endl;
//approach 2
int min = arr[0];
int max = arr[0];
for(int i = 0;i<10;i++)
{
    if(arr[i]>arr[0])
    {max=arr[i];
    }
    if(arr[i]<arr[0])
    {
        min = arr[i];
    }
}
cout<<"output by approach 2\n maximum is "<<max<<endl<<"minimum is "<<min<<endl;

//approach 3 4 as per copy in another file




}