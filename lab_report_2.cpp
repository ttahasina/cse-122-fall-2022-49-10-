//A func that named f2()  received an interegers array and returns multiplication value..
#include <iostream>
using namespace std;
long long int f2(int arr[],int y)
{
    long long int multiplication=1;
    for(int i=0; i<y; i++)
    {
         multiplication= multiplication*arr[i];
    }
    return multiplication;
}
int main()
{
    int y;
    cin>>y;
    int arr[y],i;
    for(i=0; i<y; i++)
    {
        cin>>arr[i];
    }
    cout<<"Multiplication value is: "<< f2(arr, y);
    return 0;
}
