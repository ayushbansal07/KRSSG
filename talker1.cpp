#include<iostream>
#include<fstream>
#include<vector>
/*#include "ros/ros.h"
#include "std_msgs/Int16.h"*/
using namespace std;

int main(int argc, char **argv)
{
    int temp;
    vector<int> v;

/*    ros::init(argc, argv, "talker1");
    ros::NodeHandle n;
    ros::Publisher chatter_pub = n.advertise<std_msgs::Int16>("Topic_1", 1000);
    ros::Rate loop_rate(10);*/

    ifstream fobj;
    fobj.open("file1.txt");
    while(!fobj.eof())
    {
        fobj>>temp;
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    /*int counti=0;
    while (ros::ok() && counti<v.size())
    {

        std_msgs::Int16 msg;
            msg.data = v[counti];
        ROS_INFO("%d", msg.data);
        chatter_pub.publish(msg);

        ros::spinOnce();
        loop_rate.sleep();
        ++counti;
    }*/

}


