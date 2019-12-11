#include "ros/ros.h"                                                                                                        
#include <iostream>                                                                                                        
using namespace std;                                                                                                        
#include "std_msgs/Int32.h"                                                                                                
                                                                                                                           
int main(int argc, char **argv)                                                                                            
                                                                                                                           
{                                                                                                                          
  ros::init(argc, argv, "node");                                                                                            
                                                                                                                           
  ros::NodeHandle n;                                                                                                        
  ros::Publisher chatter_pub = n.advertise<std_msgs::Int32>("/topic", 1000);                                                
  ros::Rate loop_rate(1);                                                                                                  
  int a;                                                                                                                    
                                                                                                                           
loop_rate.sleep();  
for(int k=0;k<100000;k++){}                                                                                                
  while (cin >> a)                                                                                                          
                                                                                                                           
  {std_msgs::Int32 msg;                                                                                                    
                                                                                                                           
                                                                                                                           
    for(int i=0;i<100000;i++){}                                                                                            
    msg.data = a;                                                                                                          
                                                                                                                           
                                                                                                                           
for(int i=0;i<100000;i++){}                                                                                                
chatter_pub.publish(msg);                                                                                                  
                                                                                                                           
                                                                                                                           
    loop_rate.sleep();                                                                                                      
  }                                                                                                                       
ros::spinOnce();                                                                                                           
  return 0;                                                                                                                
}  
