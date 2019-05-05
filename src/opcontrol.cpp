#include "main.h"

void opcontrol() {
  while (true) {
    // printf("%d, %d\n", Top.get_value(), Bottom.get_value());
    printf("Sensor Value: %d\n", adi_digital_read(8));
  }
}
