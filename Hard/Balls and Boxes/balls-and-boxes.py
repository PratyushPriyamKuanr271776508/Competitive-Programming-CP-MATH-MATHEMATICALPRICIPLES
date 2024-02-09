#code
MOD = 10**9+7
fact = [1] * 1002
for i in range(1, 1002):
    fact[i] = i*fact[i-1]
    fact[i] %= MOD
    
t = int(input())
for _ in range(t):
    N, K = [int(x) for x in input().split()]
    s, ans = -1, 0
    for i in range(1, K+1):
        ans += s*(fact[K]//(fact[K-i]*(fact[i])))*fact[N-i]
        s = -s
    print((fact[N]+ans)%MOD)
        
