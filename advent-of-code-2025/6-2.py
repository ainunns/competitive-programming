import sys

expr = []

for line in sys.stdin:
    line = line.rstrip('\n')
    if line == "":
        break
    line = " " + line
    expr.append(line)

lst = len(expr)
opr = [x for x in expr[lst-1] if x != ' ']

expr.pop(lst-1)

r = len(opr)
len = len(expr[0])

ans = 0
nums = []

for i in range(len-1,-1,-1):
    ada = True
    for j in expr:
        if j[i] != ' ':
            ada = False
            break

    if ada:
        if opr[r-1] == '+':
            count = 0
            for num in nums:
                count += num
            ans += count
        elif opr[r-1] == '*':
            count = 1
            for num in nums:
                count *= num
            ans += count
        r -= 1
        nums = []
        continue

    num = 0
    for j in expr:
        if j[i] == ' ':
            continue
        num = 10*num + int(j[i])
    nums.append(num)

print(ans)
