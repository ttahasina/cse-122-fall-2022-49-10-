//the func that named max1() & min1  received an interegers array and returns max number value..
#include <iostream>
using namespace std;
int max1(int arr[],int x)
{
    int i,max;
    max=arr[0];
    for(i=1; i<x; i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int min1 (int arr[],int x)
{
    int i,mini;
    mini=arr[0];
    for(i=1; i<x; i++)
    {
        if(mini>arr[i])
        {
            mini=arr[i];
        }
    }
    return mini;

}
int main()
{
    int x;
    cin>>x;
    int arr[x],i;
    for(i=0; i<x; i++)
    {
        cin>>arr[i];
    }
    cout << "maximum: "<< max1(arr,x) << endl;
    cout<< "minimum: "<<min1(arr,x) << endl;
    return 0;
}
