//codeforces problem no.158A
//codeforces problem name:Next Round
#include <iostream>
using namespace std;
int main()
{
int n,x,i,y[100],next=0;
    cin>>n>>x;

    for(i=0; i<n; i++)
    {
        cin>>y[i];
    }
    for(i=0; i<n; i++)
    {
        if(y[i]>0 && y[i]>=y[x-1])
            next++;
    }
    cout<<next<<'\n';
    return 0;
}
