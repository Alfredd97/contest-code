entry = input()
entry = entry.split()
n = int(entry[0])
t = int(entry[1])
s = input()

for i in range(t):
	s = s.replace('BG','GB')

print(s)