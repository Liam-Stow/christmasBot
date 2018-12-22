#include "OI.h"
#include "Robot.h"
#include "Commands/CmdShoot.h"
#include "Commands/CmdReveal.h"
#include "Commands/CmdResetRoller.h"
#include "Commands/CmdShootString.h"
#include "Commands/CmdFeed.h"


OI::OI() {
  controller.reset(new Joystick(0));

  btnShoot.reset(new JoystickButton(controller.get(), btnID_shoot));
  btnShoot->WhileHeld(new CmdShoot(1));

  btnReveal.reset(new JoystickButton(controller.get(), btnID_reveal));
  btnReveal->WhileHeld(new CmdReveal());

  btnResetReveal.reset(new JoystickButton(controller.get(), btnID_resetReveal));
  btnResetReveal->WhileHeld(new CmdResetRoller());

  btnShootString.reset(new JoystickButton(controller.get(), btnID_shootString));
  btnShootString->WhileHeld(new CmdShootString());

  btnFeed.reset(new JoystickButton(controller.get(), btnID_feed));
  btnFeed->WhileHeld(new CmdFeed());

}

shared_ptr<Joystick> OI::getController() {
  return controller;
}
