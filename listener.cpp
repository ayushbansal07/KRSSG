#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
#include "ros/ros.h"
#include "std_msgs/Int16.h"
using namespace std;

vector<int> v;
ofstream fobj;
void chatterCallback(const std_msgs::Int16 msg)
{
    ROS_INFO("I heard: [%d]", msg.data);
    int temp;
    temp=msg.data;
    v.push_back(temp);
    sort(v.begin(),v.end());
    fobj.open("output.txt");
    for(int i=0;i<v.size();i++)
    {
        fobj<<v[i]<<' ';
    }

}

int main(int argc, char **argv)
{

  ros::init(argc, argv, "listener");
  ros::NodeHandle n;
  ros::Subscriber sub1 = n.subscribe("Topic_1", 1000, chatterCallback);
  ros::Subscriber sub2 = n.subscribe("Topic_2", 1000, chatterCallback);
  ros::spin();

  return 0;
}
