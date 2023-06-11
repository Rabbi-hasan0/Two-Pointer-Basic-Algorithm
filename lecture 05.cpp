/**---------------- Rabbi Hasan ------------------**/
/*Bangladesh University Of Business And Technology*/
/*   At the end Finding different way to solved   */

/**
Today Topic:  Find a triplet that sum to a given value .
              Using Two Pointer in ( C++ )
**/

#include<bits/stdc++.h>
using namespace std;
/* Function Implement */

/** Time complexity->( n^2 ) **/
void solved(int a[],int n,int x)
{
  int flag=0;
    for(int i=0; i<n-1; i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=a[i]+a[j]+a[k];

            if(sum==x)
            {
                cout<<a[i]<<' '<<a[j]<<' '<<a[k]<<endl;
                flag=1;
            }
            if(sum>x) k--;
            else j++;
        }
    }
    if(flag==0) cout<<"Triplate Not Found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    //Input a array:
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    int x;
    cin>>x;
    solved(a,n,x);
    return 0;
}
