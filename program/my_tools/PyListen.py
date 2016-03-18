
import sys
import tos
import time
import threading

def printDate():
  curTime = time.asctime(time.localtime(time.time()))
  return curTime
  
def lineFeedProc():
  #print printDate()
  global isRunning
  if (isRunning == False): return

  '''
  print ""
  t = threading.Timer(10.0, lineFeedProc)
  t.start()
   '''

AM_OSCILLOSCOPE = 0x93
isRunning = True 

if '-h' in sys.argv:
    print "Usage:", sys.argv[0], "serial@/dev/ttyUSB0:57600"
    sys.exit()

am = tos.AM()

sys.argv[0] = "-comm serial@COM11:115200"

strData = ""

lineFeedProc()

while True:
  try :
    p = am.read()
    '''
    print "AM :", format(p.type, '02X'), \
          "GR :", format(p.group, '02X'), \
          "LEN :", format(p.length, '02X')
    '''

    dataLen = range(p.length)

    for i in dataLen :
      strData = strData + " " + format(p.data[i], '02X') # print hex

    print strData, "  ", printDate()



    strData =""
    print ""

  except KeyboardInterrupt :
    break

  except :
    print "except"







