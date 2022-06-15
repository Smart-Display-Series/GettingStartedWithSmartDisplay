import serial
from time import sleep

"""
  The name of Com Port varies according to the operating system, For example:
      Raspberry Pi: /dev/ttyUSBn  (e.g. /dev/ttyUSB0)
      Windows: COMn (e.g. COM22)
"""
# Raspberry Pi / Rasbian
# COM_PORT = '/dev/ttyUSB0'
COM_PORT = 'COM22'

v000 = bytes.fromhex('7B06000600006251')
v050 = bytes.fromhex('7B0600060032E384')
v100 = bytes.fromhex('7B060006006463BA')

ser = serial.Serial(COM_PORT, 115200)
while True:
    ser.write(v000)
    sleep(1.0)
    ser.write(v050)
    sleep(1.0)
    ser.write(v100)
    sleep(1.0)
    ser.write(v050)
    sleep(1.0)