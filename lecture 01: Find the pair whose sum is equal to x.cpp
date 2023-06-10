/**---------------- Rabbi Hasan ------------------**/
/*Bangladesh University Of Business And Technology*/
/*   At the end Finding different way to solved   */

/**
Today topic:  Find the pair whose sum is equal to x .
              Using Two Pointer ( C++ )
**/

#include<bits/stdc++.h>
using namespace std;
/* Function Implement */
int value1,value2;
bool solved(int a[],int n, int found)
{
  int i=0;
  int j=n-1;
  while(i<j)
  {
    int sum=a[i]+a[j];
    if(sum==found)
    {
      value1=a[i];
      value2=a[j];
      return true;
    }
    if(sum<found)i++;
    else j--;
  }
  return false;
}

int main()
{
  int n;cin>>n;
  int a[n+1];

  //Input a array:
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }

  // Sort a array:
  sort(a,a+n);

  //Finding sum value input
  int found;
  cin>>found;

  bool ans=solved(a,n,found);
  if(ans==true)
  {
    cout<<"Yes"<<endl;
    cout<<value1<<' '<<value2<<endl;
  }
  else cout<<"No"<<endl;

  return 0;
}
