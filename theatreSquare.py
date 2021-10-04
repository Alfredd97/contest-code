inp = input()
inp = inp.split()
m = int(inp[0])
n = int(inp[1])
a = int(inp[2])


a1 = m/a if(m % a == 0) else m/a + 1
a1 = int(a1)
a2 = n/a if(n % a == 0) else n/a + 1
a2 = int(a2)

print(a1*a2)