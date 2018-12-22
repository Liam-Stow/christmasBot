/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/CmdResetRoller.h"
#include "Robot.h"

CmdResetRoller::CmdResetRoller() {
  // Use Requires() here to declare subsystem dependencies
  Requires(Robot::subRevealer.get());
}

// Called just before this Command runs the first time
void CmdResetRoller::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void CmdResetRoller::Execute() {
  Robot::subRevealer->reset();

}

// Make this return true when this Command no longer needs to run execute()
bool CmdResetRoller::IsFinished() { return false; }

// Called once after isFinished returns true
void CmdResetRoller::End() {
  Robot::subRevealer->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdResetRoller::Interrupted() {
  End();
}
