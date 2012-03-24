l=[]
for i in range(5):
 x=input()
 for j in range(len(x)-2):
  if x[j]=='F' and x[j+1]=='B' and x[j+2]=='I':
   l.append(i+1)
   break
 
if len(l)==0: print('HE GOT AWAY!')
else:
 for i in l:
  print(i,end=' ')

