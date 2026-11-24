n=int(input())
l=eval(input())
l.sort(reverse=True)
a=0
for i in l:
    if i==0:
        continue
    a+=n//i
    n%=i
print(a)