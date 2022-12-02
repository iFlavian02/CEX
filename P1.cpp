#include<iostream>
using namespace std;
const int N = 25;
int a[N][N], n,i,j;
int main()
{cin>>n;
for(j=1;j<=n;j++)
    for(i=1;i<=n;i++)
    a[i][j]=m+1-j;
for(i=1;i<=n;i++)
a[i][i]=0;

for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        cout<<a[i][j]<<" ";
cout<<endl;
return 0;}
