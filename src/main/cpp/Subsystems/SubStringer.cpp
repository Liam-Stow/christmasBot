/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/SubStringer.h"
#include "Robot.h"

SubStringer::SubStringer() : Subsystem("ExampleSubsystem") {
  _solStringer = Robot::robotMap->solStringer;
}

void SubStringer::InitDefaultCommand() {

}

void SubStringer::startShooting() {
  _solStringer->Set(true);
}

void SubStringer::stopShooting() {
  _solStringer->Set(false);
}