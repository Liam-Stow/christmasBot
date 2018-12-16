#include "OI.h"

OI::OI() {
  controller.reset(new Joystick(0));

  btnShoot.reset(new JoystickButton(controller.get(), btnID_shoot));
  btnShoot->WhileHeld(new CmdShoot());

  btnReveal.reset(new JoystickButton(controller.get(), btnID_reveal));
  btnReveal->WhenPressed(new CmdReveal(3));

  btnResetReveal.reset(new JoystickButton(controller.get(), btnID_resetReveal));
  btnResetReveal->WhenPressed(new CmdReveal(3, true));

}

shared_ptr<Joystick> OI::getController() {
  return controller;
}
