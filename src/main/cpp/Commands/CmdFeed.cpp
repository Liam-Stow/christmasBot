/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/CmdFeed.h"
#include "Robot.h" 

#include <iostream>

CmdFeed::CmdFeed() {
  // Use Requires() here to declare subsystem dependencies
  Requires(Robot::subFeeder.get());
}

// Called just before this Command runs the first time
void CmdFeed::Initialize() {
  Robot::subFeeder->startFeeding();
  cout << "Running feeder" << endl;
}

// Called repeatedly when this Command is scheduled to run
void CmdFeed::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool CmdFeed::IsFinished() { return false; }

// Called once after isFinished returns true
void CmdFeed::End() {
  Robot::subFeeder->stopFeeding();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdFeed::Interrupted() {
  End();
}
