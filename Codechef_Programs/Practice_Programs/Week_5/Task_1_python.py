n, m = map(int, input().split())
special = set(list(map(int, input().split())))
array = []
for _ in range(m):
    f, p, s = map(str, input().split())
    f = int(f)
    p = int(p)
    array.append([f, p, s])

array = sorted(array, key = lambda x:x[1], reverse  = True)

for f, p, s in array:
    if f in special:
        print(s)
        
for f, p, s in array:
    if f not in special:
        print(s)