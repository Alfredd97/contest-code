for _ in range(int(input())):
	
	n = int(input())
	arr = []

	for i in range(n):
		a = list(map(int,input().split()))
		ma = 0

		for j in range(a[0]):
			ma = max(a[j+1]-j, ma)

		arr.append((ma,a[0]))

	arr.sort()
	ans = 0
	s = 0

	for x in range(n):
		ans = max(ans, arr[x][0] - s)
		s += arr[x][1]
	print(ans+1)


