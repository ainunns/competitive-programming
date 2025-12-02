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
            
            for j in range(1, half+1):
                idx = j
                temp = c[:j]
                flag = True

                while idx < ln:
                    now = c[idx:(idx+j)]
                    if int(temp) != int(now):
                        flag = False
                        break
                    idx += j

                if flag:
                    ans += i
                    break

print(ans)
