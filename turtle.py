import turtle

window = turtle.Screen()
window.bgcolor("lightgreen")

brandon = turtle.Turtle()
brandon.fillcolor('blue') 
brandon.pencolor('blue')
brandon.pensize(3)


def drawsq(t, s):
    for i in range(4):
        t.forward(s)
        t.left(90)

for i in range(1,180):
    brandon.left(360/i)
    drawsq(brandon, 50)
