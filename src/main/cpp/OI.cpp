#include "OI.h"
#include "Robot.h"
#include "Commands/CmdShoot.h"
#include "Commands/CmdReveal.h"
#include "Commands/CmdShootString.h"
#include "Commands/CmdFeed.h"


OI::OI() {
  controller.reset(new Joystick(0));

  btnShoot.reset(new JoystickButton(controller.get(), btnID_shoot));
  btnShoot->WhileHeld(new CmdShoot());

  btnReveal.reset(new JoystickButton(controller.get(), btnID_reveal));
  btnReveal->WhenPressed(new CmdReveal(3));

  btnResetReveal.reset(new JoystickButton(controller.get(), btnID_resetReveal));
  btnResetReveal->WhenPressed(new CmdReveal(3, true));

  btnShootString.reset(new JoystickButton(controller.get(), btnID_shootString));
  btnShootString->WhenPressed(new CmdShootString());

  btnFeed.reset(new JoystickButton(controller.get(), btnID_feed));
  btnFeed->WhenPressed(new CmdFeed());

}

shared_ptr<Joystick> OI::getController() {
  return controller;
}
