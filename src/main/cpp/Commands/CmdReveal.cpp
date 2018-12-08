#include "Commands/CmdReveal.h"
#include "Robot.h"

CmdReveal::CmdReveal(double seconds, bool backward) {
  // Declare subsystem dependencies
  Requires(Robot::subRevealer.get());
  m_seconds = seconds;
}

// Called just before this Command runs the first time
void CmdReveal::Initialize() {
  SetTimeout(m_seconds);
  if (m_backward) {
    Robot::subRevealer->reset();
  } else {
    Robot::subRevealer->reveal();
  }
}

// Called repeatedly when this Command is scheduled to run
void CmdReveal::Execute() {}

// Make this return true when this Command no longer needs to run execute()
bool CmdReveal::IsFinished() { 
  return IsTimedOut(); 
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
