import turtle

myTurtle = turtle.Turtle()
myWin = turtle.Screen()

def draw(myTurtle, length):
    if length > 0:
        myTurtle.forward(length)
        myTurtle.left(120)
        myTurtle.right(20)
        myTurtle.left(180)
        draw(myTurtle, length-1)

colors = (
        '#006699',
        )

for color in colors:
  myTurtle.pencolor(color)
  draw(myTurtle, 100)
  
myWin.exitonclick()