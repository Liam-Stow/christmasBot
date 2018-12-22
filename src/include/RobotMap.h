#pragma once

#include <WPILib.h>
#include <ctre/Phoenix.h>

using namespace std;

/*
 * The RobotMap is a wiring map of all the components on the robot. It contains
 * the creation of all physical components present on the robot.
 * Ideally, if wiring changes on the robot, this is the only place that changes
 * need to be made.
 */

// DriveBase Actuator IDs
enum CanID {
    can_srxDriveBaseFrontLeft     = 8,
    can_srxDriveBaseFrontRight    = 7,
    can_srxDriveBaseBackLeft      = 6,
    can_srxDriveBaseBackRight     = 5,
};

// PWM Ports on RIO
enum PwmID {
    pwm_tlnFeeder   = 0,
    pwm_tlnRevealer = 1,
    pwm_tlnShooter  = 2,
};

// Pnuematics control module connections
enum PcmID {
    pcm_solStringerForward = 1,
    pcm_solStringerReverse = 2,
};

class RobotMap {
public:
    RobotMap();

    // DriveBase Actuators
    shared_ptr<WPI_TalonSRX> srxDriveBaseLeft;
    shared_ptr<WPI_TalonSRX> srxDriveBaseRight;
    shared_ptr<WPI_TalonSRX> srxDriveBaseLeftSlave;
    shared_ptr<WPI_TalonSRX> srxDriveBaseRightSlave;

    // Superstructure Actuators
    shared_ptr<Talon> tlnShooter;
    shared_ptr<Talon> tlnRevealer;
    shared_ptr<Talon> tlnFeeder;
    shared_ptr<DoubleSolenoid> solStringer;   // Shoots silly string
};

