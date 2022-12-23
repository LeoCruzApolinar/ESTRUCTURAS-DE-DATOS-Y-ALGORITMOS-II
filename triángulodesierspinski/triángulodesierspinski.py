import turtle
import random

# Establecer turtle y pantalla
t = turtle.Turtle()
s = turtle.Screen()

# Establecer velocidad de lapi y color del fondo
t.speed(0)
s.bgcolor("white")

# Establecer tres puntos para formar un triángulo equilátero
t.penup()
t.goto(-100, -50)
t.pendown()
t.goto(100, -50)
t.goto(0, 100)
t.goto(-100, -50)

# Establecer un cuarto punto fuera del triángulo
t.penup()
t.goto(-200, -200)

# Lanzar dado y mover cuarto punto
for i in range(1000):
  dado = random.randint(1, 3)
  if dado == 1:
    t.goto((t.xcor() + -100) / 2, (t.ycor() + -50) / 2)
  elif dado == 2:
    t.goto((t.xcor() + 100) / 2, (t.ycor() + -50) / 2)
  else:
    t.goto((t.xcor() + 0) / 2, (t.ycor() + 100) / 2)
  t.dot()

# Mantener ventana abierta hasta que el usuario la cierre
turtle.exitonclick()