/**---------------- Rabbi Hasan ------------------**/
/*Bangladesh University Of Business And Technology*/
/*   At the end Finding different way to solved   */

/**
Today Topic:  Find the pair in Array Whose sum is closest to X .
              Using Two Pointer ( C++ )
**/


#include<bits/stdc++.h>
using namespace std;
/* Function Implement */
void solved(int a[],int n, int x)
{
  int l=0,ax=0;
  int r=n-1;
  int in1,in2;
  int mini=INT_MAX;

  while(l<r)
  {
    int sum=a[l]+a[r];
    if(abs(sum-x)<mini)
    {
      in1=l;
      in2=r;
      mini=abs(sum-x);
      ax= sum;
    }
    if(sum<x) l++;
    else r--;
  }
  cout<<a[in1]<<' '<<a[in2]<<endl<<"The sum of: "<<ax<<endl;
}

int main()
{
  int n;cin>>n;
  int a[n+1];

  //Input a array:
  for(int i=0; i<n; i++)cin>>a[i];

  // Sort a array:
  sort(a,a+n);

  //Finding sum value input
  int x;
  cin>>x;
  solved(a,n,x);
  return 0;
}