t=int(input())
d=0
v=[]
for i in range(t):
 x=int(input())
 if d<=0:
  d+=x
  v.append(i+1)
 else:
  d-=x

for i in v:
 print(i)


