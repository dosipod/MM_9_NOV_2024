#include "wled.h"
/*
 * Register your v2 usermods here!
 *   (for v1 usermods using just usermod.cpp, you can ignore this file)
 */

/*
 * Add/uncomment your usermod filename here (and once more below)
 * || || ||
 * \/ \/ \/
 */
#include "../usermods/dfplayer/usermod_v2_dfplayermini.h"
#include "../usermods/a2dp/a2dp.h"

#ifdef USERMOD_BATTERY
#include "../usermods/Battery/usermod_v2_Battery.h"
#endif

#ifdef USERMOD_PWM_FAN
// requires DALLASTEMPERATURE or SHT included before it
#include "../usermods/PWM_fan/usermod_PWM_fan.h"
#endif

#ifdef USERMOD_SENSORSTOMQTT
#include "../usermods/sensors_to_mqtt/usermod_v2_SensorsToMqtt.h"
#endif

#ifdef USERMOD_PIRSWITCH
#include "../usermods/PIR_sensor_switch/usermod_PIR_sensor_switch.h"
#endif

#ifdef USERMOD_MODE_SORT
#include "../usermods/usermod_v2_mode_sort/usermod_v2_mode_sort.h"
#endif

#ifdef USERMOD_MULTI_RELAY
#include "../usermods/multi_relay/usermod_multi_relay.h"
#endif

#ifdef USERMOD_ELEKSTUBE_IPS
#include "../usermods/EleksTube_IPS/usermod_elekstube_ips.h"
#endif

#ifdef USERMOD_ROTARY_ENCODER_BRIGHTNESS_COLOR
#include "../usermods/usermod_rotary_brightness_color/usermod_rotary_brightness_color.h"
#endif

#ifdef RGB_ROTARY_ENCODER
#include "../usermods/rgb-rotary-encoder/rgb-rotary-encoder.h"
#endif

#ifdef USERMOD_ST7789_DISPLAY
#include "../usermods/ST7789_display/ST7789_Display.h"
#endif

#ifdef USERMOD_SEVEN_SEGMENT
#include "../usermods/seven_segment_display/usermod_v2_seven_segment_display.h"
#endif

#ifdef USERMOD_SSDR
#include "../usermods/seven_segment_display_reloaded/usermod_seven_segment_reloaded.h"
#endif

#ifdef USERMOD_CRONIXIE
#include "../usermods/Cronixie/usermod_cronixie.h"
#endif

#ifdef QUINLED_AN_PENTA
#include "../usermods/quinled-an-penta/quinled-an-penta.h"
#endif

#ifdef USERMOD_WIZLIGHTS
#include "../usermods/wizlights/wizlights.h"
#endif

#ifdef USERMOD_WORDCLOCK
#include "../usermods/usermod_v2_word_clock/usermod_v2_word_clock.h"
#endif

#ifdef USERMOD_MY9291
#include "../usermods/MY9291/usermode_MY9291.h"
#endif

#ifdef USERMOD_SI7021_MQTT_HA
#include "../usermods/Si7021_MQTT_HA/usermod_si7021_mqtt_ha.h"
#endif

#ifdef USERMOD_SMARTNEST
#include "../usermods/smartnest/usermod_smartnest.h"
#endif

#ifdef USERMOD_AUDIOREACTIVE
#include "../usermods/audioreactive/audio_reactive.h"
#endif

#ifdef USERMOD_PING_PONG_CLOCK
#include "../usermods/usermod_v2_ping_pong_clock/usermod_v2_ping_pong_clock.h"
#endif

#ifdef USERMOD_ADS1115
#include "../usermods/ADS1115_v2/usermod_ads1115.h"
#endif

#ifdef USERMOD_KLIPPER_PERCENTAGE
#include "..\usermods\usermod_v2_klipper_percentage\usermod_v2_klipper_percentage.h"
#endif

#ifdef USERMOD_BOBLIGHT
#include "../usermods/boblight/boblight.h"
#endif

#ifdef USERMOD_MCUTEMP
#include "../usermods/mcu_temp/mcuTemp.h"
#endif

#if defined(WLED_USE_SD_MMC) || defined(WLED_USE_SD_SPI)
// This include of SD.h and SD_MMC.h must happen here, else they won't be
// resolved correctly (when included in mod's header only)
#ifdef WLED_USE_SD_MMC
#include "SD_MMC.h"
#elif defined(WLED_USE_SD_SPI)
#include "SD.h"
#include "SPI.h"
#endif
#include "../usermods/sd_card/usermod_sd_card.h"
#endif

#ifdef USERMOD_PWM_OUTPUTS
#include "../usermods/pwm_outputs/usermod_pwm_outputs.h"
#endif


void registerUsermods()
{
  /*
   * Add your usermod class name here
   * || || ||
   * \/ \/ \/
   */

  usermods.add(new MyDfPlayerMini());
  usermods.add(new A2dp());

//#ifdef USERMOD_BATTERY
//  usermods.add(new UsermodBattery());
//#endif

#ifdef USERMOD_PWM_FAN
  usermods.add(new PWMFanUsermod());
#endif

#ifdef USERMOD_SENSORSTOMQTT
  usermods.add(new UserMod_SensorsToMQTT());
#endif

#ifdef USERMOD_PIRSWITCH
  usermods.add(new PIRsensorSwitch());
#endif

#ifdef USERMOD_MODE_SORT
  usermods.add(new ModeSortUsermod());
#endif

#ifdef USERMOD_MULTI_RELAY
  usermods.add(new MultiRelay());
#endif

#ifdef USERMOD_ELEKSTUBE_IPS
  usermods.add(new ElekstubeIPSUsermod());
#endif

#ifdef USERMOD_ROTARY_ENCODER_BRIGHTNESS_COLOR
  usermods.add(new RotaryEncoderBrightnessColor());
#endif

#ifdef RGB_ROTARY_ENCODER
  usermods.add(new RgbRotaryEncoderUsermod());
#endif

#ifdef USERMOD_ST7789_DISPLAY
  usermods.add(new St7789DisplayUsermod());
#endif

#ifdef USERMOD_SEVEN_SEGMENT
  usermods.add(new SevenSegmentDisplay());
#endif

#ifdef USERMOD_SSDR
  usermods.add(new UsermodSSDR());
#endif

#ifdef USERMOD_CRONIXIE
  usermods.add(new UsermodCronixie());
#endif

#ifdef QUINLED_AN_PENTA
  usermods.add(new QuinLEDAnPentaUsermod());
#endif

#ifdef USERMOD_WIZLIGHTS
  usermods.add(new WizLightsUsermod());
#endif

#ifdef USERMOD_WORDCLOCK
  usermods.add(new WordClockUsermod());
#endif

#ifdef USERMOD_MY9291
  usermods.add(new MY9291Usermod());
#endif

#ifdef USERMOD_SI7021_MQTT_HA
  usermods.add(new Si7021_MQTT_HA());
#endif

#ifdef USERMOD_SMARTNEST
  usermods.add(new Smartnest());
#endif

#ifdef USERMOD_AUDIOREACTIVE
  usermods.add(new AudioReactive());
#endif

#ifdef USERMOD_PING_PONG_CLOCK
  usermods.add(new PingPongClockUsermod());
#endif

#ifdef USERMOD_ADS1115
  usermods.add(new ADS1115Usermod());
#endif

#ifdef USERMOD_KLIPPER_PERCENTAGE
  usermods.add(new klipper_percentage());
#endif

#ifdef USERMOD_BOBLIGHT
  usermods.add(new BobLightUsermod());
#endif

#ifdef SD_ADAPTER
  usermods.add(new UsermodSdCard());
#endif

#ifdef USERMOD_PWM_OUTPUTS
  usermods.add(new PwmOutputsUsermod());
#endif

#ifdef USERMOD_SHT
  usermods.add(new ShtUsermod("SHT-Sensor", false));
#endif

#ifdef USERMOD_MCUTEMP
  usermods.add(new mcuTemp("MCUTemp", true));
#endif
}
