#!/usr/bin/env python
import rospy
from std_msgs.msg import String
def control():
	pub=rospy.Publisher("motor", String)
	rospy.init_node("motorcontrol")
	while not rospy.is_shutdown():
		s=""
		c=""
		y="ask input"
		print(y)
		s=input(c)
		str = "%s" % s
		rospy.loginfo(str)
		pub.publish(String(str))
		rospy.sleep(1.0)
if __name__ == '__main__':
	try:
		control()
	except rospy.ROSInterruptException:
		pass
