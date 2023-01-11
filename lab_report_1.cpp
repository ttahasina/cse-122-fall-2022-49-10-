// A func that named f1()  received an intereger array and returns average value..
#include <iostream>
using namespace std;
double f1(int arr[],int x)
{
    int sum=0,i;
    i=0;
    while(i<x)
    {
        sum+=arr[i];
        i++;
    }
    double average=sum/x;
    return average;
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
    double avg = f1(arr,x);
    cout<<"Average is " <<avg<<endl;
    return 0;
}
