/**---------------- Rabbi Hasan ------------------**/
/*Bangladesh University Of Business And Technology*/
/*   At the end Finding different way to solved   */

/**
Today Topic:  Find all triplets with zero sum .
              Using Two Pointer ( C++ )
**/

#include<bits/stdc++.h>
using namespace std;

/* Function Implement */
/** Time complexity->( n^3 ) **/
/*void solved(int a[],int n)
{
  for(int i=0; i<n-2; i++)
  {
    for(int j=i+1; j<n-1; j++)
    {
      for(int k=j+1; k<n; k++)
      {
        if(a[i]+a[j]+a[k]==0)
        {
         cout<<a[i]<<' '<<a[j]<<' '<<a[k]<<endl;
        }
      }
    }
  }
}*/
/** Time complexity->( n^2 ) **/
void solved(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        unordered_set<int>us;
        for(int j=i+1; j<n; j++)
        {
            int sum=-(a[i]+a[j]);
            if(us.find(sum)!=us.end())
            {
                cout<<sum<<' '<<a[i]<<' '<<a[j]<<endl;
            }
            else
                us.insert(a[j]);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n+1];
    //Input a array:
    for(int i=0; i<n; i++)cin>>a[i];
    // Sort a array:
    solved(a,n);
    return 0;
}
