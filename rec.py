a=[0]
max=500000
for i in range(1,max+1):
 if a[-1]-i<=0 or a[-1] in a:
  a.append(a[-1]+i)
 else: a.append(a[-1]-i)
t=int(input())
while t>0:
 t-=1
 k=int(input())
 print(a[k])

