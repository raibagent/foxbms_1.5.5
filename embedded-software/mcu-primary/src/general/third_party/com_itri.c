#include "general.h"

#if defined(ITRI_MOD_1)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* float_to_string(float v)
{
	static char g_ftBuf[16] = {0, };
	int decimalDigits = 4;
	int i = 1;
	int intPart, fractPart;
	for (;decimalDigits!=0; i*=10, decimalDigits--);
	intPart = (int)v;
	fractPart = (int)((v-(float)(int)v)*i);
	if(fractPart < 0) fractPart *= -1;
	sprintf(g_ftBuf, "%i.%i", intPart, fractPart);
	return g_ftBuf;
}

typedef uint32_t (*rb_cmd_funcPtr)(char* params);

static char com_ltc_out_buf[128] = {0, };

uint32_t rb_cmd_test_func_1(char* params) {
	DEBUG_PRINTF(("DEBUG_PRINTF_EX test, float(%s), int(%d), hex(0x%02X), str(%s)\r\n", float_to_string(1.234), 123, 16, "A", "abc"));
	return 0;
}

#if defined(ITRI_MOD_2)
extern uint32_t LTC_ThirdParty_Set_Get_Property(char* prop, void* iParam1, void* iParam2, void* oParam1, void* oParam2);

uint32_t rb_cmd_get_BS_NR_OF_MODULES(char* params) {
	uint32_t numMod = 0;

	LTC_ThirdParty_Set_Get_Property("get_BS_NR_OF_MODULES", NULL, NULL, (void*)&numMod, NULL);
	DEBUG_PRINTF(("BS_NR_OF_MODULES=%u\r\n", numMod));
	return 0;
}

uint32_t rb_cmd_get_BS_NR_OF_BAT_CELLS_PER_MODULE(char* params) {
	uint32_t numMod = 0;

	LTC_ThirdParty_Set_Get_Property("get_BS_NR_OF_BAT_CELLS_PER_MODULE", NULL, NULL, (void*)&numMod, NULL);
	DEBUG_PRINTF(("BS_NR_OF_BAT_CELLS_PER_MODULE=%u\r\n", numMod));
	return 0;
}

uint32_t rb_cmd_get_LTC_CellVoltages(char* params) {
	//char* pCmd = strtok(params, " ");
	char* pParam = strtok(NULL, " ");
	uint32_t modIdx = (uint32_t)atoi(pParam);

	LTC_ThirdParty_Set_Get_Property("get_LTC_CellVoltages", (void*)&modIdx, NULL, com_ltc_out_buf, NULL);
	DEBUG_PRINTF(("%s\r\n", com_ltc_out_buf));

	return 0;
}

uint32_t rb_cmd_get_LTC_GPIOVoltages(char* params) {
	char* pCmd = strtok(params, " ");
	char* pParam = strtok(NULL, " ");
	uint32_t modIdx = (uint32_t)atoi(pParam);

	LTC_ThirdParty_Set_Get_Property("get_LTC_GPIOVoltages", (void*)&modIdx, NULL, com_ltc_out_buf, NULL);
	DEBUG_PRINTF(("%s\r\n", com_ltc_out_buf));

	return 0;
}

#endif // ITRI_MOD_2

typedef struct {
	char cmd[48];
	char desc[64];
	rb_cmd_funcPtr cmdFunc;
} RB_CMD_s;

RB_CMD_s rb_cmds[] = {
	{"test_func_1", 						"test func_1", 							&rb_cmd_test_func_1},
#if defined(ITRI_MOD_2)
	{"get_BS_NR_OF_MODULES", 				"number of modules", 					&rb_cmd_get_BS_NR_OF_MODULES},
	{"get_BS_NR_OF_BAT_CELLS_PER_MODULE", 	"number of bat. cells per module", 		&rb_cmd_get_BS_NR_OF_BAT_CELLS_PER_MODULE},
	{"get_LTC_CellVoltages", 				"cmd [module no.] ", 					&rb_cmd_get_LTC_CellVoltages},
	{"get_LTC_GPIOVoltages", 				"cmd [module no.] ", 					&rb_cmd_get_LTC_GPIOVoltages},
#endif // ITRI_MOD_2
};

void COM_ThirdParty_printHelpCommand(uint8_t* cnt)
{
	static uint8_t rb_cmd_idx = 0;

	if (rb_cmd_idx == 0) {
		DEBUG_PRINTF(("==========================  ==========================================================================================\r\n"));
	}

	DEBUG_PRINTF(("%-27s %s\r\n", rb_cmds[rb_cmd_idx].cmd, rb_cmds[rb_cmd_idx].desc));
	rb_cmd_idx++;
	if (rb_cmd_idx < sizeof(rb_cmds)/sizeof(rb_cmds[0])) (*cnt)--;
	else rb_cmd_idx = 0;
}

// return:
// 0: valid third-party command
// 1: invalid command
uint8_t COM_ThirdParty_Decoder(char* com_receivedbyte)
{
	uint32_t i, cmd_len = sizeof(rb_cmds) / sizeof(rb_cmds[0]);
	char cmdStr[128];
	char* pCmd = NULL;

	strcpy(cmdStr, com_receivedbyte);
	pCmd = strtok(cmdStr, " ");

	for (i=0; i < cmd_len; i++) {
		if (strcmp(pCmd, rb_cmds[i].cmd) == 0) {
			rb_cmds[i].cmdFunc(com_receivedbyte);
			return 0;
		}
	}

	return 1;
}
#endif // ITRI_MOD
