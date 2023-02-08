#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

void rotation(int arr[],int n,int d)
{   d=d%n;
    int g_c_d=gcd(d,n);
    for(int i=0;i<g_c_d;i++)
    {
        int temp=arr[i];
        int j=i;
        while(1)
        {
            int k=j+d;
            if(k>=n)
            {
                k=k-n;
            }
            if(k==i)
            {
                return ;
            }
            arr[j]=arr[k];
        }
        arr[j]=temp;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int d=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"before the rotation of the array is:";
    for (int  i = 0; i < n; i++)
    {
        
        cout<<arr[i]<<" ";
    }
 
    cout<<"after the rotation of the array:";
       rotation(arr,n,d);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
    
    
}