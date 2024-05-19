n = int(input())
a = list(map(int,input().split()))
ball_size = [2**i for i in a]

def remaining_balls(N, ball_sizes):
    emp = []
    for i in range(N):
        emp.append(ball_sizes[i])
        while len(emp) > 1:
            if emp[-2] != emp[-1]:
                break
            else:
                s = emp[-2] + emp[-1]
                emp.pop()
                emp.pop()
                emp.append(s)
    return len(emp)

print(remaining_balls(n, ball_size))