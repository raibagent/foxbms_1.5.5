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

	#define ITRI_MOD_5			// expand module number to 25

	extern char* float_to_string(float v);

#endif // ITRI_MOD


#endif /* MCU_PRIMARY_SRC_GENERAL_CONFIG_GENERAL_ITRI_H_ */
