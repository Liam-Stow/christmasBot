/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/SubStringer.h"
#include "Commands/CmdStopString.h"
#include "Robot.h"

SubStringer::SubStringer() : Subsystem("ExampleSubsystem") {
  _solStringer = Robot::robotMap->solStringer;
  stopShooting();
}

void SubStringer::InitDefaultCommand() {
  SetDefaultCommand(new CmdStopString());
}

void SubStringer::startShooting() {
  _solStringer->Set(DoubleSolenoid::kForward);
}

void SubStringer::stopShooting() {
  _solStringer->Set(DoubleSolenoid::kReverse);
}