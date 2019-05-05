#include "main.h"

// Defining Controllers
pros::Controller master (CONTROLLER_MASTER);
pros::Controller partner (CONTROLLER_PARTNER);

pros::ADIEncoder Top(Top1, Bottom1, false);
pros::ADIEncoder Bottom(Top2, Bottom2, false);