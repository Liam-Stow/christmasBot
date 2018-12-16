/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/SubFeeder.h"
#include "Robot.h"

SubFeeder::SubFeeder() : Subsystem("SubFeeder") {
  _tlnFeeder = Robot::robotMap->tlnFeeder;
}

void SubFeeder::InitDefaultCommand() {

}

void SubFeeder::startFeeding() {
  _tlnFeeder->Set(1);
}

void SubFeeder::stopFeeding() {
  _tlnFeeder->Set(0);
}
