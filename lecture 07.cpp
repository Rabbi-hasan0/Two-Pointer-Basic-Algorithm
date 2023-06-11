/**---------------- Rabbi Hasan ------------------**/
/*Bangladesh University Of Business And Technology*/
/*   At the end Finding different way to solved   */

/**
Today Topic:  Find a triplet such that sum of two equals to third element.
              Using Two Pointer ( C++ )
**/

#include<bits/stdc++.h>
using namespace std;
/* Function Implement */

/** Time complexity->( n^2 ) **/
void solved(int a[],int n)
{
    int flag=0;
    for(int i=0; i<n; i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k)
        {
            int sum=a[j]+a[k];

            if(sum==a[i])
            {
                cout<<a[j]<<' '<<a[k]<<' '<<a[i]<<endl;
                flag=1;
            }
            if(sum<a[i]) k--;
            else j++;
        }
    }
    if(flag==0) cout<<"Not Found"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    //Input a array:
    for(int i=0; i<n; i++)cin>>a[i];
    //sorted array:
    sort(a,a+n);
    //reverse array:
    reverse(a,a+n);
    //call the function:
    solved(a,n);


    return 0;
}
