#include <ros/ros.h>

int main(int argc, char **argv)
{
	ros::init(argc,argv,"hello_ros");

	//establish as a ROS node	
	ros::NodeHandle nh;

	ROS_INFO_STREAM("Hello, ROS!");
}
