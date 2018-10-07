#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n,m,i;
    cin>>n>>m;
    int a[n]={0};
    while(m--)
    {
        int x,y,val;
        cin>>x>>y>>val;
        for(i=x-1;i<=y-1;i++)
        {
            a[i]+=val;
        }
        
        
        
    }
    int max=*max_element(a,a+n);
    cout<<max<<endl;
    return 0;
}
