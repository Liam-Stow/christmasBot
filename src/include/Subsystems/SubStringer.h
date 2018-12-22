/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "Commands/Subsystem.h"
#include <WPILib.h>

using namespace std;

class SubStringer : public frc::Subsystem {
private:
  shared_ptr<DoubleSolenoid> _solStringer;

 public:
  SubStringer();
  void InitDefaultCommand() override;
  void startShooting();
  void stopShooting();
};
