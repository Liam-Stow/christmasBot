#include "OI.h"

OI::OI() {
  controller.reset(new Joystick(0));

  btnShoot.reset(new JoystickButton(controller.get(), btnID_shoot));
  btnShoot->WhileHeld(new CmdShoot());
}

shared_ptr<Joystick> OI::getController() {
  return controller;
}
