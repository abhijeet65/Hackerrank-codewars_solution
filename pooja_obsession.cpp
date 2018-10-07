#include<bits/stdc++.h> 
using namespace std; 
  
long long numberOfDigits(long long n) 
{ 
    if (n == 1) 
        return 1; 
    long double d = (n * log10(1.6180339887498948)) - 
                    ((log10(5)) / 2); 
  
    return ceil(d); 
} 
int main() 
{ 
    unsigned long long i,t,start,end,j;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    
    for (i = 1; i <=LONG_LONG_MAX; i++) 
    {
       long long int ans=numberOfDigits(i);
        if(ans==n)
        {
            start=i;
            break;
        }
    }
        for(j=i+1;j<=LONG_LONG_MAX;j++)
        {
            long long int ans2=numberOfDigits(j);
            if(ans2<=n)
                end=j;
            if(ans2>n)
                break;
                
        }
        cout<<start+end<<endl;
    }
  
    return 0; 
} 