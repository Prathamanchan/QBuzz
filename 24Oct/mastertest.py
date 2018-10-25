import subprocess
from time import sleep
import os
import sys
#from playsound import playsound

script = "timer.py"
os.system("python timer.py &")
sleep(10)

#playsound('Buzzer.mp3')
os.system("mpg123 Buzzer.mp3")
subprocess.call(["pkill", "-9", "-f", script])
sys.exit(0)
