/*
 * ltc_itri.c
 *
 *  Created on: 2019/5/21/
 *      Author: A50130
 */
#include "general.h"

#if defined(ITRI_MOD_2)
#include "database.h"

extern void*    LTC_ThirdParty_Get_static_var(char* varName);

typedef uint32_t (*ltc_prop_funcPtr)(void* iParam1, void* iParam2, void* oParam1, void* oParam2);

uint32_t get_BS_NR_OF_MODULES(void* iParam1, void* iParam2, void* oParam1, void* oParam2) {
	uint32_t* pOut = (uint32_t*)oParam1;
	*pOut = (uint32_t)BS_NR_OF_MODULES;
	return 0;
}

uint32_t get_BS_NR_OF_BAT_CELLS_PER_MODULE(void* iParam1, void* iParam2, void* oParam1, void* oParam2) {
	uint32_t* pOut = (uint32_t*)oParam1;
	*pOut = (uint32_t)BS_NR_OF_BAT_CELLS_PER_MODULE;
	return 0;
}

uint32_t get_LTC_CellVoltages(void* iParam1, void* iParam2, void* oParam1, void* oParam2) {
	uint32_t modIdx = *(uint32_t*)iParam1, i;
	char *com_out_buf = (char*)oParam1;

	DATA_BLOCK_CELLVOLTAGE_s* p_ltc_cellvoltage = (DATA_BLOCK_CELLVOLTAGE_s*)LTC_ThirdParty_Get_static_var("ltc_cellvoltage");

#if 1
	sprintf(com_out_buf, "M[%02u]", modIdx);
	for (i=0; i < BS_NR_OF_BAT_CELLS_PER_MODULE; i++) {
		sprintf(com_out_buf, "%s %u", com_out_buf, p_ltc_cellvoltage->voltage[modIdx*(BS_NR_OF_BAT_CELLS_PER_MODULE)+i]);
	}
#else
	sprintf(com_out_buf, "M[%u] %u %u %u %u %u %u %u ", modIdx,
			p_ltc_cellvoltage->voltage[modIdx*(BS_NR_OF_BAT_CELLS_PER_MODULE)+0],
			p_ltc_cellvoltage->voltage[modIdx*(BS_NR_OF_BAT_CELLS_PER_MODULE)+1],
			p_ltc_cellvoltage->voltage[modIdx*(BS_NR_OF_BAT_CELLS_PER_MODULE)+2],
			p_ltc_cellvoltage->voltage[modIdx*(BS_NR_OF_BAT_CELLS_PER_MODULE)+3],
			p_ltc_cellvoltage->voltage[modIdx*(BS_NR_OF_BAT_CELLS_PER_MODULE)+4],
			p_ltc_cellvoltage->voltage[modIdx*(BS_NR_OF_BAT_CELLS_PER_MODULE)+5],
			p_ltc_cellvoltage->voltage[modIdx*(BS_NR_OF_BAT_CELLS_PER_MODULE)+6]);
#endif
	//DEBUG_PRINTF(("%s\r\n", com_out_buf));

	return 0;
}

typedef struct {
	char 			 prop[48];
	ltc_prop_funcPtr propFunc;
} LTC_PROP_s;

LTC_PROP_s ltc_props[] = {
	{"get_BS_NR_OF_MODULES", 				&get_BS_NR_OF_MODULES},
	{"get_BS_NR_OF_BAT_CELLS_PER_MODULE", 	&get_BS_NR_OF_BAT_CELLS_PER_MODULE},
	{"get_LTC_CellVoltages", 				&get_LTC_CellVoltages},
};

uint32_t LTC_ThirdParty_Set_Get_Property(char* prop, void* iParam1, void* iParam2, void* oParam1, void* oParam2)
{
	uint32_t i, ltc_props_len = sizeof(ltc_props) / sizeof(ltc_props[0]);

	if (prop == NULL) return 1;

	for (i=0; i < ltc_props_len; i++) {
		if (strcmp(prop, ltc_props[i].prop) == 0) {
			if (ltc_props[i].propFunc == NULL) break;
			return ltc_props[i].propFunc(iParam1, iParam2, oParam1, oParam2);
		}
	}
	DEBUG_PRINTF(("[%s:%d]unknown prop(%s)\r\n", __FILE__, __LINE__, prop));

	return 0;
}

#endif // ITRI_MOD_2
