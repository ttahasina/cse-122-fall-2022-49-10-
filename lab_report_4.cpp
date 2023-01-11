//A function names S1() that receives an integer array and search a specific data from the array
#include <iostream>
using namespace std;
int S1(int arr[],int n, int search_data)
{
    int index = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==search_data)
        {
            index=i;
            break;
        }
    }
    return index;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int toSearch;
    cin >> toSearch;
    int index = S1(arr, n, toSearch);
    if (index != -1)
    {
        cout << "found in " << index + 1 << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;

}
