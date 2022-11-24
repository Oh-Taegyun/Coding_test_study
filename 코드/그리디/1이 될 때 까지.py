N, K = map(int,input().split())
ans = 0

while True:
    if N == 1:
        break
    elif N % K != 0:
        N -= 1
    else:
        N //= K
    ans += 1
    
print(ans)