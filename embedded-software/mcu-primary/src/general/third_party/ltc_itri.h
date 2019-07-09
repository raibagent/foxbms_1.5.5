/*
 * ltc_itri.h
 *
 *  Created on: 2019¦~6¤ë6¤é
 *      Author: A50130
 */

#ifndef MCU_PRIMARY_SRC_GENERAL_THIRD_PARTY_LTC_ITRI_H_
#define MCU_PRIMARY_SRC_GENERAL_THIRD_PARTY_LTC_ITRI_H_

#if defined(ITRI_MOD_2_b)
typedef enum {
	LTC_EBM_CURR_CALI,		// current calibration
	LTC_EBM_NONE,
	LTC_EBM_EB_COL_CTRL,	// en/by + col. SPM control
} LTC_EBM_CMD_s;

typedef struct {
	uint8_t eb_state;		// 0:bypass, 1: enable, 2:disable(open)
} LTC_EBM_CONFIG_s;
#endif // ITRI_MOD_2_b


#endif /* MCU_PRIMARY_SRC_GENERAL_THIRD_PARTY_LTC_ITRI_H_ */
