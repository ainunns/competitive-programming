ans = 0

line = input()

pairs = line.split(',')

for pair in pairs:
    pair = pair.strip()
    if pair:
        x,y = pair.split('-')

        a = int(x)
        b = int(y)

        for i in range(a, b+1):
            c = str(i)
            ln = len(c)

            if(ln == 1):
                continue

            half = ln // 2
            fi = c[:half]

            if(ln % 2 == 1 and c[half+1] != '0'):
                continue

            nxt = half + (ln % 2 == 1)
            se = c[nxt:]

            if(fi == se):
                ans += i

print(ans)
