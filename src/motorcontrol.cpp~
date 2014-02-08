#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sstream"
char c[20];
int main(int argc, char **argv)
{
   ros::init(argc, argv, "motorcontrol");
   ros::NodeHandle n;
   ros::Publisher pub= n.advertise<std_msgs::String>("motor",1000);
   ros::Rate loop_rate(10);
   while(ros::ok())
    {
      std::cin>>c;
      std_msgs::String direction;
      direction.data=c;
      ROS_INFO("%s", direction.data.c_str());
      pub.publish(direction);
      ros::spinOnce();
      loop_rate.sleep();
    }
   return 0;
}
