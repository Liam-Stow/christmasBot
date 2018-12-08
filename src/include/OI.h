#pragma once

#include <WPILib.h>
#include "Commands/CmdShoot.h"

using namespace std;

/*
 * OI holds mappings of controller inputs to commands. If the driver wants
 * to change button assignments, this should be the only place that changes
 * need to be made.
 */

enum buttonID {
  btnID_shoot = 1
};

class OI {
private:
  shared_ptr<Joystick> controller;

  shared_ptr<JoystickButton> btnShoot;

public:
  OI();
  shared_ptr<Joystick> getController();

};
