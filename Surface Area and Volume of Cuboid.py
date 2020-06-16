t = int(input())

while(t):
    l,b,h = map(int,input().split())
    
    print( 2*(l*b + b*h + h*l) ,end=" ")
    print(l*b*h)
    t = t-1
