import math
from turtle import*
def hearta(k):
 return 15*math.sin(k)**3
def heartb(k):
 return 12*math.cos(k)-5*\
math.cos(2*k)-2*\
math.cos(3*k)-\
math.cos(4*k)
speed(0)
bgcolor("cyan")
for i in range(5000):
 goto(hearta(i)*20,heartb(i)*20)
for j in range(5):
 color("pink")
goto(1,1)
done()
