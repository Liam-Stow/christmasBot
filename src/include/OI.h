#pragma once

#include <WPILib.h>
#include "Commands/CmdShoot.h"
#include "Commands/CmdReveal.h"

using namespace std;

/*
 * OI holds mappings of controller inputs to commands. If the driver wants
 * to change button assignments, this should be the only place that changes
 * need to be made.
 */

enum buttonID {
  btnID_shoot       = 1,
  btnID_reveal      = 2,
  btnID_resetReveal = 3
};

class OI {
private:
  shared_ptr<Joystick> controller;

  shared_ptr<JoystickButton> btnShoot;
  shared_ptr<JoystickButton> btnReveal;
  shared_ptr<JoystickButton> btnResetReveal;


public:
  OI();
  shared_ptr<Joystick> getController();

};
