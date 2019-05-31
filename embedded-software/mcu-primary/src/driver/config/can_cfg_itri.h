/*
 * can_cfg_itri.h
 *
 *  Created on: 2019�~5��30��
 *      Author: A50130
 */

#ifndef MCU_PRIMARY_SRC_DRIVER_CONFIG_CAN_CFG_ITRI_H_
#define MCU_PRIMARY_SRC_DRIVER_CONFIG_CAN_CFG_ITRI_H_

#define CELL_REPETITION_TIME	520
#define CELL_REPETITION_START	20
#define CELL_REPETITION_OFFSET	10

const CAN_MSG_TX_TYPE_s can_CAN0_messages_tx[] = {
        { 0x110, 8, 100, 0, NULL_PTR },  /*!< BMS system state 0 */
        { 0x111, 8, 100, 0, NULL_PTR },  /*!< BMS system state 1 */
        { 0x112, 8, 100, 0, NULL_PTR },  /*!< BMS system state 2 */

        { 0x115, 8, 100, 0, NULL_PTR },  /*!< BMS slave state 0 */
        { 0x116, 8, 100, 0, NULL_PTR },  /*!< BMS slave state 1 */

        { 0x130, 8, 100, 30, NULL_PTR },  /*!< Maximum allowed current */
        { 0x131, 8, 100, 30, NULL_PTR },  /*!< SOP */
        { 0x140, 8, 1000, 30, NULL_PTR },  /*!< SOC */
        { 0x150, 8, 5000, 30, NULL_PTR },  /*!< SOH */
        { 0x160, 8, 1000, 30, NULL_PTR },  /*!< SOE */
        { 0x170, 8, 100, 30, NULL_PTR },  /*!< Cell voltages Min Max Average */
        { 0x171, 8, 100, 30, NULL_PTR },  /*!< SOV */
        { 0x180, 8, 100, 30, NULL_PTR },  /*!< Cell temperatures Min Max Average */
        { 0x190, 8, 1000, 30, NULL_PTR },  /*!< Tempering */
        { 0x1A0, 8, 1000, 30, NULL_PTR },  /*!< Insulation */

        { 0x1D0, 8, 1000, 40, NULL_PTR },  /*!< Running average power 0 */
        { 0x1D1, 8, 1000, 40, NULL_PTR },  /*!< Running average power 1 */
        { 0x1D2, 8, 1000, 40, NULL_PTR },  /*!< Running average power 2 */
        { 0x1E0, 8, 1000, 40, NULL_PTR },  /*!< Running average current 0 */
        { 0x1E1, 8, 1000, 40, NULL_PTR },  /*!< Running average current 1 */
        { 0x1E2, 8, 1000, 40, NULL_PTR },  /*!< Running average current 2 */

        { 0x1F0, 8, 1000, 40, NULL_PTR },  /*!< Pack voltage */

        { 0x200, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*0 + CELL_REPETITION_START, NULL_PTR },  /*!< Cell voltages module 0 cells 0 1 2 */
        { 0x201, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*0 + CELL_REPETITION_START, NULL_PTR },  /*!< Cell voltages module 0 cells 3 4 5 */
        { 0x202, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*0 + CELL_REPETITION_START, NULL_PTR },  /*!< Cell voltages module 0 cells 6 7 8 */
        { 0x203, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*0 + CELL_REPETITION_START, NULL_PTR },  /*!< Cell voltages module 0 cells 9 10 11 */

		{ 0x210, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*1 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 0 cells 0 1 2
		{ 0x211, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*1 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 0 cells 3 4 5
		{ 0x212, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*1 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 0 cells 6 7 8
		{ 0x213, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*1 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 0 cells 9 10 11

		{ 0x220, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*2 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 1 cells 0 1 2
		{ 0x221, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*2 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 1 cells 3 4 5
		{ 0x222, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*2 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 1 cells 6 7 8
		{ 0x223, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*2 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 1 cells 9 10 11

		{ 0x230, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*3 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 1 cells 0 1 2
		{ 0x231, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*3 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 1 cells 3 4 5
		{ 0x232, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*3 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 1 cells 6 7 8
		{ 0x233, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*3 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 1 cells 9 10 11

		{ 0x240, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*4 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 2 cells 0 1 2
		{ 0x241, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*4 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 2 cells 3 4 5
		{ 0x242, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*4 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 2 cells 6 7 8
		{ 0x243, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*4 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 2 cells 9 10 11

		{ 0x250, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*5 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 2 cells 0 1 2
		{ 0x251, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*5 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 2 cells 3 4 5
		{ 0x252, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*5 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 2 cells 6 7 8
		{ 0x253, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*5 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 2 cells 9 10 11

		{ 0x260, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*6 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 3 cells 0 1 2
		{ 0x261, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*6 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 3 cells 3 4 5
		{ 0x262, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*6 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 3 cells 6 7 8
		{ 0x263, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*6 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 3 cells 9 10 11

		{ 0x270, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*7 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 3 cells 0 1 2
		{ 0x271, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*7 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 3 cells 3 4 5
		{ 0x272, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*7 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 3 cells 6 7 8
		{ 0x273, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*7 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 3 cells 9 10 11

		{ 0x280, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*8 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 4 cells 0 1 2
		{ 0x281, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*8 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 4 cells 3 4 5
		{ 0x282, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*8 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 4 cells 6 7 8
		{ 0x283, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*8 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 4 cells 9 10 11

		{ 0x290, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*9 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 4 cells 0 1 2
		{ 0x291, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*9 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 4 cells 3 4 5
		{ 0x292, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*9 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 4 cells 6 7 8
		{ 0x293, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*9 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 4 cells 9 10 11

		{ 0x2A0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*10 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 5 cells 0 1 2
		{ 0x2A1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*10 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 5 cells 3 4 5
		{ 0x2A2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*10 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 5 cells 6 7 8
		{ 0x2A3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*10 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 5 cells 9 10 11

		{ 0x2B0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*11 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 5 cells 0 1 2
		{ 0x2B1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*11 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 5 cells 3 4 5
		{ 0x2B2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*11 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 5 cells 6 7 8
		{ 0x2B3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*11 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 5 cells 9 10 11

		{ 0x2C0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*12 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 6 cells 0 1 2
		{ 0x2C1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*12 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 6 cells 3 4 5
		{ 0x2C2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*12 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 6 cells 6 7 8
		{ 0x2C3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*12 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 6 cells 9 10 11

		{ 0x2D0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*13 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 6 cells 0 1 2
		{ 0x2D1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*13 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 6 cells 3 4 5
		{ 0x2D2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*13 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 6 cells 6 7 8
		{ 0x2D3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*13 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 6 cells 9 10 11

		{ 0x2E0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*14 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 7 cells 0 1 2
		{ 0x2E1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*14 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 7 cells 3 4 5
		{ 0x2E2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*14 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 7 cells 6 7 8
		{ 0x2E3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*14 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 7 cells 9 10 11

		{ 0x2F0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*15 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 7 cells 0 1 2
		{ 0x2F1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*15 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 7 cells 3 4 5
		{ 0x2F2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*15 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 7 cells 6 7 8
		{ 0x2F3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*15 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 7 cells 9 10 11

#ifdef CAN_ISABELLENHUETTE_TRIGGERED
        , { 0x35B, 8, 100, 20, NULL_PTR }  /*!< Current Sensor Trigger */
#endif

        { 0x400, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*16 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 8 cells 0 1 2
        { 0x401, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*16 + CELL_REPETITION_START, NULL_PTR },
        { 0x402, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*16 + CELL_REPETITION_START, NULL_PTR },
        { 0x403, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*16 + CELL_REPETITION_START, NULL_PTR },

		{ 0x410, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*17 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 8 cells 0 1 2
		{ 0x411, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*17 + CELL_REPETITION_START, NULL_PTR },
		{ 0x412, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*17 + CELL_REPETITION_START, NULL_PTR },
		{ 0x413, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*17 + CELL_REPETITION_START, NULL_PTR },

		{ 0x420, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*18 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 9 cells 0 1 2
				{ 0x421, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*18 + CELL_REPETITION_START, NULL_PTR },
				{ 0x422, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*18 + CELL_REPETITION_START, NULL_PTR },
				{ 0x423, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*18 + CELL_REPETITION_START, NULL_PTR },

				{ 0x430, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*19 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 9 cells 0 1 2
				{ 0x431, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*19 + CELL_REPETITION_START, NULL_PTR },
				{ 0x432, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*19 + CELL_REPETITION_START, NULL_PTR },
				{ 0x433, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*19 + CELL_REPETITION_START, NULL_PTR },

				{ 0x440, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*20 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 10 cells 0 1 2
				{ 0x441, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*20 + CELL_REPETITION_START, NULL_PTR },
				{ 0x442, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*20 + CELL_REPETITION_START, NULL_PTR },
				{ 0x443, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*20 + CELL_REPETITION_START, NULL_PTR },

				{ 0x450, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*21 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 10 cells 0 1 2
				{ 0x451, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*21 + CELL_REPETITION_START, NULL_PTR },
				{ 0x452, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*21 + CELL_REPETITION_START, NULL_PTR },
				{ 0x453, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*21 + CELL_REPETITION_START, NULL_PTR },

				{ 0x460, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*22 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 11 cells 0 1 2
				{ 0x461, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*22 + CELL_REPETITION_START, NULL_PTR },
				{ 0x462, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*22 + CELL_REPETITION_START, NULL_PTR },
				{ 0x463, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*22 + CELL_REPETITION_START, NULL_PTR },

				{ 0x470, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*23 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 11 cells 0 1 2
				{ 0x471, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*23 + CELL_REPETITION_START, NULL_PTR },
				{ 0x472, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*23 + CELL_REPETITION_START, NULL_PTR },
				{ 0x473, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*23 + CELL_REPETITION_START, NULL_PTR },

				{ 0x480, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*24 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 12 cells 0 1 2
				{ 0x481, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*24 + CELL_REPETITION_START, NULL_PTR },
				{ 0x482, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*24 + CELL_REPETITION_START, NULL_PTR },
				{ 0x483, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*24 + CELL_REPETITION_START, NULL_PTR },

				{ 0x490, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*25 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 12 cells 0 1 2
				{ 0x491, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*25 + CELL_REPETITION_START, NULL_PTR },
				{ 0x492, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*25 + CELL_REPETITION_START, NULL_PTR },
				{ 0x493, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*25 + CELL_REPETITION_START, NULL_PTR },

				{ 0x4A0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*26 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 13 cells 0 1 2
				{ 0x4A1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*26 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4A2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*26 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4A3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*26 + CELL_REPETITION_START, NULL_PTR },

				{ 0x4B0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*27 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 13 cells 0 1 2
				{ 0x4B1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*27 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4B2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*27 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4B3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*27 + CELL_REPETITION_START, NULL_PTR },

				{ 0x4C0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*28 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 14 cells 0 1 2
				{ 0x4C1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*28 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4C2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*28 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4C3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*28 + CELL_REPETITION_START, NULL_PTR },

				{ 0x4D0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*29 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 14 cells 0 1 2
				{ 0x4D1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*29 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4D2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*29 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4D3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*29 + CELL_REPETITION_START, NULL_PTR },

				{ 0x4E0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*30 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 15 cells 0 1 2
				{ 0x4E1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*30 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4E2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*30 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4E3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*30 + CELL_REPETITION_START, NULL_PTR },

				{ 0x4F0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*31 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 15 cells 0 1 2
				{ 0x4F1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*31 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4F2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*31 + CELL_REPETITION_START, NULL_PTR },
				{ 0x4F3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*31 + CELL_REPETITION_START, NULL_PTR },

				{ 0x500, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*32 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 16 cells 0 1 2
				{ 0x501, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*32 + CELL_REPETITION_START, NULL_PTR },
				{ 0x502, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*32 + CELL_REPETITION_START, NULL_PTR },
				{ 0x503, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*32 + CELL_REPETITION_START, NULL_PTR },

				{ 0x510, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*33 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 16 cells 0 1 2
				{ 0x511, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*33 + CELL_REPETITION_START, NULL_PTR },
				{ 0x512, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*33 + CELL_REPETITION_START, NULL_PTR },
				{ 0x513, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*33 + CELL_REPETITION_START, NULL_PTR },

				{ 0x520, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*34 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 17 cells 0 1 2
				{ 0x521, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*34 + CELL_REPETITION_START, NULL_PTR },
				{ 0x522, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*34 + CELL_REPETITION_START, NULL_PTR },
				{ 0x523, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*34 + CELL_REPETITION_START, NULL_PTR },

				{ 0x530, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*35 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 17 cells 0 1 2
				{ 0x531, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*35 + CELL_REPETITION_START, NULL_PTR },
				{ 0x532, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*35 + CELL_REPETITION_START, NULL_PTR },
				{ 0x533, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*35 + CELL_REPETITION_START, NULL_PTR },

				{ 0x540, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*36 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 18 cells 0 1 2
				{ 0x541, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*36 + CELL_REPETITION_START, NULL_PTR },
				{ 0x542, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*36 + CELL_REPETITION_START, NULL_PTR },
				{ 0x543, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*36 + CELL_REPETITION_START, NULL_PTR },

				{ 0x550, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*37 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 18 cells 0 1 2
				{ 0x551, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*37 + CELL_REPETITION_START, NULL_PTR },
				{ 0x552, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*37 + CELL_REPETITION_START, NULL_PTR },
				{ 0x553, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*37 + CELL_REPETITION_START, NULL_PTR },

				{ 0x560, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*38 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 19 cells 0 1 2
				{ 0x561, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*38 + CELL_REPETITION_START, NULL_PTR },
				{ 0x562, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*38 + CELL_REPETITION_START, NULL_PTR },
				{ 0x563, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*38 + CELL_REPETITION_START, NULL_PTR },

				{ 0x570, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*39 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 19 cells 0 1 2
				{ 0x571, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*39 + CELL_REPETITION_START, NULL_PTR },
				{ 0x572, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*39 + CELL_REPETITION_START, NULL_PTR },
				{ 0x573, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*39 + CELL_REPETITION_START, NULL_PTR },

				{ 0x580, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*40 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 20 cells 0 1 2
				{ 0x581, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*40 + CELL_REPETITION_START, NULL_PTR },
				{ 0x582, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*40 + CELL_REPETITION_START, NULL_PTR },
				{ 0x583, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*40 + CELL_REPETITION_START, NULL_PTR },

				{ 0x590, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*41 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 20 cells 0 1 2
				{ 0x591, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*41 + CELL_REPETITION_START, NULL_PTR },
				{ 0x592, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*41 + CELL_REPETITION_START, NULL_PTR },
				{ 0x593, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*41 + CELL_REPETITION_START, NULL_PTR },

				{ 0x5A0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*42 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 21 cells 0 1 2
				{ 0x5A1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*42 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5A2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*42 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5A3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*42 + CELL_REPETITION_START, NULL_PTR },

				{ 0x5B0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*43 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 21 cells 0 1 2
				{ 0x5B1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*43 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5B2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*43 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5B3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*43 + CELL_REPETITION_START, NULL_PTR },

				{ 0x5C0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*44 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 22 cells 0 1 2
				{ 0x5C1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*44 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5C2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*44 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5C3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*44 + CELL_REPETITION_START, NULL_PTR },

				{ 0x5D0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*45 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 22 cells 0 1 2
				{ 0x5D1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*45 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5D2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*45 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5D3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*45 + CELL_REPETITION_START, NULL_PTR },

				{ 0x5E0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*46 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 23 cells 0 1 2
				{ 0x5E1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*46 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5E2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*46 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5E3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*46 + CELL_REPETITION_START, NULL_PTR },

				{ 0x5F0, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*47 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 23 cells 0 1 2
				{ 0x5F1, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*47 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5F2, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*47 + CELL_REPETITION_START, NULL_PTR },
				{ 0x5F3, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*47 + CELL_REPETITION_START, NULL_PTR },

				{ 0x600, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*48 + CELL_REPETITION_START, NULL_PTR },  //!< Cell voltages module 24 cells 0 1 2
				{ 0x601, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*48 + CELL_REPETITION_START, NULL_PTR },
				{ 0x602, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*48 + CELL_REPETITION_START, NULL_PTR },
				{ 0x603, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*48 + CELL_REPETITION_START, NULL_PTR },

				{ 0x610, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*49 + CELL_REPETITION_START, NULL_PTR },  //!< Cell temperatures module 24 cells 0 1 2
				{ 0x611, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*49 + CELL_REPETITION_START, NULL_PTR },
				{ 0x612, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*49 + CELL_REPETITION_START, NULL_PTR },
				{ 0x613, 8, CELL_REPETITION_TIME, CELL_REPETITION_OFFSET*49 + CELL_REPETITION_START, NULL_PTR },
};


#endif /* MCU_PRIMARY_SRC_DRIVER_CONFIG_CAN_CFG_ITRI_H_ */
