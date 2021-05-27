    i, j = map(int, input().split())
    b = list(map(int, input().split()))
    a = []
    p = 0
    for x in range(i):
        m = []
        for y in range(j):
            m.append(b[p])
            p += 1
        a.append(m)
    o = 0
    t = 0
    l = []
    while o<i*j:
        for x in range(t, j-t):
            l.append(a[t][x])
            o+=1
        if o<i*j:
            for x in range(t+1, i-t):
                l.append(a[x][j - 1-t])
                o+=1
        if o<i*j:
            for x in range(j - 2-t, -1+t, -1):
                l.append(a[i - 1-t][x])
                o+=1
        if o<i*j:
            for x in range(i - 2-t, 0+t, -1):
                l.append(a[x][t])
                o+=1
        t+=1
    for y in l:
        print(y,end=" ")
    print("")

