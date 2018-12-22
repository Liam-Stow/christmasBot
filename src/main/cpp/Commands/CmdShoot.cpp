/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Commands/CmdShoot.h"
#include "Robot.h"
#include <WPILib.h>
#include <iostream>

CmdShoot::CmdShoot(double speed) {
  // Use Requires() here to declare subsystem dependencies
  Requires(Robot::subShooter.get());
  Requires(Robot::subFeeder.get());

  m_speed = speed;
  SmartDashboard::PutNumber("shooter speed", speed);
}

// Called just before this Command runs the first time
void CmdShoot::Initialize() {
  cout << "running shooter" << endl;
}

// Called repeatedly when this Command is scheduled to run
void CmdShoot::Execute() {
  m_speed = SmartDashboard::GetNumber("shooter speed", m_speed);
  Robot::subFeeder->startFeeding();
  Robot::subShooter->shoot(m_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool CmdShoot::IsFinished() { 
  return false; 
}

// Called once after isFinished returns true
void CmdShoot::End() {
  Robot::subShooter->stop();
  Robot::subFeeder->stopFeeding();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CmdShoot::Interrupted() {
  End();
}
