/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Student                                          */
/*    Created:      Wed Dec 11 2024                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    19, 20          
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

void df(float secs){
  Drivetrain.setDriveVelocity(30,pct);
  Drivetrain.setTurnVelocity(30,pct);
  Drivetrain.drive(forward);
  wait(secs,sec);
  Drivetrain.stop();
  
}

void db(float secs){
  Drivetrain.setDriveVelocity(30,pct);
  Drivetrain.setTurnVelocity(30,pct);
  Drivetrain.drive(reverse);
  wait(secs,sec);
  Drivetrain.stop();
  
}

void tl(float secs){
  Drivetrain.setDriveVelocity(30,pct);
  Drivetrain.setTurnVelocity(30,pct);
  Drivetrain.turn(left);
  wait(secs,sec);
  Drivetrain.stop();
}

void tr(float secs){
  Drivetrain.setDriveVelocity(30,pct);
  Drivetrain.setTurnVelocity(30,pct);
  Drivetrain.turn(right);
  wait(secs,sec);
  Drivetrain.stop();
}

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
  
  df(.6);
  tl(.46);
  df(3);
  tl(.4);
  db(.8);
  tl(.55);
  df(2);
  tr(.15);
  df(4);
  db(.4);
  tl(.5);
  df(2);
  tl(.2);
  df(3);
  tr(.5);
  df(4);
  db(4);
  tr(.1);
  db(10);
}
