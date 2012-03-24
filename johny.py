t=int(input())
a=[]
l=[]
ls=0
rs=0
s=0
for i in range(t):
 a[i:]=[int(input())]

for k in range(t):
 max=a[0]
 for j in range(t):
  if a[j]>max: 
   max=a[j]
   ind=j
 if ls<=rs:
  l[s:]=[ind+1]
  s+=1
  a[ind]=-1
  ls+=max
 else:
  a[ind]=-1
  rs+=max
l.sort()
for k in range(s): 
 print(l[k])

