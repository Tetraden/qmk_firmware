//RGB_MATRIX_EFFECT(wasd)
//#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS
//
//// alphas = color1, mods = color2
//bool wasd(effect_params_t* params) {
//    RGB_MATRIX_USE_LIMITS(led_min, led_max);
//
//    for (uint8_t i = led_min; i < led_max; i++) {
//        RGB_MATRIX_TEST_LED_FLAGS();
//        rgb_matrix_set_color(i, 0, 0, 0);
//    }
//
//    HSV hsv  = rgb_matrix_config.hsv;
//    RGB colour1 = rgb_matrix_hsv_to_rgb(hsv);
//
//    uint8_t keys[7] = {17, 23, 31, 32, 33, 35, 52};
//
//    for (uint8_t i = 0; i < 7; i++) {
//    	RGB_MATRIX_TEST_LED_FLAGS();
//        rgb_matrix_set_color(keys[i], colour1.r, colour1.g, colour1.b);
//    }
//
//    return led_max < DRIVER_LED_TOTAL;
//}
//
//#    endif  // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
