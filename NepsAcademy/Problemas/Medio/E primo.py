a = int(input())
s = a
div = 0
for divisor in range(1, a):
    if a % divisor == 0:
        div = div + 1
        if div > 1:
          break
if div > 1 or s == 1:
  print("N")
else:
  print("S")
