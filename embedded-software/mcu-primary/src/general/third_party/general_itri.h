/*
 * general_itri.h
 *
 *  Created on: 2019¦~5¤ë17¤é
 *      Author: A50130
 */

#ifndef MCU_PRIMARY_SRC_GENERAL_CONFIG_GENERAL_ITRI_H_
#define MCU_PRIMARY_SRC_GENERAL_CONFIG_GENERAL_ITRI_H_

#include "foxbmsconfig.h"

#define ITRI_MOD	// ITRI modification
#if defined(ITRI_MOD)

	#define ITRI_MOD_1			// COM command
	#define ITRI_MOD_2			// LTC extend
	#define ITRI_MOD_2_a		// writes GPIO vol. to ltc_celltemperature
	#define ITRI_MOD_2_b		// supporting EBM/SPM enable/bypass/disable
	#define ITRI_MOD_2_c		// replace LTC_STATEMACH_BALANCECONTROL with LTC_STATEMACH_ALLGPIOMEASUREMENT
	#define ITRI_MOD_2_d		// disable LTC_STATEMACH_MUXMEASUREMENT

	#define ITRI_MOD_5			// expand module number to 25
	#define ITRI_MOD_6			// current calibration

	#define ITRI_MOD_11			// support heartbeat
	//#define ITRI_MOD_13			// monitor cell voltage safe operating limit (BC_VOLTMAX/BC_VOLTMIN)

	#define ITRI_MOD_60			// change BS_NR_OF_BAT_CELLS_PER_MODULE issue

	// public functions
	extern char* float_to_string(double v);

#if defined(ITRI_MOD_6)
	extern double COM_GetTimeStamp();
#endif

#endif // ITRI_MOD


#endif /* MCU_PRIMARY_SRC_GENERAL_CONFIG_GENERAL_ITRI_H_ */
