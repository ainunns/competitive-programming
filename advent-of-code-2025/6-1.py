import sys

expr = []

for line in sys.stdin:
    line = line.strip()
    if not line:
        break
    
    arr = line.split(' ')
    expr.append([x for x in arr if x != ''])

ans = 0
long = len(expr)
len = len(expr[0])

for i in range(len):
    op = expr[long-1][i]

    if op == '+':
        count = 0 
        for j in range(long):
            if expr[j][i] == '+':
                continue
            count += int(expr[j][i])
        ans += count
    elif op == '*':
        count = 1
        for j in range(long):
            if expr[j][i] == '*':
               continue
            count *= int(expr[j][i])
        ans += count

print(ans)

