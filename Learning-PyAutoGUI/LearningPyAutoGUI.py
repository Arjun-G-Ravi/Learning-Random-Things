import pyautogui as pg
from time import sleep


sleep(1.5)
print(pg.position())

sleep(.5)
pg.press("win")
sleep(.5)
pg.leftClick(450,760,1,1)
sleep(1)
pg.hotkey('ctrl','t')
sleep(1)
pg.typewrite("https://web.whatsapp.com/")
sleep(1)
pg.press("enter")

sleep(14)
pg.leftClick(207,335,1,1)
sleep(1)
for i in range(5):
    pg.typewrite("Hello 1")
    sleep(.5)
    # pg.press("enter")
    sleep(.5)
    pg.typewrite("Hello2")
    sleep(.5)
    # pg.press("enter")
    sleep(.5)
    pg.typewrite("Hello 3")
    sleep(.5)
    # pg.press("enter")
    sleep(.5)
