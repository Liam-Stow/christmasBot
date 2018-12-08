#pragma once

#include <Commands/Subsystem.h>
#include <WPILib.h>

using namespace std;

class SubShooter : public frc::Subsystem {
 private:
  shared_ptr<Talon> m_tlnShooter;

 public:
  SubShooter();
  void InitDefaultCommand() override;
  void shoot(double speed = 0.6);
  void stop();
};
