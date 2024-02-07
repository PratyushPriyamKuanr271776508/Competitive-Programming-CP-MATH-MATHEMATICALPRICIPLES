#code
t = int(input())
for _ in range(t):
    N = int(input())
    print(N - N//2 - N//3 - N//5 + N//6 + N//10 + N//15 - N//30)