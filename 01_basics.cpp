#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int N=100010;
int n;
int f[N];

void quick_sort(int l,int r){
    if(l>=r)return ;
    int x=f[l+r>>1],i=l-1,j=r+1;
    while (i<j)
    {
        do i++ ;while(f[i]<x);
        do j--; while(f[j]>x);
        if(i<j)swap(f[i],f[j]);
    }
    quick_sort(l,j);
    quick_sort(j+1,r);
}

int main(){

    cin>>n;

    for(int i=0;i<n;i++)cin>>f[i];

    quick_sort(0,n-1);

    for(int i=0;i<n;i++)cout<<f[i]<<' ';
    return 0;
}