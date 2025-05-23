#pragma once

#include "apicontroller.h"

class BPQSController final : public APIController
{
    Q_OBJECT
    Q_DISABLE_COPY_MOVE(BPQSController)

public:
    using APIController::APIController;

private slots:
    void announcePortAction();
};
