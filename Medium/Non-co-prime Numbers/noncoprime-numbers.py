#code
primeNumbers = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97]
t = int(input())
for _ in range(t):
    N = int(input())
    a = [int(x) for x in input().split()]
    ans = N
    for prime in primeNumbers:
        prevIdx = -1
        for i in range(N):
            if a[i]%prime == 0: 
                if prevIdx == -1: 
                    prevIdx = i
                    continue
                ans = min(ans, i - prevIdx - 1)
                prevIdx = i
    print(ans if ans != N else -1)
        