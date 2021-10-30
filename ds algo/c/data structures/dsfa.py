import  math
a,b,c = map(int, input().split())

s = int((a+b+c)/2)

area = float(math.sqrt((s-a)*(s-b)*(s-c)))
print(area)