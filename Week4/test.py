import pyautogui as py

# print(py.position())
py.moveTo(841, 1049)
py.sleep(2)
py.click()
py.write("Notepad")
py.moveTo(601, 350, duration=2)
py.doubleClick()
py.sleep(5)
py.write("Finally it's work")
