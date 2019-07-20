#include  <xc.h>
#include "pins.h"

void initCell(void) {
  CELL_CLK_TRIS  = 0;
  CELL_DATA_TRIS = 1;
  CELL_CLK_LAT = 0;    // clk is nornmally low
}

uint16 getWeightFromCell(void) {
/* Initialize and start the deivce. */
hx711_init(&hx711, &pin_d2_dev, &pin_d3_dev, 1.0, 0.0);
hx711_start(&hx711);

/* Read a few samples from the device. */
hx711_read(&hx711, &weight_a_128, hx711_channel_gain_a_128_t);
hx711_read(&hx711, &weight_a_64, hx711_channel_gain_a_64_t);
hx711_read(&hx711, &weight_b_32, hx711_channel_gain_b_32_t);

/* Print the samples. */
std_printf(OSTR("weight_a_128: %f, weight_a_64: %f, weight_b_32: %f\r\n"),
           weight_a_128,
           weight_a_64,
           weight_b_32);

/* Stop the deivce. */
hx711_stop(&hx711);

}
