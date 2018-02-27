r1=int(input())
r2=int(input())
for n in range(r1,r2):
   if(n>1):
       for i in range(2,n):
          if(n%i)==0:
             break
          else:
             print(n)
             break
