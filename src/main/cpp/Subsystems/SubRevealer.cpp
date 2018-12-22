/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/SubRevealer.h"
#include "Robot.h"
#include <iostream>

SubRevealer::SubRevealer() : Subsystem("SubRevealer") {
  //Get a local copy of motor contoller pointer from robot map
  m_tlnRevealer = Robot::robotMap->tlnRevealer; 
}

void SubRevealer::InitDefaultCommand() { }

void SubRevealer::reveal() {
  cout << "Roller Forward" << endl;
  m_tlnRevealer->Set(1);
}

void SubRevealer::reset() {
  cout << "Roller Backward" << endl;
  m_tlnRevealer->Set(-1);
}

void SubRevealer::stop() {
  m_tlnRevealer->Set(0);
}