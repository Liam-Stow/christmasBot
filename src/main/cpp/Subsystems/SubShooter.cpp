#include "Subsystems/SubShooter.h"
#include "Robot.h"

SubShooter::SubShooter() : Subsystem("SubShooter") {
  // Copy actuator pointer from robotMap
  m_tlnShooter = Robot::robotMap->tlnShooter;
}

void SubShooter::InitDefaultCommand() {}


// Run the agitator in a given direction, defaults to clockwise
void SubShooter::shoot(double speed) {
  m_tlnShooter->Set(speed);
}


// Stop the agitator from moving
void SubShooter::stop() {
  m_tlnShooter->Set(0);
}