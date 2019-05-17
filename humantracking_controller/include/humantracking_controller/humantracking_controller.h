//  May/2019, ETHZ, Jaeyoung Lim, jalim@student.ethz.ch

#ifndef HUMANTRACKING_CONTROLLER_H
#define HUMANTRACKING_CONTROLLER_H

#include <ros/ros.h>
#include <Eigen/Dense>
#include "geometric_controller/geometric_controller.h"

using namespace std;
using namespace Eigen;
class HumanTrackingCtrl
{
  private:
    ros::NodeHandle nh_;
    ros::NodeHandle nh_private_;
    ros::Timer cmdloop_timer_, statusloop_timer_;

    void CmdLoopCallback(const ros::TimerEvent& event);
    void StatusLoopCallback(const ros::TimerEvent& event);

    geometricCtrl geometric_controller_;

  public:
    HumanTrackingCtrl(const ros::NodeHandle& nh, const ros::NodeHandle& nh_private);
    virtual ~ HumanTrackingCtrl();
};


#endif
