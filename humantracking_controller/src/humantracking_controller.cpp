//  May/2019, ETHZ, Jaeyoung Lim, jalim@student.ethz.ch

#include "humantracking_controller/humantracking_controller.h"

using namespace Eigen;
using namespace std;
//Constructor
HumanTrackingCtrl::HumanTrackingCtrl(const ros::NodeHandle& nh, const ros::NodeHandle& nh_private):
  nh_(nh),
  nh_private_(nh_private),
  geometric_controller_(nh, nh_private) {

  cmdloop_timer_ = nh_.createTimer(ros::Duration(0.01), &HumanTrackingCtrl::CmdLoopCallback, this); // Define timer for constant loop rate
  statusloop_timer_ = nh_.createTimer(ros::Duration(1), &HumanTrackingCtrl::StatusLoopCallback, this); // Define timer for constant loop rate

 
}
HumanTrackingCtrl::~HumanTrackingCtrl() {
  //Destructor
}

void HumanTrackingCtrl::CmdLoopCallback(const ros::TimerEvent& event){
 
}

void HumanTrackingCtrl::StatusLoopCallback(const ros::TimerEvent& event){

}