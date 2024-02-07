#code

def findRange(ps, left, right):
    return all(ps[right][i] - ps[left-1][i] <= 1 for i in range(101))

t = int(input())
for _ in range(t):
    N, Q = [int(x) for x in input().split()]
    a = [int(x) for x in input().split()]
    ps = [[0]*(101) for _ in range(N+1)]
    for i in range(N): 
        for j in range(101):
            ps[i+1][j] = ps[i][j] + int(a[i] == j)
    for q in range(Q):
        left, right = [int(x) for x in input().split()]
        v = findRange(ps, left, right)
        print("YES" if v else "NO")
        