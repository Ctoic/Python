# Here we are creting a star using turtle library
#save and run the program

from turtle import *
bgcolor('black')

color('blue', 'yellow')
begin_fill()
while True:
    forward(400)
    left(370)
    if abs(pos()) < 1:
        break
end_fill()
done()
