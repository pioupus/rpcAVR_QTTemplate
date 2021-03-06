#ifndef GLOBALS_H_
#define GLOBALS_H_
#include <stdint.h>

//typedef enum{ mmBatPowerdNormal=0,mmLowBat,mmExtPowerdNormal, mmOpenOutput, mmHighCurr,mmOff } t_mot_mode;

#include "channel_codec/channel_codec_types.h"

typedef struct{

	uint8_t serialno[5];
} t_glob;

t_glob glob;

extern uint8_t TARGETEMP_C;

extern channel_codec_instance_t cc_instances[channel_codec_comport_COUNT];

#define PRINT_SCPI_CHARGECHECK_DATA 0
#define TRUE 1
#define FALSE 0

#endif /*GLOBALS_H_*/
