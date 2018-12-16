#pragma once

#include <WPILib.h>


using namespace std;

/*
 * OI holds mappings of controller inputs to commands. If the driver wants
 * to change button assignments, this should be the only place that changes
 * need to be made.
 */

enum buttonID {
  btnID_shoot       = 1,
  btnID_feed        = 2,
  btnID_reveal      = 3,
  btnID_resetReveal = 4,
  btnID_shootString = 5,
};

class OI {
private:
  shared_ptr<Joystick> controller;

  shared_ptr<JoystickButton> btnShoot;
  shared_ptr<JoystickButton> btnFeed;
  shared_ptr<JoystickButton> btnReveal;
  shared_ptr<JoystickButton> btnResetReveal;
  shared_ptr<JoystickButton> btnShootString;


public:
  OI();
  shared_ptr<Joystick> getController();

};
