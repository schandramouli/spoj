def merge(l,r):
 res=[]
 i,j=0,0
 while i<len(l) and j<len(r):
  if l[i]>=r[j]:
   res.append(l[i])
   i+=1
  else:
   res.append(r[i])
   j+=1
 res+=l[i:]
 res+=r[j:]
 return res

def mergesort(list):
 if len(list)<2:
  return list
 else:
  k=len(list)//2
  l=mergesort(list[:k])
  r=mergesort(list[k:])
  return merge(l,r)

print(mergesort([1,4,2,5,3,4,6,2,4]))

