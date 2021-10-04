z = int(input())
en1 = input()
en1 = en1.split()
en1 = map(int, en1)
en1 = list(en1)
x = int(input())
en2 = input()
en2 = en2.split()
en2 = map(int, en2)
en2 = list(en2)

en1 = sorted(en1)
en2 = sorted(en2)

cont = 0
girl = 0
boy = 0



while (boy < z and girl < x) :
	if en2[girl] - en1[boy] > 1:
		boy = boy + 1

	elif en1[boy] - en2[girl] > 1:
		girl = girl + 1

	else:
		boy = boy + 1
		girl = girl + 1
		cont = cont + 1

print(cont)