import os
from time import sleep

os.system('python timer.py')
#print "nothing"
sleep(10)
#print "timeup"
pkill -f timer
