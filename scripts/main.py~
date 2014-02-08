#!/usr/bin/env python
import rospy
import serial
from std_msgs.msg import String
data=""
def callback(d):
	rospy.loginfo(rospy.get_name() + "%s" % d)
	try:
		ser = serial.Serial('/dev/ttyACM0', baudrate='9600', bytesize=serial.EIGHTBITS, parity='N', stopbits=1, timeout=None, 	    			xonxoff=False, rtscts=False, writeTimeout=None, dsrdtr=False, interCharTimeout=None)
	except serial.serialutil.SerialException:
		raise
	ser.isOpen()
	ser.write(str(d))
def main():
	rospy.init_node("main", anonymous=True)
	rospy.Subscriber("motor", String, callback)
	rospy.spin()
if __name__ == '__main__':
	main()
