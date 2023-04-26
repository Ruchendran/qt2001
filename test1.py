s=int(input("give:"))
q=[]
f=[]
for i in range(s-1):
	f=[]
	for i1 in range(2):
		 ff=int(input("lis:"))
		 f=f+[ff]
	f=sorted(f)
	q=q+[f]
qq=0
sou=[]
for i in range(len(q)):
	if(q[i] not in sou):
		sou=sou+[q[i]]
ff=len(q)-len(sou)		

qq=qq+ff
q=sou
for i in range(len(q)):
	if(q[i][0]%2==0):
		if(q[i][1]==q[i][0]+1 or q[i][1]==q[i][0]+2):
			qq=qq
		else:
			qq=qq+1
			
	elif(q[i][0]%2!=0):
		if(q[i][1]==q[i][0]+2 or q[i][1]==q[i][0]-1):
			qq=qq
		else:
			qq=qq+1
			
if(qq==0):
	print(-1)
else:
	print(qq)
print(q)
		
		