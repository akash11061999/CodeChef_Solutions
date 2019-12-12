# cook your dish here
import math

t=int(input())
while t>0:
    n=int(input())
    k=int(input())
    res=0
    if k%n==0:
        res=0
    elif k>n:
        tmp=k%n
        if tmp<(math.ceil(n/2)-1):
            res=2*tmp
        elif tmp==math.ceil(n/2):
            res=(n-1)
        else:
            res=(n-tmp)*2
    else:
        if(k<(math.ceil(n/2)-1)):
            res=2*k
        elif( k==math.ceil(n/2) ):
            res=(n-1)
        else:
            res=(n-k)*2
    print(res)
    t=t-1
        