#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key)
{
    int l=0;
    int r=n-1;
    while(l<=r) //to ensure that the element actually exists.
    {
        int mid=(l+r)/2;
        if(key==a[mid])
            return mid;
        else if(key>a[mid])
            l=mid+1;
        else
            r=mid-1;
    }
    return -1;
}

int main()
{
    int a[]={1,2,3,4,5,6};
    int n=sizeof(a)/sizeof(a[0]);//sizeofarray/size of one element.s
    cout<<"key"<<endl;
    int key;
    cin>>key;
    int index=binary_search(a,n,key);
    if(index!=-1)
        cout<<"index is : "<<index<<endl;
    else
        cout<<"element not found."<<endl;
    return 0;
}
