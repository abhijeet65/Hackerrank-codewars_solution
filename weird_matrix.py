def rr(e):
    s = str(e)
    l = len(s)
    n = (s[l - 1] + s[:l - 1])
    return n


def lr(e):
    s = str(e)
    l = len(s)
    n = (s[1:l] + s[0])
    return n


def fun():
    t = int(input())
    while (t > 0):
        n=int(input())
        l=list(map(str,input().split()))
        p=0
        mat=[]
        i=0
        j=0
        for i in range(int(n)):
            new=[]
            j=0
            for j in range(n):
                if(i!=j):
                    new.append('0')
                else:
                    y = int(l[p])
                    new.append(y)
                    p+=1
            mat.append(new)

        i=0
        j=0
        for i in range(n):
            l = i - 1
            r = i + 1
            while (l >= 0):
                mat[i][l] = lr(mat[i][l + 1])
                l = l - 1
            while (r < n):
                mat[i][r] = rr(mat[i][r - 1])
                r = r + 1

        msum=0
        for j in range(n):
            msum+=(int(mat[0][j])+int(mat[n-1][j]))
        for i in range(1,n-1):
            msum+=(int(mat[i][0])+int(mat[i][n-1]))
        print(msum%((10**9)+7))
        t=t-1
fun()
#i=0
#j=0
# for i in range(n):
#     j=0
#     for j in range(n):
#         print(mat[i][j],end='\t')
#     print()




