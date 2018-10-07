def bit(n,z,b):
    d=len(z)
    for i in range(d):
        mask = 1<< z[i]-1
        n=(n & ~mask) | ((b<< z[i]) & mask)
    return n

t=int(input())
#print()
for i in range(t):
    n=int(input())
    x=[int(i) for i in input().split()]
    print(bit(n,x,0))