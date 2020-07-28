n,m,a=map(int,input().split())
rows=n//a
if n%a!=0:
	rows=rows+1
cols=m//a
if m%a!=0:
	cols=cols+1
print(rows*cols)
