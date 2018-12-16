/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include <WPILib.h>

using namespace std;

class SubFeeder : public frc::Subsystem {
 private:
  shared_ptr<Talon> _tlnFeeder;

 public:
  SubFeeder();
  void InitDefaultCommand() override;
  void startFeeding();
  void stopFeeding();
};
