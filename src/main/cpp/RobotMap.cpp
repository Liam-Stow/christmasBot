#include "RobotMap.h"

RobotMap::RobotMap() {
    // Point DriveBase actuators to new objects
    srxDriveBaseLeft.reset(new WPI_TalonSRX(canID_srxDriveBaseFrontLeft));
    srxDriveBaseRight.reset(new WPI_TalonSRX(canID_srxDriveBaseFrontRight));
    srxDriveBaseLeftSlave.reset(new WPI_TalonSRX(canID_srxDriveBaseBackLeft));
    srxDriveBaseRightSlave.reset(new WPI_TalonSRX(canID_srxDriveBaseBackRight));

    // Point superstructure actuators to new objects
    tlnShooter.reset(new Talon(pwmPort_spcShooter));
}