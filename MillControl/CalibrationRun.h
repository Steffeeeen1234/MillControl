#pragma once
//
// Created by roman on 03.12.15.
//

#include "State.h"

class CalibrationRun : public State {
    unsigned long startTime = 0;
    unsigned long stopTime = 0;
    unsigned long updateTime = 0;

public:

    virtual void loop() override;

    virtual void start() override;

#ifdef BREW_BUTTON
    virtual void brewClick() override;
#endif

    virtual void millClick(unsigned char i) override;

    virtual void encoderClick() override;

    unsigned long getRunMillis();

protected:
    virtual void draw() override;

public:
    virtual void stop() override;

};

