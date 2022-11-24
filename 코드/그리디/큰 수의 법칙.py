n, m, k = map(int, input().split())
data = list(map(int, input().split()))
ans = 0

data.sort(reverse=True)
while True:
    if m == 0:
        break
    
    for _ in range(k):
        ans += data[0]
        m -= 1
    ans += data[1]
    m -= 1

print(ans)

