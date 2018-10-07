#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

 int count(int x, int y) 
{ 
    return(floor(sqrt(y))-ceil(sqrt(x))+1); 
} 
   
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
   int x,y;
        cin>>x>>y;
        
        int res=count(x,y);
        cout<<res<<endl;
    }
    
    return 0; 
} 