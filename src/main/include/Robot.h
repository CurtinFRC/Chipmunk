// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <units/length.h>
#include <frc/Joystick.h>


class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

 private:
  frc::Joystick driverJoystick{0}; // Creates a new joystick named driverJoystick, at port 0

  double driveDeadzone = 0.05;
  double twistDeadzone = 0.05;

  double maxForwardSpeed = 2.23; // in meters per second
  double maxRotationSpeed = 1;
  double distanceBetweenWheels = 0.64;
  // 2.23 m/s

  

};