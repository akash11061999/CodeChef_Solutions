# cook your dish here
t=int(input())
while t>0:
    n,k=map(int, input().split())
    #print(n,k)
    tmp=n-1
    start=k-1
    x=start//tmp
    res=((((x+1)*start) - (((x*(x+1))//2)*tmp) )%(1000000007))
    print(res)
    t=t-1