#include<bits/stdc++.h>
using namespace std;

#define w(t) int t; cin>>t; while(t--)
#define ab(x) (x>0)?x:-x;
#define vt vector<int>
int multiply(int a[],int x,int size);


void factorial(int n)
{
    int a[100];
    a[0]=1;
    
    int x,size=1,i;
    
    for(x=2;x<=n;x++)
    size=multiply(a,x,size);
    
    for(i=size-1;i>=0;i--)
    cout<<a[i];
}

int multiply(int a[],int x,int size)
{
       int carry=0,prod,i;
       
       for( i=0;i<size;i++)
       {
           prod=(a[i]*x)+carry;
           a[i]=prod%10;
           carry=prod/10;
           }    
           while(carry)
           {
               a[size]=carry%10;
               carry=carry/10;
               size++;
           }
        return size;           
}



int main()
{
 int i,n;
cin>>n;

factorial(n);
}

