def f(n):
 fac=1
 while n>0:
  fac*=n
  n-=1
 return fac

t=int(input())
for i in range(t):
 print(f(int(input())))

