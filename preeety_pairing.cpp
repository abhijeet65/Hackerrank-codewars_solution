#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    int r = round(sqrt(n));
    int c;
    if (r>=sqrt(n))
        c = r;
    else
        c=r + 1;
    for(int j=0;j<c;++j) 
    {
        for(int i=j; i<n;i+=c)
            cout << str[i];
        cout << ' ';
    }
    return 0;
}
