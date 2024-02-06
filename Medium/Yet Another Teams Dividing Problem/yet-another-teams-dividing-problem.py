#code
t = int(input())
for _ in range(t):
    N, X = [int(x) for x in input().split()]
    ls = [int(x) for x in input().split()]
    ans1 = 0
    for i in range(N):
        if ls[i] > N-X: 
            ans1 += ls[i]
            ls[i] = 1
        else: ls[i] = 0
        
    i = j = 0
    ans = 1
    count = s = freq = 0
    while j < N:
        if ls[j] == 1: 
            count += 1
            s += 1
        while count == 1:
            if ls[i] == 1: count -= 1
            freq += 1
            i += 1
        
        if freq != 0:
            if s == 1: ans = 1
            else: ans *= freq
            freq = 0
        
        j += 1
    
    print(ans1, ans%(10**9+7))
            
            