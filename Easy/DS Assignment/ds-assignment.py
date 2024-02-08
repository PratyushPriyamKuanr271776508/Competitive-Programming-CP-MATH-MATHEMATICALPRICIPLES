#code

t = int(input())
for _ in range(t):
    N, K = [int(x) for x in input().split()]
    if N >= K:
        print(-1)
        continue
    print(*[1 for i in range(1, N+1)])