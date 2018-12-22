#include "Commands/CmdReveal.h"
#include "Robot.h"

#include <iostream>

CmdReveal::CmdReveal() {
  // Declare subsystem dependencies
  Requires(Robot::subRevealer.get());
}

// Called just before this Command runs the first time
void CmdReveal::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void CmdReveal::Execute() {
    Robot::subRevealer->reveal();
}

// Make this return true when this Command no longer needs to run execute()
bool CmdReveal::IsFinished() { 
  return false;
}

// Called once after isFinished returns true
void CmdReveal::End() {
  Robot::subRevealer->stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdReveal::Interrupted() {
  End();
}
