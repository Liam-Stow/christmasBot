/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/CmdShootString.h"
#include "Robot.h"

#include <iostream>

CmdShootString::CmdShootString() {
  Requires(Robot::subShooter.get());
}

// Called just before this Command runs the first time
void CmdShootString::Initialize() {
  cout << "Running stringer" << endl;

  Robot::subStringer->startShooting();
}

// Called repeatedly when this Command is scheduled to run
void CmdShootString::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool CmdShootString::IsFinished() { return false; }

// Called once after isFinished returns true
void CmdShootString::End() {
  Robot::subStringer->stopShooting();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShootString::Interrupted() {
  End();
}
