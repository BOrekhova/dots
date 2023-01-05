h, m, t = int(input()), int(input()), int(input())
hours = t // 60 % 24 
minutes = t % 60
print(f"{(h + hours) % 24}:{(m + minutes) % 60}")