/**
 *
 * @copyright &copy; 2010 - 2019, Fraunhofer-Gesellschaft zur Foerderung der
 *  angewandten Forschung e.V. All rights reserved.
 *
 * BSD 3-Clause License
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 1.  Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 * 3.  Neither the name of the copyright holder nor the names of its
 *     contributors may be used to endorse or promote products derived from
 *     this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * We kindly request you to use one or more of the following phrases to refer
 * to foxBMS in your hardware, software, documentation or advertising
 * materials:
 *
 * &Prime;This product uses parts of foxBMS&reg;&Prime;
 *
 * &Prime;This product includes parts of foxBMS&reg;&Prime;
 *
 * &Prime;This product is derived from foxBMS&reg;&Prime;
 *
 */

/**
 * @file    cansignal_cfg.h
 * @author  foxBMS Team
 * @date    16.09.2015 (date of creation)
 * @ingroup DRIVERS_CONF
 * @prefix  CANS
 *
 * @brief   Headers for the configuration of the messages and signal settings for the CAN driver
 *
 */

#ifndef CANSIGNAL_CFG_H_
#define CANSIGNAL_CFG_H_

/*================== Includes =============================================*/
#include "general.h"
#include "can_cfg.h"

/*================== Macros and Definitions ===============================*/

/**
 * @ingroup CONFIG_CANSIGNAL
 * task timeslot where the CANS main function is called. Repetition time of periodic CAN messages must be multiple of this
 * \par Type:
 * select(3)
 * \par Default:
 * 1
*/
/* #define CANS_TICK_MS 1 */
#define CANS_TICK_MS 10
/* #define CANS_TICK_MS 100 */

/**
 * Delay in ms after which it is considered the current sensor is not responding anymore.
 */
#define CANS_SENSOR_RESPONSE_TIMEOUT_MS         100


/**
 * symbolic names for TX CAN messages. Every used TX message needs to get an individual message name.
 */
typedef enum {
    /* Insert here symbolic names for CAN0 messages */
    CAN0_MSG_SystemState_0,  /*!< BMS general state 0 */
    CAN0_MSG_SystemState_1,  /*!< BMS general state 1 */
    CAN0_MSG_SystemState_2,  /*!< BMS general state 2 */
    CAN0_MSG_SlaveState_0,    /*!< Slave state 0 */
    CAN0_MSG_SlaveState_1,    /*!< Slave state 1 */

    CAN0_MSG_RecOperatingCurrent,  /*!< Max allowed charge/discharge current */
    CAN0_MSG_SOP,  /*!< SOP */
    CAN0_MSG_SOC,  /*!< SOC */
    CAN0_MSG_SOH,  /*!< SOH */
    CAN0_MSG_SOE,  /*!< SOE */
    CAN0_MSG_MinMaxCellVolt,  /*!< min/max/mean cell voltages */
    CAN0_MSG_SOV,  /*!< SOV */
    CAN0_MSG_MinMaxCellTemp,  /*!< min/max/mean cell temperatures */
    CAN0_MSG_Tempering,  /*!< Tempering */
    CAN0_MSG_Insulation,  /*!< Insulation */
    CAN0_MSG_Power_0,  /*!< Moving average power 1s 5s */
    CAN0_MSG_Power_1,  /*!< Moving average power 10s 30s */
    CAN0_MSG_Power_2,  /*!< Moving average power 60s configurable duration */
    CAN0_MSG_Current_0,  /*!< Moving average current 1s 5s */
    CAN0_MSG_Current_1,  /*!< Moving average current 10s 30s */
    CAN0_MSG_Current_2,  /*!< Moving average current 60s configurable duration */
    CAN0_MSG_PackVoltage,  /*!< Pack voltage */

    CAN0_MSG_Mod0_Cellvolt_0,  /*!< Module 0 Cell voltages 0-2 */
    CAN0_MSG_Mod0_Cellvolt_1,  /*!< Module 0 Cell voltages 3-5 */
    CAN0_MSG_Mod0_Cellvolt_2,  /*!< Module 0 Cell voltages 6-8 */
    CAN0_MSG_Mod0_Cellvolt_3,  /*!< Module 0 Cell voltages 9-11 */
    CAN0_MSG_Mod0_Celltemp_0,  /*!< Module 0 Cell temperatures 0-2 */
    CAN0_MSG_Mod0_Celltemp_1,  /*!< Module 0 Cell temperatures 3-5 */
    CAN0_MSG_Mod0_Celltemp_2,  /*!< Module 0 Cell temperatures 6-8 */
    CAN0_MSG_Mod0_Celltemp_3,  /*!< Module 0 Cell temperatures 9-11 */

    CAN0_MSG_Mod1_Cellvolt_0,  /*!< Module 1 Cell voltages 0-2 */
    CAN0_MSG_Mod1_Cellvolt_1,  /*!< Module 1 Cell voltages 3-5 */
    CAN0_MSG_Mod1_Cellvolt_2,  /*!< Module 1 Cell voltages 6-8 */
    CAN0_MSG_Mod1_Cellvolt_3,  /*!< Module 1 Cell voltages 9-11 */
    CAN0_MSG_Mod1_Celltemp_0,  /*!< Module 1 Cell temperatures 0-2 */
    CAN0_MSG_Mod1_Celltemp_1,  /*!< Module 1 Cell temperatures 3-5 */
    CAN0_MSG_Mod1_Celltemp_2,  /*!< Module 1 Cell temperatures 6-8 */
    CAN0_MSG_Mod1_Celltemp_3,  /*!< Module 1 Cell temperatures 9-11 */

    CAN0_MSG_Mod2_Cellvolt_0,  /*!< Module 2 Cell voltages 0-2 */
    CAN0_MSG_Mod2_Cellvolt_1,  /*!< Module 2 Cell voltages 3-5 */
    CAN0_MSG_Mod2_Cellvolt_2,  /*!< Module 2 Cell voltages 6-8 */
    CAN0_MSG_Mod2_Cellvolt_3,  /*!< Module 2 Cell voltages 9-11 */
    CAN0_MSG_Mod2_Celltemp_0,  /*!< Module 2 Cell temperatures 0-2 */
    CAN0_MSG_Mod2_Celltemp_1,  /*!< Module 2 Cell temperatures 3-5 */
    CAN0_MSG_Mod2_Celltemp_2,  /*!< Module 2 Cell temperatures 6-8 */
    CAN0_MSG_Mod2_Celltemp_3,  /*!< Module 2 Cell temperatures 9-11 */

    CAN0_MSG_Mod3_Cellvolt_0,  /*!< Module 3 Cell voltages 0-2 */
    CAN0_MSG_Mod3_Cellvolt_1,  /*!< Module 3 Cell voltages 3-5 */
    CAN0_MSG_Mod3_Cellvolt_2,  /*!< Module 3 Cell voltages 6-8 */
    CAN0_MSG_Mod3_Cellvolt_3,  /*!< Module 3 Cell voltages 9-11 */
    CAN0_MSG_Mod3_Celltemp_0,  /*!< Module 3 Cell temperatures 0-2 */
    CAN0_MSG_Mod3_Celltemp_1,  /*!< Module 3 Cell temperatures 3-5 */
    CAN0_MSG_Mod3_Celltemp_2,  /*!< Module 3 Cell temperatures 6-8 */
    CAN0_MSG_Mod3_Celltemp_3,  /*!< Module 3 Cell temperatures 9-11 */

    CAN0_MSG_Mod4_Cellvolt_0,  /*!< Module 4 Cell voltages 0-2 */
    CAN0_MSG_Mod4_Cellvolt_1,  /*!< Module 4 Cell voltages 3-5 */
    CAN0_MSG_Mod4_Cellvolt_2,  /*!< Module 4 Cell voltages 6-8 */
    CAN0_MSG_Mod4_Cellvolt_3,  /*!< Module 4 Cell voltages 9-11 */
    CAN0_MSG_Mod4_Celltemp_0,  /*!< Module 4 Cell temperatures 0-2 */
    CAN0_MSG_Mod4_Celltemp_1,  /*!< Module 4 Cell temperatures 3-5 */
    CAN0_MSG_Mod4_Celltemp_2,  /*!< Module 4 Cell temperatures 6-8 */
    CAN0_MSG_Mod4_Celltemp_3,  /*!< Module 4 Cell temperatures 9-11 */

    CAN0_MSG_Mod5_Cellvolt_0,  /*!< Module 5 Cell voltages 0-2 */
    CAN0_MSG_Mod5_Cellvolt_1,  /*!< Module 5 Cell voltages 3-5 */
    CAN0_MSG_Mod5_Cellvolt_2,  /*!< Module 5 Cell voltages 6-8 */
    CAN0_MSG_Mod5_Cellvolt_3,  /*!< Module 5 Cell voltages 9-11 */
    CAN0_MSG_Mod5_Celltemp_0,  /*!< Module 5 Cell temperatures 0-2 */
    CAN0_MSG_Mod5_Celltemp_1,  /*!< Module 5 Cell temperatures 3-5 */
    CAN0_MSG_Mod5_Celltemp_2,  /*!< Module 5 Cell temperatures 6-8 */
    CAN0_MSG_Mod5_Celltemp_3,  /*!< Module 5 Cell temperatures 9-11 */

    CAN0_MSG_Mod6_Cellvolt_0,  /*!< Module 6 Cell voltages 0-2 */
    CAN0_MSG_Mod6_Cellvolt_1,  /*!< Module 6 Cell voltages 3-5 */
    CAN0_MSG_Mod6_Cellvolt_2,  /*!< Module 6 Cell voltages 6-8 */
    CAN0_MSG_Mod6_Cellvolt_3,  /*!< Module 6 Cell voltages 9-11 */
    CAN0_MSG_Mod6_Celltemp_0,  /*!< Module 6 Cell temperatures 0-2 */
    CAN0_MSG_Mod6_Celltemp_1,  /*!< Module 6 Cell temperatures 3-5 */
    CAN0_MSG_Mod6_Celltemp_2,  /*!< Module 6 Cell temperatures 6-8 */
    CAN0_MSG_Mod6_Celltemp_3,  /*!< Module 6 Cell temperatures 9-11 */

    CAN0_MSG_Mod7_Cellvolt_0,  /*!< Module 7 Cell voltages 0-2 */
    CAN0_MSG_Mod7_Cellvolt_1,  /*!< Module 7 Cell voltages 3-5 */
    CAN0_MSG_Mod7_Cellvolt_2,  /*!< Module 7 Cell voltages 6-8 */
    CAN0_MSG_Mod7_Cellvolt_3,  /*!< Module 7 Cell voltages 9-11 */
    CAN0_MSG_Mod7_Celltemp_0,  /*!< Module 7 Cell temperatures 0-2 */
    CAN0_MSG_Mod7_Celltemp_1,  /*!< Module 7 Cell temperatures 3-5 */
    CAN0_MSG_Mod7_Celltemp_2,  /*!< Module 7 Cell temperatures 6-8 */
    CAN0_MSG_Mod7_Celltemp_3,  /*!< Module 7 Cell temperatures 9-11 */

#ifdef CAN_ISABELLENHUETTE_TRIGGERED
    CAN0_MSG_BMS_CurrentTrigger,    /*!< Cell Voltages Max Min Average */
#endif

#if defined(ITRI_MOD_5)
    CAN0_MSG_Mod8_Cellvolt_0,  //!< Module 8 Cell voltages 0-2
    CAN0_MSG_Mod8_Cellvolt_1,
    CAN0_MSG_Mod8_Cellvolt_2,
    CAN0_MSG_Mod8_Cellvolt_3,
    CAN0_MSG_Mod8_Celltemp_0,  //!< Module 8 Cell temperatures 0-2
    CAN0_MSG_Mod8_Celltemp_1,
    CAN0_MSG_Mod8_Celltemp_2,
    CAN0_MSG_Mod8_Celltemp_3,

	CAN0_MSG_Mod9_Cellvolt_0,  //!< Module 9 Cell voltages 0-2
	    CAN0_MSG_Mod9_Cellvolt_1,
	    CAN0_MSG_Mod9_Cellvolt_2,
	    CAN0_MSG_Mod9_Cellvolt_3,
	    CAN0_MSG_Mod9_Celltemp_0,  //!< Module 9 Cell temperatures 0-2
	    CAN0_MSG_Mod9_Celltemp_1,
	    CAN0_MSG_Mod9_Celltemp_2,
	    CAN0_MSG_Mod9_Celltemp_3,

	    CAN0_MSG_Mod10_Cellvolt_0,  //!< Module 10 Cell voltages 0-2
	    CAN0_MSG_Mod10_Cellvolt_1,
	    CAN0_MSG_Mod10_Cellvolt_2,
	    CAN0_MSG_Mod10_Cellvolt_3,
	    CAN0_MSG_Mod10_Celltemp_0,  //!< Module 10 Cell temperatures 0-2
	    CAN0_MSG_Mod10_Celltemp_1,
	    CAN0_MSG_Mod10_Celltemp_2,
	    CAN0_MSG_Mod10_Celltemp_3,

	    CAN0_MSG_Mod11_Cellvolt_0,  //!< Module 11 Cell voltages 0-2
	    CAN0_MSG_Mod11_Cellvolt_1,
	    CAN0_MSG_Mod11_Cellvolt_2,
	    CAN0_MSG_Mod11_Cellvolt_3,
	    CAN0_MSG_Mod11_Celltemp_0,  //!< Module 11 Cell temperatures 0-2
	    CAN0_MSG_Mod11_Celltemp_1,
	    CAN0_MSG_Mod11_Celltemp_2,
	    CAN0_MSG_Mod11_Celltemp_3,

	    CAN0_MSG_Mod12_Cellvolt_0,  //!< Module 12 Cell voltages 0-2
	    CAN0_MSG_Mod12_Cellvolt_1,
	    CAN0_MSG_Mod12_Cellvolt_2,
	    CAN0_MSG_Mod12_Cellvolt_3,
	    CAN0_MSG_Mod12_Celltemp_0,  //!< Module 12 Cell temperatures 0-2
	    CAN0_MSG_Mod12_Celltemp_1,
	    CAN0_MSG_Mod12_Celltemp_2,
	    CAN0_MSG_Mod12_Celltemp_3,

	    CAN0_MSG_Mod13_Cellvolt_0,  //!< Module 13 Cell voltages 0-2
	    CAN0_MSG_Mod13_Cellvolt_1,
	    CAN0_MSG_Mod13_Cellvolt_2,
	    CAN0_MSG_Mod13_Cellvolt_3,
	    CAN0_MSG_Mod13_Celltemp_0,  //!< Module 13 Cell temperatures 0-2
	    CAN0_MSG_Mod13_Celltemp_1,
	    CAN0_MSG_Mod13_Celltemp_2,
	    CAN0_MSG_Mod13_Celltemp_3,

	    CAN0_MSG_Mod14_Cellvolt_0,  //!< Module 14 Cell voltages 0-2
	    CAN0_MSG_Mod14_Cellvolt_1,
	    CAN0_MSG_Mod14_Cellvolt_2,
	    CAN0_MSG_Mod14_Cellvolt_3,
	    CAN0_MSG_Mod14_Celltemp_0,  //!< Module 14 Cell temperatures 0-2
	    CAN0_MSG_Mod14_Celltemp_1,
	    CAN0_MSG_Mod14_Celltemp_2,
	    CAN0_MSG_Mod14_Celltemp_3,

	    CAN0_MSG_Mod15_Cellvolt_0,  //!< Module 15 Cell voltages 0-2
	    CAN0_MSG_Mod15_Cellvolt_1,
	    CAN0_MSG_Mod15_Cellvolt_2,
	    CAN0_MSG_Mod15_Cellvolt_3,
	    CAN0_MSG_Mod15_Celltemp_0,  //!< Module 15 Cell temperatures 0-2
	    CAN0_MSG_Mod15_Celltemp_1,
	    CAN0_MSG_Mod15_Celltemp_2,
	    CAN0_MSG_Mod15_Celltemp_3,

	    CAN0_MSG_Mod16_Cellvolt_0,  //!< Module 16 Cell voltages 0-2
	    CAN0_MSG_Mod16_Cellvolt_1,
	    CAN0_MSG_Mod16_Cellvolt_2,
	    CAN0_MSG_Mod16_Cellvolt_3,
	    CAN0_MSG_Mod16_Celltemp_0,  //!< Module 16 Cell temperatures 0-2
	    CAN0_MSG_Mod16_Celltemp_1,
	    CAN0_MSG_Mod16_Celltemp_2,
	    CAN0_MSG_Mod16_Celltemp_3,

	    CAN0_MSG_Mod17_Cellvolt_0,  //!< Module 17 Cell voltages 0-2
	    CAN0_MSG_Mod17_Cellvolt_1,
	    CAN0_MSG_Mod17_Cellvolt_2,
	    CAN0_MSG_Mod17_Cellvolt_3,
	    CAN0_MSG_Mod17_Celltemp_0,  //!< Module 17 Cell temperatures 0-2
	    CAN0_MSG_Mod17_Celltemp_1,
	    CAN0_MSG_Mod17_Celltemp_2,
	    CAN0_MSG_Mod17_Celltemp_3,

	    CAN0_MSG_Mod18_Cellvolt_0,  //!< Module 18 Cell voltages 0-2
	    CAN0_MSG_Mod18_Cellvolt_1,
	    CAN0_MSG_Mod18_Cellvolt_2,
	    CAN0_MSG_Mod18_Cellvolt_3,
	    CAN0_MSG_Mod18_Celltemp_0,  //!< Module 18 Cell temperatures 0-2
	    CAN0_MSG_Mod18_Celltemp_1,
	    CAN0_MSG_Mod18_Celltemp_2,
	    CAN0_MSG_Mod18_Celltemp_3,

	    CAN0_MSG_Mod19_Cellvolt_0,  //!< Module 19 Cell voltages 0-2
	    CAN0_MSG_Mod19_Cellvolt_1,
	    CAN0_MSG_Mod19_Cellvolt_2,
	    CAN0_MSG_Mod19_Cellvolt_3,
	    CAN0_MSG_Mod19_Celltemp_0,  //!< Module 19 Cell temperatures 0-2
	    CAN0_MSG_Mod19_Celltemp_1,
	    CAN0_MSG_Mod19_Celltemp_2,
	    CAN0_MSG_Mod19_Celltemp_3,

	    CAN0_MSG_Mod20_Cellvolt_0,  //!< Module 20 Cell voltages 0-2
	    CAN0_MSG_Mod20_Cellvolt_1,
	    CAN0_MSG_Mod20_Cellvolt_2,
	    CAN0_MSG_Mod20_Cellvolt_3,
	    CAN0_MSG_Mod20_Celltemp_0,  //!< Module 20 Cell temperatures 0-2
	    CAN0_MSG_Mod20_Celltemp_1,
	    CAN0_MSG_Mod20_Celltemp_2,
	    CAN0_MSG_Mod20_Celltemp_3,

	    CAN0_MSG_Mod21_Cellvolt_0,  //!< Module 21 Cell voltages 0-2
	    CAN0_MSG_Mod21_Cellvolt_1,
	    CAN0_MSG_Mod21_Cellvolt_2,
	    CAN0_MSG_Mod21_Cellvolt_3,
	    CAN0_MSG_Mod21_Celltemp_0,  //!< Module 21 Cell temperatures 0-2
	    CAN0_MSG_Mod21_Celltemp_1,
	    CAN0_MSG_Mod21_Celltemp_2,
	    CAN0_MSG_Mod21_Celltemp_3,

	    CAN0_MSG_Mod22_Cellvolt_0,  //!< Module 22 Cell voltages 0-2
	    CAN0_MSG_Mod22_Cellvolt_1,
	    CAN0_MSG_Mod22_Cellvolt_2,
	    CAN0_MSG_Mod22_Cellvolt_3,
	    CAN0_MSG_Mod22_Celltemp_0,  //!< Module 22 Cell temperatures 0-2
	    CAN0_MSG_Mod22_Celltemp_1,
	    CAN0_MSG_Mod22_Celltemp_2,
	    CAN0_MSG_Mod22_Celltemp_3,

	    CAN0_MSG_Mod23_Cellvolt_0,  //!< Module 23 Cell voltages 0-2
	    CAN0_MSG_Mod23_Cellvolt_1,
	    CAN0_MSG_Mod23_Cellvolt_2,
	    CAN0_MSG_Mod23_Cellvolt_3,
	    CAN0_MSG_Mod23_Celltemp_0,  //!< Module 23 Cell temperatures 0-2
	    CAN0_MSG_Mod23_Celltemp_1,
	    CAN0_MSG_Mod23_Celltemp_2,
	    CAN0_MSG_Mod23_Celltemp_3,

	    CAN0_MSG_Mod24_Cellvolt_0,  //!< Module 24 Cell voltages 0-2
	    CAN0_MSG_Mod24_Cellvolt_1,
	    CAN0_MSG_Mod24_Cellvolt_2,
	    CAN0_MSG_Mod24_Cellvolt_3,
	    CAN0_MSG_Mod24_Celltemp_0,  //!< Module 24 Cell temperatures 0-2
	    CAN0_MSG_Mod24_Celltemp_1,
	    CAN0_MSG_Mod24_Celltemp_2,
	    CAN0_MSG_Mod24_Celltemp_3,
#endif // ITRI_MOD_5

    /* Insert here symbolic names for CAN1 messages */
} CANS_messagesTx_e;

/**
 * symbolic names for RX CAN messages
 */
typedef enum {
    /* Insert here symbolic names for CAN0 messages */
    CAN0_MSG_StateRequest,                   /*!< state request */
    CAN0_MSG_SW_RESET,                       /*!< can message for SW reset */
    CAN0_MSG_IVT_Current,                    /*!< current sensing */
    CAN0_MSG_IVT_Voltage_1,                  /*!< current sensor voltage 1 */
    CAN0_MSG_IVT_Voltage_2,                  /*!< current sensor voltage 2 */
    CAN0_MSG_IVT_Voltage_3,                  /*!< current sensor voltage 3 */
    CAN0_MSG_IVT_Temperature,                /*!< current sensor temperature */
    CAN0_MSG_IVT_Power,                      /*!< current sensor power */
    CAN0_MSG_IVT_CoulombCount,               /*!< current sensor C-C */
    CAN0_MSG_IVT_EnergyCount,                /*!< current sensor E-C */
    CAN0_MSG_DEBUG,                          /*!< debug messages */
    CAN0_MSG_GetReleaseVersion,              /*!< Get SW release version */

    /* Insert here symbolic names for CAN1 messages */
} CANS_messagesRx_e;

/**
 * symbolic names for CAN0 transmission signals
 */
typedef enum {
    CAN0_SIG_GS0_general_error,  /* 0:good, 1:error */
    CAN0_SIG_GS0_current_state,  /* currently no used */
    CAN0_SIG_GS0_error_overtemp_charge,  /* 0:good, 1:error */
    CAN0_SIG_GS0_error_undertemp_charge,  /* 0:good, 1:error */
    CAN0_SIG_GS0_error_overtemp_discharge,  /* 0:good, 1:error */
    CAN0_SIG_GS0_error_undertemp_discharge,  /* 0:good, 1:error */
    CAN0_SIG_GS0_error_overcurrent_charge,  /* 0:good, 1:error */
    CAN0_SIG_GS0_error_overcurrent_discharge,  /* 0:good, 1:error */

    CAN0_SIG_GS1_error_overvoltage,  /* 0:good, 1:error */
    CAN0_SIG_GS1_error_undervoltage,  /* 0:good, 1:error */
    CAN0_SIG_GS1_error_temperature_MCU0,  /* 0:good, 1:error */
    CAN0_SIG_GS1_error_contactor,  /* 0:good, 1:error */
    CAN0_SIG_GS1_error_selftest,  /* 0:good, 1:error */
    CAN0_SIG_GS1_error_cantiming,  /* 0:good, 1:error */
    CAN0_SIG_GS1_current_sensor,  /* 0:good, 1:error */
    CAN0_SIG_GS1_balancing_active,  /* 0:off, 1:on */

    CAN0_SIG_GS2_state_cont_interlock,  /* bitfield 0:off, 1:on */
    CAN0_SIG_GS2_error_insulation,  /* 0: good, 1: error */
    CAN0_SIG_GS2_fuse_state,  /* 0: fuse intact, 1: fuse tripped */
    CAN0_SIG_GS2_lowCoinCellVolt,  /* 0: okay, else: low voltage */
    CAN0_SIG_GS2_error_openWire,  /* 0: okay, 1: open wire detected */
    CAN0_SIG_GS2_daisyChain,  /* 0: okay, else: error */

    CAN0_SIG_SS0_states,  /* 0: good, 1: error */
    CAN0_SIG_SS1_states,  /* 0: good, 1: error */

    CAN0_SIG_RecChargeCurrent,
    CAN0_SIG_RecChargeCurrent_Peak,
    CAN0_SIG_RecDischargeCurrent,
    CAN0_SIG_RecDischargeCurrent_Peak,

    CAN0_SIG_MaxChargePower,
    CAN0_SIG_MaxChargePower_Peak,
    CAN0_SIG_MaxDischargePower,
    CAN0_SIG_MaxDischargePower_Peak,

    CAN0_SIG_SOC_mean,
    CAN0_SIG_SOC_min,
    CAN0_SIG_SOC_max,

    CAN0_SIG_SOH_mean,
    CAN0_SIG_SOH_min,
    CAN0_SIG_SOH_max,

    CAN0_SIG_SOE,
    CAN0_SIG_RemainingEnergy,

    CAN0_SIG_Cellvolt_mean,
    CAN0_SIG_Cellvolt_min,
    CAN0_SIG_Cellvolt_max,
    CAN0_SIG_ModNumber_volt_min,
    CAN0_SIG_ModNumber_volt_max,

    CAN0_SIG_SOV,

    CAN0_SIG_Celltemp_mean,
    CAN0_SIG_Celltemp_min,
    CAN0_SIG_Celltemp_max,
    CAN0_SIG_ModNumber_temp_min,
    CAN0_SIG_ModNumber_temp_max,

    CAN0_SIG_CoolingNeeded,
    CAN0_SIG_HeatingNeeded,
    CAN0_SIG_TemperingDemand,

    CAN0_SIG_InsulationStatus,
    CAN0_SIG_InsulationValue,

    CAN0_SIG_MovAverage_Power_1s,
    CAN0_SIG_MovAverage_Power_5s,
    CAN0_SIG_MovAverage_Power_10s,
    CAN0_SIG_MovAverage_Power_30s,
    CAN0_SIG_MovAverage_Power_60s,
    CAN0_SIG_MovAverage_Power_config,

    CAN0_SIG_MovAverage_Current_1s,
    CAN0_SIG_MovAverage_Current_5s,
    CAN0_SIG_MovAverage_Current_10s,
    CAN0_SIG_MovAverage_Current_30s,
    CAN0_SIG_MovAverage_Current_60s,
    CAN0_SIG_MovAverage_Current_config,

    CAN0_SIG_PackVolt_Battery,
    CAN0_SIG_PackVolt_PowerNet,

    CAN0_SIG_Mod0_volt_valid_0_2,
    CAN0_SIG_Mod0_volt_0,
    CAN0_SIG_Mod0_volt_1,
    CAN0_SIG_Mod0_volt_2,
    CAN0_SIG_Mod0_volt_valid_3_5,
    CAN0_SIG_Mod0_volt_3,
    CAN0_SIG_Mod0_volt_4,
    CAN0_SIG_Mod0_volt_5,
    CAN0_SIG_Mod0_volt_valid_6_8,
    CAN0_SIG_Mod0_volt_6,
    CAN0_SIG_Mod0_volt_7,
    CAN0_SIG_Mod0_volt_8,
    CAN0_SIG_Mod0_volt_valid_9_11,
    CAN0_SIG_Mod0_volt_9,
    CAN0_SIG_Mod0_volt_10,
    CAN0_SIG_Mod0_volt_11,

    CAN0_SIG_Mod0_temp_valid_0_2,
    CAN0_SIG_Mod0_temp_0,
    CAN0_SIG_Mod0_temp_1,
    CAN0_SIG_Mod0_temp_2,
    CAN0_SIG_Mod0_temp_valid_3_5,
    CAN0_SIG_Mod0_temp_3,
    CAN0_SIG_Mod0_temp_4,
    CAN0_SIG_Mod0_temp_5,
    CAN0_SIG_Mod0_temp_valid_6_8,
    CAN0_SIG_Mod0_temp_6,
    CAN0_SIG_Mod0_temp_7,
    CAN0_SIG_Mod0_temp_8,
    CAN0_SIG_Mod0_temp_valid_9_11,
    CAN0_SIG_Mod0_temp_9,
    CAN0_SIG_Mod0_temp_10,
    CAN0_SIG_Mod0_temp_11,

    CAN0_SIG_Mod1_volt_valid_0_2,
    CAN0_SIG_Mod1_volt_0,
    CAN0_SIG_Mod1_volt_1,
    CAN0_SIG_Mod1_volt_2,
    CAN0_SIG_Mod1_volt_valid_3_5,
    CAN0_SIG_Mod1_volt_3,
    CAN0_SIG_Mod1_volt_4,
    CAN0_SIG_Mod1_volt_5,
    CAN0_SIG_Mod1_volt_valid_6_8,
    CAN0_SIG_Mod1_volt_6,
    CAN0_SIG_Mod1_volt_7,
    CAN0_SIG_Mod1_volt_8,
    CAN0_SIG_Mod1_volt_valid_9_11,
    CAN0_SIG_Mod1_volt_9,
    CAN0_SIG_Mod1_volt_10,
    CAN0_SIG_Mod1_volt_11,

    CAN0_SIG_Mod1_temp_valid_0_2,
    CAN0_SIG_Mod1_temp_0,
    CAN0_SIG_Mod1_temp_1,
    CAN0_SIG_Mod1_temp_2,
    CAN0_SIG_Mod1_temp_valid_3_5,
    CAN0_SIG_Mod1_temp_3,
    CAN0_SIG_Mod1_temp_4,
    CAN0_SIG_Mod1_temp_5,
    CAN0_SIG_Mod1_temp_valid_6_8,
    CAN0_SIG_Mod1_temp_6,
    CAN0_SIG_Mod1_temp_7,
    CAN0_SIG_Mod1_temp_8,
    CAN0_SIG_Mod1_temp_valid_9_11,
    CAN0_SIG_Mod1_temp_9,
    CAN0_SIG_Mod1_temp_10,
    CAN0_SIG_Mod1_temp_11,

    CAN0_SIG_Mod2_volt_valid_0_2,
    CAN0_SIG_Mod2_volt_0,
    CAN0_SIG_Mod2_volt_1,
    CAN0_SIG_Mod2_volt_2,
    CAN0_SIG_Mod2_volt_valid_3_5,
    CAN0_SIG_Mod2_volt_3,
    CAN0_SIG_Mod2_volt_4,
    CAN0_SIG_Mod2_volt_5,
    CAN0_SIG_Mod2_volt_valid_6_8,
    CAN0_SIG_Mod2_volt_6,
    CAN0_SIG_Mod2_volt_7,
    CAN0_SIG_Mod2_volt_8,
    CAN0_SIG_Mod2_volt_valid_9_11,
    CAN0_SIG_Mod2_volt_9,
    CAN0_SIG_Mod2_volt_10,
    CAN0_SIG_Mod2_volt_11,

    CAN0_SIG_Mod2_temp_valid_0_2,
    CAN0_SIG_Mod2_temp_0,
    CAN0_SIG_Mod2_temp_1,
    CAN0_SIG_Mod2_temp_2,
    CAN0_SIG_Mod2_temp_valid_3_5,
    CAN0_SIG_Mod2_temp_3,
    CAN0_SIG_Mod2_temp_4,
    CAN0_SIG_Mod2_temp_5,
    CAN0_SIG_Mod2_temp_valid_6_8,
    CAN0_SIG_Mod2_temp_6,
    CAN0_SIG_Mod2_temp_7,
    CAN0_SIG_Mod2_temp_8,
    CAN0_SIG_Mod2_temp_valid_9_11,
    CAN0_SIG_Mod2_temp_9,
    CAN0_SIG_Mod2_temp_10,
    CAN0_SIG_Mod2_temp_11,

    CAN0_SIG_Mod3_volt_valid_0_2,
    CAN0_SIG_Mod3_volt_0,
    CAN0_SIG_Mod3_volt_1,
    CAN0_SIG_Mod3_volt_2,
    CAN0_SIG_Mod3_volt_valid_3_5,
    CAN0_SIG_Mod3_volt_3,
    CAN0_SIG_Mod3_volt_4,
    CAN0_SIG_Mod3_volt_5,
    CAN0_SIG_Mod3_volt_valid_6_8,
    CAN0_SIG_Mod3_volt_6,
    CAN0_SIG_Mod3_volt_7,
    CAN0_SIG_Mod3_volt_8,
    CAN0_SIG_Mod3_volt_valid_9_11,
    CAN0_SIG_Mod3_volt_9,
    CAN0_SIG_Mod3_volt_10,
    CAN0_SIG_Mod3_volt_11,

    CAN0_SIG_Mod3_temp_valid_0_2,
    CAN0_SIG_Mod3_temp_0,
    CAN0_SIG_Mod3_temp_1,
    CAN0_SIG_Mod3_temp_2,
    CAN0_SIG_Mod3_temp_valid_3_5,
    CAN0_SIG_Mod3_temp_3,
    CAN0_SIG_Mod3_temp_4,
    CAN0_SIG_Mod3_temp_5,
    CAN0_SIG_Mod3_temp_valid_6_8,
    CAN0_SIG_Mod3_temp_6,
    CAN0_SIG_Mod3_temp_7,
    CAN0_SIG_Mod3_temp_8,
    CAN0_SIG_Mod3_temp_valid_9_11,
    CAN0_SIG_Mod3_temp_9,
    CAN0_SIG_Mod3_temp_10,
    CAN0_SIG_Mod3_temp_11,

    CAN0_SIG_Mod4_volt_valid_0_2,
    CAN0_SIG_Mod4_volt_0,
    CAN0_SIG_Mod4_volt_1,
    CAN0_SIG_Mod4_volt_2,
    CAN0_SIG_Mod4_volt_valid_3_5,
    CAN0_SIG_Mod4_volt_3,
    CAN0_SIG_Mod4_volt_4,
    CAN0_SIG_Mod4_volt_5,
    CAN0_SIG_Mod4_volt_valid_6_8,
    CAN0_SIG_Mod4_volt_6,
    CAN0_SIG_Mod4_volt_7,
    CAN0_SIG_Mod4_volt_8,
    CAN0_SIG_Mod4_volt_valid_9_11,
    CAN0_SIG_Mod4_volt_9,
    CAN0_SIG_Mod4_volt_10,
    CAN0_SIG_Mod4_volt_11,

    CAN0_SIG_Mod4_temp_valid_0_2,
    CAN0_SIG_Mod4_temp_0,
    CAN0_SIG_Mod4_temp_1,
    CAN0_SIG_Mod4_temp_2,
    CAN0_SIG_Mod4_temp_valid_3_5,
    CAN0_SIG_Mod4_temp_3,
    CAN0_SIG_Mod4_temp_4,
    CAN0_SIG_Mod4_temp_5,
    CAN0_SIG_Mod4_temp_valid_6_8,
    CAN0_SIG_Mod4_temp_6,
    CAN0_SIG_Mod4_temp_7,
    CAN0_SIG_Mod4_temp_8,
    CAN0_SIG_Mod4_temp_valid_9_11,
    CAN0_SIG_Mod4_temp_9,
    CAN0_SIG_Mod4_temp_10,
    CAN0_SIG_Mod4_temp_11,

    CAN0_SIG_Mod5_volt_valid_0_2,
    CAN0_SIG_Mod5_volt_0,
    CAN0_SIG_Mod5_volt_1,
    CAN0_SIG_Mod5_volt_2,
    CAN0_SIG_Mod5_volt_valid_3_5,
    CAN0_SIG_Mod5_volt_3,
    CAN0_SIG_Mod5_volt_4,
    CAN0_SIG_Mod5_volt_5,
    CAN0_SIG_Mod5_volt_valid_6_8,
    CAN0_SIG_Mod5_volt_6,
    CAN0_SIG_Mod5_volt_7,
    CAN0_SIG_Mod5_volt_8,
    CAN0_SIG_Mod5_volt_valid_9_11,
    CAN0_SIG_Mod5_volt_9,
    CAN0_SIG_Mod5_volt_10,
    CAN0_SIG_Mod5_volt_11,

    CAN0_SIG_Mod5_temp_valid_0_2,
    CAN0_SIG_Mod5_temp_0,
    CAN0_SIG_Mod5_temp_1,
    CAN0_SIG_Mod5_temp_2,
    CAN0_SIG_Mod5_temp_valid_3_5,
    CAN0_SIG_Mod5_temp_3,
    CAN0_SIG_Mod5_temp_4,
    CAN0_SIG_Mod5_temp_5,
    CAN0_SIG_Mod5_temp_valid_6_8,
    CAN0_SIG_Mod5_temp_6,
    CAN0_SIG_Mod5_temp_7,
    CAN0_SIG_Mod5_temp_8,
    CAN0_SIG_Mod5_temp_valid_9_11,
    CAN0_SIG_Mod5_temp_9,
    CAN0_SIG_Mod5_temp_10,
    CAN0_SIG_Mod5_temp_11,

    CAN0_SIG_Mod6_volt_valid_0_2,
    CAN0_SIG_Mod6_volt_0,
    CAN0_SIG_Mod6_volt_1,
    CAN0_SIG_Mod6_volt_2,
    CAN0_SIG_Mod6_volt_valid_3_5,
    CAN0_SIG_Mod6_volt_3,
    CAN0_SIG_Mod6_volt_4,
    CAN0_SIG_Mod6_volt_5,
    CAN0_SIG_Mod6_volt_valid_6_8,
    CAN0_SIG_Mod6_volt_6,
    CAN0_SIG_Mod6_volt_7,
    CAN0_SIG_Mod6_volt_8,
    CAN0_SIG_Mod6_volt_valid_9_11,
    CAN0_SIG_Mod6_volt_9,
    CAN0_SIG_Mod6_volt_10,
    CAN0_SIG_Mod6_volt_11,

    CAN0_SIG_Mod6_temp_valid_0_2,
    CAN0_SIG_Mod6_temp_0,
    CAN0_SIG_Mod6_temp_1,
    CAN0_SIG_Mod6_temp_2,
    CAN0_SIG_Mod6_temp_valid_3_5,
    CAN0_SIG_Mod6_temp_3,
    CAN0_SIG_Mod6_temp_4,
    CAN0_SIG_Mod6_temp_5,
    CAN0_SIG_Mod6_temp_valid_6_8,
    CAN0_SIG_Mod6_temp_6,
    CAN0_SIG_Mod6_temp_7,
    CAN0_SIG_Mod6_temp_8,
    CAN0_SIG_Mod6_temp_valid_9_11,
    CAN0_SIG_Mod6_temp_9,
    CAN0_SIG_Mod6_temp_10,
    CAN0_SIG_Mod6_temp_11,

    CAN0_SIG_Mod7_volt_valid_0_2,
    CAN0_SIG_Mod7_volt_0,
    CAN0_SIG_Mod7_volt_1,
    CAN0_SIG_Mod7_volt_2,
    CAN0_SIG_Mod7_volt_valid_3_5,
    CAN0_SIG_Mod7_volt_3,
    CAN0_SIG_Mod7_volt_4,
    CAN0_SIG_Mod7_volt_5,
    CAN0_SIG_Mod7_volt_valid_6_8,
    CAN0_SIG_Mod7_volt_6,
    CAN0_SIG_Mod7_volt_7,
    CAN0_SIG_Mod7_volt_8,
    CAN0_SIG_Mod7_volt_valid_9_11,
    CAN0_SIG_Mod7_volt_9,
    CAN0_SIG_Mod7_volt_10,
    CAN0_SIG_Mod7_volt_11,

    CAN0_SIG_Mod7_temp_valid_0_2,
    CAN0_SIG_Mod7_temp_0,
    CAN0_SIG_Mod7_temp_1,
    CAN0_SIG_Mod7_temp_2,
    CAN0_SIG_Mod7_temp_valid_3_5,
    CAN0_SIG_Mod7_temp_3,
    CAN0_SIG_Mod7_temp_4,
    CAN0_SIG_Mod7_temp_5,
    CAN0_SIG_Mod7_temp_valid_6_8,
    CAN0_SIG_Mod7_temp_6,
    CAN0_SIG_Mod7_temp_7,
    CAN0_SIG_Mod7_temp_8,
    CAN0_SIG_Mod7_temp_valid_9_11,
    CAN0_SIG_Mod7_temp_9,
    CAN0_SIG_Mod7_temp_10,
    CAN0_SIG_Mod7_temp_11,

#ifdef CAN_ISABELLENHUETTE_TRIGGERED
    CAN0_SIG_ISA_Trigger,
#endif

#if defined(ITRI_MOD_5)
    CAN0_SIG_Mod8_volt_valid_0_2,
    CAN0_SIG_Mod8_volt_0,
    CAN0_SIG_Mod8_volt_1,
    CAN0_SIG_Mod8_volt_2,
    CAN0_SIG_Mod8_volt_valid_3_5,
    CAN0_SIG_Mod8_volt_3,
    CAN0_SIG_Mod8_volt_4,
    CAN0_SIG_Mod8_volt_5,
    CAN0_SIG_Mod8_volt_valid_6_8,
    CAN0_SIG_Mod8_volt_6,
    CAN0_SIG_Mod8_volt_7,
    CAN0_SIG_Mod8_volt_8,
    CAN0_SIG_Mod8_volt_valid_9_11,
    CAN0_SIG_Mod8_volt_9,
    CAN0_SIG_Mod8_volt_10,
    CAN0_SIG_Mod8_volt_11,

    CAN0_SIG_Mod8_temp_valid_0_2,
    CAN0_SIG_Mod8_temp_0,
    CAN0_SIG_Mod8_temp_1,
    CAN0_SIG_Mod8_temp_2,
    CAN0_SIG_Mod8_temp_valid_3_5,
    CAN0_SIG_Mod8_temp_3,
    CAN0_SIG_Mod8_temp_4,
    CAN0_SIG_Mod8_temp_5,
    CAN0_SIG_Mod8_temp_valid_6_8,
    CAN0_SIG_Mod8_temp_6,
    CAN0_SIG_Mod8_temp_7,
    CAN0_SIG_Mod8_temp_8,
    CAN0_SIG_Mod8_temp_valid_9_11,
    CAN0_SIG_Mod8_temp_9,
    CAN0_SIG_Mod8_temp_10,
    CAN0_SIG_Mod8_temp_11,

	CAN0_SIG_Mod9_volt_valid_0_2,
	    CAN0_SIG_Mod9_volt_0,
	    CAN0_SIG_Mod9_volt_1,
	    CAN0_SIG_Mod9_volt_2,
	    CAN0_SIG_Mod9_volt_valid_3_5,
	    CAN0_SIG_Mod9_volt_3,
	    CAN0_SIG_Mod9_volt_4,
	    CAN0_SIG_Mod9_volt_5,
	    CAN0_SIG_Mod9_volt_valid_6_8,
	    CAN0_SIG_Mod9_volt_6,
	    CAN0_SIG_Mod9_volt_7,
	    CAN0_SIG_Mod9_volt_8,
	    CAN0_SIG_Mod9_volt_valid_9_11,
	    CAN0_SIG_Mod9_volt_9,
	    CAN0_SIG_Mod9_volt_10,
	    CAN0_SIG_Mod9_volt_11,

	    CAN0_SIG_Mod9_temp_valid_0_2,
	    CAN0_SIG_Mod9_temp_0,
	    CAN0_SIG_Mod9_temp_1,
	    CAN0_SIG_Mod9_temp_2,
	    CAN0_SIG_Mod9_temp_valid_3_5,
	    CAN0_SIG_Mod9_temp_3,
	    CAN0_SIG_Mod9_temp_4,
	    CAN0_SIG_Mod9_temp_5,
	    CAN0_SIG_Mod9_temp_valid_6_8,
	    CAN0_SIG_Mod9_temp_6,
	    CAN0_SIG_Mod9_temp_7,
	    CAN0_SIG_Mod9_temp_8,
	    CAN0_SIG_Mod9_temp_valid_9_11,
	    CAN0_SIG_Mod9_temp_9,
	    CAN0_SIG_Mod9_temp_10,
	    CAN0_SIG_Mod9_temp_11,

	    CAN0_SIG_Mod10_volt_valid_0_2,
	    CAN0_SIG_Mod10_volt_0,
	    CAN0_SIG_Mod10_volt_1,
	    CAN0_SIG_Mod10_volt_2,
	    CAN0_SIG_Mod10_volt_valid_3_5,
	    CAN0_SIG_Mod10_volt_3,
	    CAN0_SIG_Mod10_volt_4,
	    CAN0_SIG_Mod10_volt_5,
	    CAN0_SIG_Mod10_volt_valid_6_8,
	    CAN0_SIG_Mod10_volt_6,
	    CAN0_SIG_Mod10_volt_7,
	    CAN0_SIG_Mod10_volt_8,
	    CAN0_SIG_Mod10_volt_valid_9_11,
	    CAN0_SIG_Mod10_volt_9,
	    CAN0_SIG_Mod10_volt_10,
	    CAN0_SIG_Mod10_volt_11,

	    CAN0_SIG_Mod10_temp_valid_0_2,
	    CAN0_SIG_Mod10_temp_0,
	    CAN0_SIG_Mod10_temp_1,
	    CAN0_SIG_Mod10_temp_2,
	    CAN0_SIG_Mod10_temp_valid_3_5,
	    CAN0_SIG_Mod10_temp_3,
	    CAN0_SIG_Mod10_temp_4,
	    CAN0_SIG_Mod10_temp_5,
	    CAN0_SIG_Mod10_temp_valid_6_8,
	    CAN0_SIG_Mod10_temp_6,
	    CAN0_SIG_Mod10_temp_7,
	    CAN0_SIG_Mod10_temp_8,
	    CAN0_SIG_Mod10_temp_valid_9_11,
	    CAN0_SIG_Mod10_temp_9,
	    CAN0_SIG_Mod10_temp_10,
	    CAN0_SIG_Mod10_temp_11,

	    CAN0_SIG_Mod11_volt_valid_0_2,
	    CAN0_SIG_Mod11_volt_0,
	    CAN0_SIG_Mod11_volt_1,
	    CAN0_SIG_Mod11_volt_2,
	    CAN0_SIG_Mod11_volt_valid_3_5,
	    CAN0_SIG_Mod11_volt_3,
	    CAN0_SIG_Mod11_volt_4,
	    CAN0_SIG_Mod11_volt_5,
	    CAN0_SIG_Mod11_volt_valid_6_8,
	    CAN0_SIG_Mod11_volt_6,
	    CAN0_SIG_Mod11_volt_7,
	    CAN0_SIG_Mod11_volt_8,
	    CAN0_SIG_Mod11_volt_valid_9_11,
	    CAN0_SIG_Mod11_volt_9,
	    CAN0_SIG_Mod11_volt_10,
	    CAN0_SIG_Mod11_volt_11,

	    CAN0_SIG_Mod11_temp_valid_0_2,
	    CAN0_SIG_Mod11_temp_0,
	    CAN0_SIG_Mod11_temp_1,
	    CAN0_SIG_Mod11_temp_2,
	    CAN0_SIG_Mod11_temp_valid_3_5,
	    CAN0_SIG_Mod11_temp_3,
	    CAN0_SIG_Mod11_temp_4,
	    CAN0_SIG_Mod11_temp_5,
	    CAN0_SIG_Mod11_temp_valid_6_8,
	    CAN0_SIG_Mod11_temp_6,
	    CAN0_SIG_Mod11_temp_7,
	    CAN0_SIG_Mod11_temp_8,
	    CAN0_SIG_Mod11_temp_valid_9_11,
	    CAN0_SIG_Mod11_temp_9,
	    CAN0_SIG_Mod11_temp_10,
	    CAN0_SIG_Mod11_temp_11,

	    CAN0_SIG_Mod12_volt_valid_0_2,
	    CAN0_SIG_Mod12_volt_0,
	    CAN0_SIG_Mod12_volt_1,
	    CAN0_SIG_Mod12_volt_2,
	    CAN0_SIG_Mod12_volt_valid_3_5,
	    CAN0_SIG_Mod12_volt_3,
	    CAN0_SIG_Mod12_volt_4,
	    CAN0_SIG_Mod12_volt_5,
	    CAN0_SIG_Mod12_volt_valid_6_8,
	    CAN0_SIG_Mod12_volt_6,
	    CAN0_SIG_Mod12_volt_7,
	    CAN0_SIG_Mod12_volt_8,
	    CAN0_SIG_Mod12_volt_valid_9_11,
	    CAN0_SIG_Mod12_volt_9,
	    CAN0_SIG_Mod12_volt_10,
	    CAN0_SIG_Mod12_volt_11,

	    CAN0_SIG_Mod12_temp_valid_0_2,
	    CAN0_SIG_Mod12_temp_0,
	    CAN0_SIG_Mod12_temp_1,
	    CAN0_SIG_Mod12_temp_2,
	    CAN0_SIG_Mod12_temp_valid_3_5,
	    CAN0_SIG_Mod12_temp_3,
	    CAN0_SIG_Mod12_temp_4,
	    CAN0_SIG_Mod12_temp_5,
	    CAN0_SIG_Mod12_temp_valid_6_8,
	    CAN0_SIG_Mod12_temp_6,
	    CAN0_SIG_Mod12_temp_7,
	    CAN0_SIG_Mod12_temp_8,
	    CAN0_SIG_Mod12_temp_valid_9_11,
	    CAN0_SIG_Mod12_temp_9,
	    CAN0_SIG_Mod12_temp_10,
	    CAN0_SIG_Mod12_temp_11,

	    CAN0_SIG_Mod13_volt_valid_0_2,
	    CAN0_SIG_Mod13_volt_0,
	    CAN0_SIG_Mod13_volt_1,
	    CAN0_SIG_Mod13_volt_2,
	    CAN0_SIG_Mod13_volt_valid_3_5,
	    CAN0_SIG_Mod13_volt_3,
	    CAN0_SIG_Mod13_volt_4,
	    CAN0_SIG_Mod13_volt_5,
	    CAN0_SIG_Mod13_volt_valid_6_8,
	    CAN0_SIG_Mod13_volt_6,
	    CAN0_SIG_Mod13_volt_7,
	    CAN0_SIG_Mod13_volt_8,
	    CAN0_SIG_Mod13_volt_valid_9_11,
	    CAN0_SIG_Mod13_volt_9,
	    CAN0_SIG_Mod13_volt_10,
	    CAN0_SIG_Mod13_volt_11,

	    CAN0_SIG_Mod13_temp_valid_0_2,
	    CAN0_SIG_Mod13_temp_0,
	    CAN0_SIG_Mod13_temp_1,
	    CAN0_SIG_Mod13_temp_2,
	    CAN0_SIG_Mod13_temp_valid_3_5,
	    CAN0_SIG_Mod13_temp_3,
	    CAN0_SIG_Mod13_temp_4,
	    CAN0_SIG_Mod13_temp_5,
	    CAN0_SIG_Mod13_temp_valid_6_8,
	    CAN0_SIG_Mod13_temp_6,
	    CAN0_SIG_Mod13_temp_7,
	    CAN0_SIG_Mod13_temp_8,
	    CAN0_SIG_Mod13_temp_valid_9_11,
	    CAN0_SIG_Mod13_temp_9,
	    CAN0_SIG_Mod13_temp_10,
	    CAN0_SIG_Mod13_temp_11,

	    CAN0_SIG_Mod14_volt_valid_0_2,
	    CAN0_SIG_Mod14_volt_0,
	    CAN0_SIG_Mod14_volt_1,
	    CAN0_SIG_Mod14_volt_2,
	    CAN0_SIG_Mod14_volt_valid_3_5,
	    CAN0_SIG_Mod14_volt_3,
	    CAN0_SIG_Mod14_volt_4,
	    CAN0_SIG_Mod14_volt_5,
	    CAN0_SIG_Mod14_volt_valid_6_8,
	    CAN0_SIG_Mod14_volt_6,
	    CAN0_SIG_Mod14_volt_7,
	    CAN0_SIG_Mod14_volt_8,
	    CAN0_SIG_Mod14_volt_valid_9_11,
	    CAN0_SIG_Mod14_volt_9,
	    CAN0_SIG_Mod14_volt_10,
	    CAN0_SIG_Mod14_volt_11,

	    CAN0_SIG_Mod14_temp_valid_0_2,
	    CAN0_SIG_Mod14_temp_0,
	    CAN0_SIG_Mod14_temp_1,
	    CAN0_SIG_Mod14_temp_2,
	    CAN0_SIG_Mod14_temp_valid_3_5,
	    CAN0_SIG_Mod14_temp_3,
	    CAN0_SIG_Mod14_temp_4,
	    CAN0_SIG_Mod14_temp_5,
	    CAN0_SIG_Mod14_temp_valid_6_8,
	    CAN0_SIG_Mod14_temp_6,
	    CAN0_SIG_Mod14_temp_7,
	    CAN0_SIG_Mod14_temp_8,
	    CAN0_SIG_Mod14_temp_valid_9_11,
	    CAN0_SIG_Mod14_temp_9,
	    CAN0_SIG_Mod14_temp_10,
	    CAN0_SIG_Mod14_temp_11,

	    CAN0_SIG_Mod15_volt_valid_0_2,
	    CAN0_SIG_Mod15_volt_0,
	    CAN0_SIG_Mod15_volt_1,
	    CAN0_SIG_Mod15_volt_2,
	    CAN0_SIG_Mod15_volt_valid_3_5,
	    CAN0_SIG_Mod15_volt_3,
	    CAN0_SIG_Mod15_volt_4,
	    CAN0_SIG_Mod15_volt_5,
	    CAN0_SIG_Mod15_volt_valid_6_8,
	    CAN0_SIG_Mod15_volt_6,
	    CAN0_SIG_Mod15_volt_7,
	    CAN0_SIG_Mod15_volt_8,
	    CAN0_SIG_Mod15_volt_valid_9_11,
	    CAN0_SIG_Mod15_volt_9,
	    CAN0_SIG_Mod15_volt_10,
	    CAN0_SIG_Mod15_volt_11,

	    CAN0_SIG_Mod15_temp_valid_0_2,
	    CAN0_SIG_Mod15_temp_0,
	    CAN0_SIG_Mod15_temp_1,
	    CAN0_SIG_Mod15_temp_2,
	    CAN0_SIG_Mod15_temp_valid_3_5,
	    CAN0_SIG_Mod15_temp_3,
	    CAN0_SIG_Mod15_temp_4,
	    CAN0_SIG_Mod15_temp_5,
	    CAN0_SIG_Mod15_temp_valid_6_8,
	    CAN0_SIG_Mod15_temp_6,
	    CAN0_SIG_Mod15_temp_7,
	    CAN0_SIG_Mod15_temp_8,
	    CAN0_SIG_Mod15_temp_valid_9_11,
	    CAN0_SIG_Mod15_temp_9,
	    CAN0_SIG_Mod15_temp_10,
	    CAN0_SIG_Mod15_temp_11,

	    CAN0_SIG_Mod16_volt_valid_0_2,
	    CAN0_SIG_Mod16_volt_0,
	    CAN0_SIG_Mod16_volt_1,
	    CAN0_SIG_Mod16_volt_2,
	    CAN0_SIG_Mod16_volt_valid_3_5,
	    CAN0_SIG_Mod16_volt_3,
	    CAN0_SIG_Mod16_volt_4,
	    CAN0_SIG_Mod16_volt_5,
	    CAN0_SIG_Mod16_volt_valid_6_8,
	    CAN0_SIG_Mod16_volt_6,
	    CAN0_SIG_Mod16_volt_7,
	    CAN0_SIG_Mod16_volt_8,
	    CAN0_SIG_Mod16_volt_valid_9_11,
	    CAN0_SIG_Mod16_volt_9,
	    CAN0_SIG_Mod16_volt_10,
	    CAN0_SIG_Mod16_volt_11,

	    CAN0_SIG_Mod16_temp_valid_0_2,
	    CAN0_SIG_Mod16_temp_0,
	    CAN0_SIG_Mod16_temp_1,
	    CAN0_SIG_Mod16_temp_2,
	    CAN0_SIG_Mod16_temp_valid_3_5,
	    CAN0_SIG_Mod16_temp_3,
	    CAN0_SIG_Mod16_temp_4,
	    CAN0_SIG_Mod16_temp_5,
	    CAN0_SIG_Mod16_temp_valid_6_8,
	    CAN0_SIG_Mod16_temp_6,
	    CAN0_SIG_Mod16_temp_7,
	    CAN0_SIG_Mod16_temp_8,
	    CAN0_SIG_Mod16_temp_valid_9_11,
	    CAN0_SIG_Mod16_temp_9,
	    CAN0_SIG_Mod16_temp_10,
	    CAN0_SIG_Mod16_temp_11,

	    CAN0_SIG_Mod17_volt_valid_0_2,
	    CAN0_SIG_Mod17_volt_0,
	    CAN0_SIG_Mod17_volt_1,
	    CAN0_SIG_Mod17_volt_2,
	    CAN0_SIG_Mod17_volt_valid_3_5,
	    CAN0_SIG_Mod17_volt_3,
	    CAN0_SIG_Mod17_volt_4,
	    CAN0_SIG_Mod17_volt_5,
	    CAN0_SIG_Mod17_volt_valid_6_8,
	    CAN0_SIG_Mod17_volt_6,
	    CAN0_SIG_Mod17_volt_7,
	    CAN0_SIG_Mod17_volt_8,
	    CAN0_SIG_Mod17_volt_valid_9_11,
	    CAN0_SIG_Mod17_volt_9,
	    CAN0_SIG_Mod17_volt_10,
	    CAN0_SIG_Mod17_volt_11,

	    CAN0_SIG_Mod17_temp_valid_0_2,
	    CAN0_SIG_Mod17_temp_0,
	    CAN0_SIG_Mod17_temp_1,
	    CAN0_SIG_Mod17_temp_2,
	    CAN0_SIG_Mod17_temp_valid_3_5,
	    CAN0_SIG_Mod17_temp_3,
	    CAN0_SIG_Mod17_temp_4,
	    CAN0_SIG_Mod17_temp_5,
	    CAN0_SIG_Mod17_temp_valid_6_8,
	    CAN0_SIG_Mod17_temp_6,
	    CAN0_SIG_Mod17_temp_7,
	    CAN0_SIG_Mod17_temp_8,
	    CAN0_SIG_Mod17_temp_valid_9_11,
	    CAN0_SIG_Mod17_temp_9,
	    CAN0_SIG_Mod17_temp_10,
	    CAN0_SIG_Mod17_temp_11,

	    CAN0_SIG_Mod18_volt_valid_0_2,
	    CAN0_SIG_Mod18_volt_0,
	    CAN0_SIG_Mod18_volt_1,
	    CAN0_SIG_Mod18_volt_2,
	    CAN0_SIG_Mod18_volt_valid_3_5,
	    CAN0_SIG_Mod18_volt_3,
	    CAN0_SIG_Mod18_volt_4,
	    CAN0_SIG_Mod18_volt_5,
	    CAN0_SIG_Mod18_volt_valid_6_8,
	    CAN0_SIG_Mod18_volt_6,
	    CAN0_SIG_Mod18_volt_7,
	    CAN0_SIG_Mod18_volt_8,
	    CAN0_SIG_Mod18_volt_valid_9_11,
	    CAN0_SIG_Mod18_volt_9,
	    CAN0_SIG_Mod18_volt_10,
	    CAN0_SIG_Mod18_volt_11,

	    CAN0_SIG_Mod18_temp_valid_0_2,
	    CAN0_SIG_Mod18_temp_0,
	    CAN0_SIG_Mod18_temp_1,
	    CAN0_SIG_Mod18_temp_2,
	    CAN0_SIG_Mod18_temp_valid_3_5,
	    CAN0_SIG_Mod18_temp_3,
	    CAN0_SIG_Mod18_temp_4,
	    CAN0_SIG_Mod18_temp_5,
	    CAN0_SIG_Mod18_temp_valid_6_8,
	    CAN0_SIG_Mod18_temp_6,
	    CAN0_SIG_Mod18_temp_7,
	    CAN0_SIG_Mod18_temp_8,
	    CAN0_SIG_Mod18_temp_valid_9_11,
	    CAN0_SIG_Mod18_temp_9,
	    CAN0_SIG_Mod18_temp_10,
	    CAN0_SIG_Mod18_temp_11,

	    CAN0_SIG_Mod19_volt_valid_0_2,
	    CAN0_SIG_Mod19_volt_0,
	    CAN0_SIG_Mod19_volt_1,
	    CAN0_SIG_Mod19_volt_2,
	    CAN0_SIG_Mod19_volt_valid_3_5,
	    CAN0_SIG_Mod19_volt_3,
	    CAN0_SIG_Mod19_volt_4,
	    CAN0_SIG_Mod19_volt_5,
	    CAN0_SIG_Mod19_volt_valid_6_8,
	    CAN0_SIG_Mod19_volt_6,
	    CAN0_SIG_Mod19_volt_7,
	    CAN0_SIG_Mod19_volt_8,
	    CAN0_SIG_Mod19_volt_valid_9_11,
	    CAN0_SIG_Mod19_volt_9,
	    CAN0_SIG_Mod19_volt_10,
	    CAN0_SIG_Mod19_volt_11,

	    CAN0_SIG_Mod19_temp_valid_0_2,
	    CAN0_SIG_Mod19_temp_0,
	    CAN0_SIG_Mod19_temp_1,
	    CAN0_SIG_Mod19_temp_2,
	    CAN0_SIG_Mod19_temp_valid_3_5,
	    CAN0_SIG_Mod19_temp_3,
	    CAN0_SIG_Mod19_temp_4,
	    CAN0_SIG_Mod19_temp_5,
	    CAN0_SIG_Mod19_temp_valid_6_8,
	    CAN0_SIG_Mod19_temp_6,
	    CAN0_SIG_Mod19_temp_7,
	    CAN0_SIG_Mod19_temp_8,
	    CAN0_SIG_Mod19_temp_valid_9_11,
	    CAN0_SIG_Mod19_temp_9,
	    CAN0_SIG_Mod19_temp_10,
	    CAN0_SIG_Mod19_temp_11,

	    CAN0_SIG_Mod20_volt_valid_0_2,
	    CAN0_SIG_Mod20_volt_0,
	    CAN0_SIG_Mod20_volt_1,
	    CAN0_SIG_Mod20_volt_2,
	    CAN0_SIG_Mod20_volt_valid_3_5,
	    CAN0_SIG_Mod20_volt_3,
	    CAN0_SIG_Mod20_volt_4,
	    CAN0_SIG_Mod20_volt_5,
	    CAN0_SIG_Mod20_volt_valid_6_8,
	    CAN0_SIG_Mod20_volt_6,
	    CAN0_SIG_Mod20_volt_7,
	    CAN0_SIG_Mod20_volt_8,
	    CAN0_SIG_Mod20_volt_valid_9_11,
	    CAN0_SIG_Mod20_volt_9,
	    CAN0_SIG_Mod20_volt_10,
	    CAN0_SIG_Mod20_volt_11,

	    CAN0_SIG_Mod20_temp_valid_0_2,
	    CAN0_SIG_Mod20_temp_0,
	    CAN0_SIG_Mod20_temp_1,
	    CAN0_SIG_Mod20_temp_2,
	    CAN0_SIG_Mod20_temp_valid_3_5,
	    CAN0_SIG_Mod20_temp_3,
	    CAN0_SIG_Mod20_temp_4,
	    CAN0_SIG_Mod20_temp_5,
	    CAN0_SIG_Mod20_temp_valid_6_8,
	    CAN0_SIG_Mod20_temp_6,
	    CAN0_SIG_Mod20_temp_7,
	    CAN0_SIG_Mod20_temp_8,
	    CAN0_SIG_Mod20_temp_valid_9_11,
	    CAN0_SIG_Mod20_temp_9,
	    CAN0_SIG_Mod20_temp_10,
	    CAN0_SIG_Mod20_temp_11,

	    CAN0_SIG_Mod21_volt_valid_0_2,
	    CAN0_SIG_Mod21_volt_0,
	    CAN0_SIG_Mod21_volt_1,
	    CAN0_SIG_Mod21_volt_2,
	    CAN0_SIG_Mod21_volt_valid_3_5,
	    CAN0_SIG_Mod21_volt_3,
	    CAN0_SIG_Mod21_volt_4,
	    CAN0_SIG_Mod21_volt_5,
	    CAN0_SIG_Mod21_volt_valid_6_8,
	    CAN0_SIG_Mod21_volt_6,
	    CAN0_SIG_Mod21_volt_7,
	    CAN0_SIG_Mod21_volt_8,
	    CAN0_SIG_Mod21_volt_valid_9_11,
	    CAN0_SIG_Mod21_volt_9,
	    CAN0_SIG_Mod21_volt_10,
	    CAN0_SIG_Mod21_volt_11,

	    CAN0_SIG_Mod21_temp_valid_0_2,
	    CAN0_SIG_Mod21_temp_0,
	    CAN0_SIG_Mod21_temp_1,
	    CAN0_SIG_Mod21_temp_2,
	    CAN0_SIG_Mod21_temp_valid_3_5,
	    CAN0_SIG_Mod21_temp_3,
	    CAN0_SIG_Mod21_temp_4,
	    CAN0_SIG_Mod21_temp_5,
	    CAN0_SIG_Mod21_temp_valid_6_8,
	    CAN0_SIG_Mod21_temp_6,
	    CAN0_SIG_Mod21_temp_7,
	    CAN0_SIG_Mod21_temp_8,
	    CAN0_SIG_Mod21_temp_valid_9_11,
	    CAN0_SIG_Mod21_temp_9,
	    CAN0_SIG_Mod21_temp_10,
	    CAN0_SIG_Mod21_temp_11,

	    CAN0_SIG_Mod22_volt_valid_0_2,
	    CAN0_SIG_Mod22_volt_0,
	    CAN0_SIG_Mod22_volt_1,
	    CAN0_SIG_Mod22_volt_2,
	    CAN0_SIG_Mod22_volt_valid_3_5,
	    CAN0_SIG_Mod22_volt_3,
	    CAN0_SIG_Mod22_volt_4,
	    CAN0_SIG_Mod22_volt_5,
	    CAN0_SIG_Mod22_volt_valid_6_8,
	    CAN0_SIG_Mod22_volt_6,
	    CAN0_SIG_Mod22_volt_7,
	    CAN0_SIG_Mod22_volt_8,
	    CAN0_SIG_Mod22_volt_valid_9_11,
	    CAN0_SIG_Mod22_volt_9,
	    CAN0_SIG_Mod22_volt_10,
	    CAN0_SIG_Mod22_volt_11,

	    CAN0_SIG_Mod22_temp_valid_0_2,
	    CAN0_SIG_Mod22_temp_0,
	    CAN0_SIG_Mod22_temp_1,
	    CAN0_SIG_Mod22_temp_2,
	    CAN0_SIG_Mod22_temp_valid_3_5,
	    CAN0_SIG_Mod22_temp_3,
	    CAN0_SIG_Mod22_temp_4,
	    CAN0_SIG_Mod22_temp_5,
	    CAN0_SIG_Mod22_temp_valid_6_8,
	    CAN0_SIG_Mod22_temp_6,
	    CAN0_SIG_Mod22_temp_7,
	    CAN0_SIG_Mod22_temp_8,
	    CAN0_SIG_Mod22_temp_valid_9_11,
	    CAN0_SIG_Mod22_temp_9,
	    CAN0_SIG_Mod22_temp_10,
	    CAN0_SIG_Mod22_temp_11,

	    CAN0_SIG_Mod23_volt_valid_0_2,
	    CAN0_SIG_Mod23_volt_0,
	    CAN0_SIG_Mod23_volt_1,
	    CAN0_SIG_Mod23_volt_2,
	    CAN0_SIG_Mod23_volt_valid_3_5,
	    CAN0_SIG_Mod23_volt_3,
	    CAN0_SIG_Mod23_volt_4,
	    CAN0_SIG_Mod23_volt_5,
	    CAN0_SIG_Mod23_volt_valid_6_8,
	    CAN0_SIG_Mod23_volt_6,
	    CAN0_SIG_Mod23_volt_7,
	    CAN0_SIG_Mod23_volt_8,
	    CAN0_SIG_Mod23_volt_valid_9_11,
	    CAN0_SIG_Mod23_volt_9,
	    CAN0_SIG_Mod23_volt_10,
	    CAN0_SIG_Mod23_volt_11,

	    CAN0_SIG_Mod23_temp_valid_0_2,
	    CAN0_SIG_Mod23_temp_0,
	    CAN0_SIG_Mod23_temp_1,
	    CAN0_SIG_Mod23_temp_2,
	    CAN0_SIG_Mod23_temp_valid_3_5,
	    CAN0_SIG_Mod23_temp_3,
	    CAN0_SIG_Mod23_temp_4,
	    CAN0_SIG_Mod23_temp_5,
	    CAN0_SIG_Mod23_temp_valid_6_8,
	    CAN0_SIG_Mod23_temp_6,
	    CAN0_SIG_Mod23_temp_7,
	    CAN0_SIG_Mod23_temp_8,
	    CAN0_SIG_Mod23_temp_valid_9_11,
	    CAN0_SIG_Mod23_temp_9,
	    CAN0_SIG_Mod23_temp_10,
	    CAN0_SIG_Mod23_temp_11,

	    CAN0_SIG_Mod24_volt_valid_0_2,
	    CAN0_SIG_Mod24_volt_0,
	    CAN0_SIG_Mod24_volt_1,
	    CAN0_SIG_Mod24_volt_2,
	    CAN0_SIG_Mod24_volt_valid_3_5,
	    CAN0_SIG_Mod24_volt_3,
	    CAN0_SIG_Mod24_volt_4,
	    CAN0_SIG_Mod24_volt_5,
	    CAN0_SIG_Mod24_volt_valid_6_8,
	    CAN0_SIG_Mod24_volt_6,
	    CAN0_SIG_Mod24_volt_7,
	    CAN0_SIG_Mod24_volt_8,
	    CAN0_SIG_Mod24_volt_valid_9_11,
	    CAN0_SIG_Mod24_volt_9,
	    CAN0_SIG_Mod24_volt_10,
	    CAN0_SIG_Mod24_volt_11,

	    CAN0_SIG_Mod24_temp_valid_0_2,
	    CAN0_SIG_Mod24_temp_0,
	    CAN0_SIG_Mod24_temp_1,
	    CAN0_SIG_Mod24_temp_2,
	    CAN0_SIG_Mod24_temp_valid_3_5,
	    CAN0_SIG_Mod24_temp_3,
	    CAN0_SIG_Mod24_temp_4,
	    CAN0_SIG_Mod24_temp_5,
	    CAN0_SIG_Mod24_temp_valid_6_8,
	    CAN0_SIG_Mod24_temp_6,
	    CAN0_SIG_Mod24_temp_7,
	    CAN0_SIG_Mod24_temp_8,
	    CAN0_SIG_Mod24_temp_valid_9_11,
	    CAN0_SIG_Mod24_temp_9,
	    CAN0_SIG_Mod24_temp_10,
	    CAN0_SIG_Mod24_temp_11,
#endif // ITRI_MOD_5

    CAN0_SIGNAL_NONE = 0xFFFF
} CANS_CAN0_signalsTx_e;

/**
 * symbolic names for CAN1 transmission signals
 */
typedef enum {
    CAN1_TX_SIGNAL_NONE = 0xFFFF,
} CANS_CAN1_signalsTx_e;


/**
 * symbolic names for CAN 0 receive signals
 */
typedef enum {
    CAN0_SIG_ReceiveStateRequest,          /*!< current sensor counter */
    CAN0_SIG_IVT_Current_MuxID,            /*!< current sensor measurement type */
    CAN0_SIG_IVT_Current_Status,           /*!< current sensor counter */
    CAN0_SIG_IVT_Current_Measurement,      /*!< current sensor measurement I */
    CAN0_SIG_IVT_Voltage_1_MuxID,          /*!< current sensor measurement type */
    CAN0_SIG_IVT_Voltage_1_Status,         /*!< current sensor counter */
    CAN0_SIG_IVT_Voltage_1_Measurement,    /*!< current sensor measurement U1 */
    CAN0_SIG_IVT_Voltage_2_MuxID,          /*!< current sensor measurement type */
    CAN0_SIG_IVT_Voltage_2_Status,         /*!< current sensor counter */
    CAN0_SIG_IVT_Voltage_2_Measurement,    /*!< current sensor measurement U2 */
    CAN0_SIG_IVT_Voltage_3_MuxID,          /*!< current sensor measurement type */
    CAN0_SIG_IVT_Voltage_3_Status,         /*!< current sensor counter */
    CAN0_SIG_IVT_Voltage_3_Measurement,    /*!< current sensor measurement U3 */
    CAN0_SIG_IVT_Temperature_MuxID,        /*!< current sensor measurement type */
    CAN0_SIG_IVT_Temperature_Status,       /*!< current sensor counter */
    CAN0_SIG_IVT_Temperature_Measurement,  /*!< current sensor measurement T */
    CAN0_SIG_IVT_Power_MuxID,              /*!< current sensor measurement type */
    CAN0_SIG_IVT_Power_Status,             /*!< current sensor counter */
    CAN0_SIG_IVT_Power_Measurement,        /*!< current sensor measurement P */
    CAN0_SIG_IVT_CC_MuxID,                 /*!< current sensor measurement type */
    CAN0_SIG_IVT_CC_Status,                /*!< current sensor counter */
    CAN0_SIG_IVT_CC_Measurement,           /*!< current sensor measurement C-C */
    CAN0_SIG_IVT_EC_MuxID,                 /*!< current sensor measurement type */
    CAN0_SIG_IVT_EC_Status,                /*!< current sensor counter */
    CAN0_SIG_IVT_EC_Measurement,           /*!< current sensor measurement E-C */
    CAN0_SIG_DEBUG_Data,                   /*!< Data of debug message */
    CAN0_SIG_GetReleaseVersion
} CANS_CAN0_signalsRx_e;


/**
 * symbolic names for CAN 1 receive signals
 */
typedef enum {
    CAN1_RX_SIGNAL_NONE = 0xFFFF,
} CANS_CAN1_signalsRx_e;

typedef enum {
    CAN_RX_DIRECTION = 0,
    CAN_TX_DIRECTION = 1
} CANS_messageDirection_t;

typedef union {
    CANS_messagesTx_e Tx;
    CANS_messagesRx_e Rx;
} CANS_messages_t;

typedef union {
    CANS_CAN0_signalsTx_e Tx;
    CANS_CAN0_signalsRx_e Rx;
} CANS_signals_t;

/**
 * type definition for structure of a CAN signal
 *
 * until now, multiplexed signal handling is hard coded
 * in the corresponding getters/setters. For use of multiplexed
 * signals refer to description in documentation.
 *
 * support for automatic scaling is planned, but not implemented yet,
 * so min, max, factor and offset are not relevant.
 */
typedef struct  {
    CANS_messages_t msgIdx;
    uint8_t bit_position;
    uint8_t bit_length;
    float min;
    float max;
    float factor;
    float offset;
    can_callback_funcPtr setter;
    can_callback_funcPtr getter;
} CANS_signal_s;

/*================== Constant and Variable Definitions ====================*/

/**
 * array for transmission CAN0 signals definition
 */
extern const CANS_signal_s cans_CAN0_signals_tx[];

/**
 * array for transmission CAN1 signals definition
 */
extern const CANS_signal_s cans_CAN1_signals_tx[];

/**
 * array for received CAN0 signals definition
 */
extern const CANS_signal_s cans_CAN0_signals_rx[];

/**
 * array for received CAN1 signals definition
 */
extern const CANS_signal_s cans_CAN1_signals_rx[];

/**
 * length of the array for the CAN0 tx signals
 */
extern const uint16_t cans_CAN0_signals_tx_length;

/**
 * length of the array for the CAN1 tx signals
 */
extern const uint16_t cans_CAN1_signals_tx_length;

/**
 * length of the array for the CAN0 rx signals
 */
extern const uint16_t cans_CAN0_signals_rx_length;

/**
 * length of the array for the CAN1 rx signals
 */
extern const uint16_t cans_CAN1_signals_rx_length;

/*================== Function Prototypes ==================================*/


/*================== Function Implementations =============================*/

#endif /* CANSIGNAL_CFG_H_ */
