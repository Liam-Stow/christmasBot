#include "RobotMap.h"

RobotMap::RobotMap() {
    // Point DriveBase actuators to new objects
    srxDriveBaseLeft.reset(new WPI_TalonSRX(can_srxDriveBaseFrontLeft));
    srxDriveBaseRight.reset(new WPI_TalonSRX(can_srxDriveBaseFrontRight));
    srxDriveBaseLeftSlave.reset(new WPI_TalonSRX(can_srxDriveBaseBackLeft));
    srxDriveBaseRightSlave.reset(new WPI_TalonSRX(can_srxDriveBaseBackRight));

    // Point superstructure actuators to new objects
    tlnShooter.reset(new Talon(pwm_tlnShooter));
    tlnRevealer.reset(new Talon(pwm_tlnRevealer));
    tlnFeeder.reset(new Talon(pwm_tlnFeeder));
    solStringer.reset(new DoubleSolenoid(pcm_solStringerForward, pcm_solStringerReverse));
}