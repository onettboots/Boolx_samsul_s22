/*
 * Samsung Exynos SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_GN3_H
#define IS_CIS_GN3_H

#include "is-cis.h"

#define SENSOR_GN3_MAX_WIDTH		(8160 + 0)
#define SENSOR_GN3_MAX_HEIGHT		(6120 + 0)

#define SENSOR_GN3_FINE_INTEGRATION_TIME_MIN                0x100
#define SENSOR_GN3_FINE_INTEGRATION_TIME_MAX                0x100
#define SENSOR_GN3_COARSE_INTEGRATION_TIME_MIN              0x6
#define SENSOR_GN3_COARSE_INTEGRATION_TIME_MAX_MARGIN       0x24

#define AEB_GN3_LUT0	0x0E10
#define AEB_GN3_LUT1	0x0E1E

#define AEB_GN3_OFFSET_CIT		0x0
#define AEB_GN3_OFFSET_AGAIN	0x2
#define AEB_GN3_OFFSET_DGAIN	0x4
#define AEB_GN3_OFFSET_FLL		0x6

#define CIS_CALIBRATION	1
#if IS_ENABLED(CIS_CALIBRATION)
enum gn3_endian {
	GN3_LITTLE_ENDIAN = 0,
	GN3_BIG_ENDIAN = 1,
};
#define GN3_ENDIAN(a, b, endian)  ((endian == GN3_BIG_ENDIAN) ? ((a << 8)|(b)) : ((a)|(b << 8)))

#define GN3_BURST_WRITE	1
#define GN3_CAL_ROW_LEN	(3)
#define GN3_CAL_START_ADDR	(0)
#define GN3_CAL_END_ADDR	(1)
#define GN3_CAL_BURST_CHECK	(2)
#endif

#define USE_GROUP_PARAM_HOLD	(0)

#define GN3_IDCG_AF_HCG	1
#if IS_ENABLED(GN3_IDCG_AF_HCG)
#define GN3_IDCG_AF_FCI	(0x0107)
#else
#define GN3_IDCG_AF_FCI	(0x0108)
#endif

enum sensor_gn3_mode_enum {
	SENSOR_GN3_8160X6120_27FPS = 0,
	SENSOR_GN3_7680X4320_30FPS = 1,
	SENSOR_GN3_4080X3060_30FPS_CROP_R10 = 2,
	SENSOR_GN3_4080X3060_30FPS_CROP_R12 = 3,
	SENSOR_GN3_4080X3060_60FPS_IDCG_R12 = 4,
	SENSOR_GN3_4080X3060_60FPS_R10 = 5,
	SENSOR_GN3_4080X3060_60FPS_R12 = 6,
	SENSOR_GN3_4080X2720_60FPS_IDCG_R12 = 7,
	SENSOR_GN3_4080X2720_60FPS_R10 = 8,
	SENSOR_GN3_4080X2720_60FPS_R12 = 9,
	SENSOR_GN3_4080X2296_60FPS_IDCG_R12 = 10,
	SENSOR_GN3_4080X2296_60FPS_R10 = 11,
	SENSOR_GN3_4080X2296_60FPS_R12 = 12,
	SENSOR_GN3_3328X1872_120FPS = 13,
	SENSOR_GN3_2800X2100_30FPS = 14,
	SENSOR_GN3_2040X1532_120FPS = 15,
	SENSOR_GN3_2040X1148_240FPS = 16,
	SENSOR_GN3_2040X1148_480FPS = 17,
	SENSOR_GN3_2040X1532_30FPS = 18,

	SENSOR_GN3_4080X3060_60FPS_LN2_R12 = 19,
	SENSOR_GN3_4080X3060_60FPS_LN2_R10 = 20,
	SENSOR_GN3_4080X2720_60FPS_LN2_R12 = 21,
	SENSOR_GN3_4080X2720_60FPS_LN2_R10 = 22,
	SENSOR_GN3_4080X2296_60FPS_LN2_R12 = 23,
	SENSOR_GN3_4080X2296_60FPS_LN2_R10 = 24,
	SENSOR_GN3_4080X3060_60FPS_LN4_R12 = 25,
	SENSOR_GN3_4080X3060_60FPS_LN4_R10 = 26,
	SENSOR_GN3_4080X2296_60FPS_LN4_R12 = 27,
	SENSOR_GN3_4080X2296_60FPS_LN4_R10 = 28,

	SENSOR_GN3_MODE_MAX,
};

#if IS_ENABLED(USE_CAMERA_SENSOR_RETENTION)
enum sensor_gn3_load_sram_mode {
	SENSOR_GN3_8160X6120_27FPS_R10_LOAD_SRAM = 0,
	SENSOR_GN3_7680X4320_30FPS_R10_LOAD_SRAM = 1,
	SENSOR_GN3_2040X1148_240FPS_R10_LOAD_SRAM = 2,
	SENSOR_GN3_2040X1532_120FPS_R10_LOAD_SRAM = 3,

	SENSOR_GN3_4080X3060_30FPS_CROP_R12_LOAD_SRAM = 4,
	SENSOR_GN3_4080X3060_30FPS_CROP_R10_LOAD_SRAM = 5,
	SENSOR_GN3_4080X3060_60FPS_R12_LOAD_SRAM = 6,
	SENSOR_GN3_4080X3060_60FPS_R10_LOAD_SRAM = 7,
	SENSOR_GN3_4080X2720_60FPS_R12_LOAD_SRAM = 8,
	SENSOR_GN3_4080X2720_60FPS_R10_LOAD_SRAM = 9,
	SENSOR_GN3_4080X2296_60FPS_R12_LOAD_SRAM = 10,
	SENSOR_GN3_4080X2296_60FPS_R10_LOAD_SRAM = 11,

	SENSOR_GN3_4080X3060_60FPS_LN2_R12_LOAD_SRAM = 12,
	SENSOR_GN3_4080X3060_60FPS_LN2_R10_LOAD_SRAM = 13,
	SENSOR_GN3_4080X2720_60FPS_LN2_R12_LOAD_SRAM = 14,
	SENSOR_GN3_4080X2720_60FPS_LN2_R10_LOAD_SRAM = 15,
	SENSOR_GN3_4080X2296_60FPS_LN2_R12_LOAD_SRAM = 16,
	SENSOR_GN3_4080X2296_60FPS_LN2_R10_LOAD_SRAM = 17,
	SENSOR_GN3_4080X3060_60FPS_LN4_R12_LOAD_SRAM = 18,
	SENSOR_GN3_4080X3060_60FPS_LN4_R10_LOAD_SRAM = 19,
	SENSOR_GN3_4080X2296_60FPS_LN4_R12_LOAD_SRAM = 20,
	SENSOR_GN3_4080X2296_60FPS_LN4_R10_LOAD_SRAM = 21,

	SENSOR_GN3_4080X3060_60FPS_IDCG_R12_LOAD_SRAM = 22,
	SENSOR_GN3_4080X2296_60FPS_IDCG_R12_LOAD_SRAM = 23,
	SENSOR_GN3_4080X2720_60FPS_IDCG_R12_LOAD_SRAM = 24,

	SENSOR_GN3_LOAD_SRAM_MAX,
};
#endif

//{ max_analog_gain, max_digital_gain, min_coarse_integration_time, max_margin_coarse_integration_time, },
struct sensor_common_mode_attr sensor_gn3_common_mode_attr[SENSOR_GN3_MODE_MAX] = {
	{0x200,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_8160X6120_27FPS = 0,
	{0x200,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_7680X4320_30FPS = 1,
	{0x200,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X3060_30FPS_CROP_R10 = 2,
	{0x200,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X3060_30FPS_CROP_R12 = 3,
	{0x200,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X3060_60FPS_IDCG_R12 = 4,
	{0x800,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X3060_60FPS_R10 = 5,
	{0x800,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X3060_60FPS_R12 = 6,
	{0x200,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X2720_60FPS_IDCG_R12 = 7,
	{0x800,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X2720_60FPS_R10 = 8,
	{0x800,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X2720_60FPS_R12 = 9,
	{0x200,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X2296_60FPS_IDCG_R12 = 10,
	{0x800,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X2296_60FPS_R10 = 11,
	{0x800,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_4080X2296_60FPS_R12 = 12,
	{0x800,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_3328X1872_120FPS = 13,
	{0x800,	0x0C00,	0x4,	0x24,	},//SENSOR_GN3_2800X2100_30FPS = 14,
	{0x800,	0x0C00,	0x8,	0x18,	},//SENSOR_GN3_2040X1532_120FPS = 15,
	{0x800,	0x0C00,	0x8,	0x18,	},//SENSOR_GN3_2040X1148_240FPS = 16,
	{0x800,	0x0C00,	0x8,	0x18,	},//SENSOR_GN3_2040X1148_480FPS = 17,
	{0x800,	0x0C00,	0x8,	0x18,	},//SENSOR_GN3_2040X1532_30FPS = 18,

	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X3060_60FPS_LN2_R12,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X3060_60FPS_LN2_R10,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X2720_60FPS_LN2_R12,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X2720_60FPS_LN2_R10,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X2296_60FPS_LN2_R12,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X2296_60FPS_LN2_R10,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X3060_60FPS_LN4_R12,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X3060_60FPS_LN4_R10,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X2296_60FPS_LN4_R12,
	{0x800,	0x0C00,	0x8,	0x48,	},//SENSOR_GN3_4080X2296_60FPS_LN4_R10,
};

struct sensor_gn3_specific_mode_attr {
	bool wb_gain_support;
	bool highres_capture_mode;
	bool aeb_support;
	enum is_sensor_12bit_state status_12bit;
	int cit_align;
};

#define GN3_CIT_ALIGN_1_STEP	(1)
#define GN3_CIT_ALIGN_2_STEP	(2)
#define GN3_CIT_ALIGN_4_STEP	(4)

struct sensor_gn3_specific_mode_attr sensor_gn3_spec_mode_attr[SENSOR_GN3_MODE_MAX] = {
	{true,	true,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_1_STEP},//SENSOR_GN3_8160X6120_27FPS = 0,
	{true,	true,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_1_STEP},//SENSOR_GN3_7680X4320_30FPS = 1,
	{true,	true,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_1_STEP},//SENSOR_GN3_4080X3060_30FPS_CROP_R10 = 2,
	{true,	true,	false,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_1_STEP},//SENSOR_GN3_4080X3060_30FPS_CROP_R12 = 3,
	{false,	false,	false,	SENSOR_12BIT_STATE_REAL_12BIT,		GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X3060_60FPS_IDCG_R12 = 4,
	{false,	false,	true,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X3060_60FPS_R10 = 5,
	{false,	false,	true,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X3060_60FPS_R12 = 6,
	{false,	false,	false,	SENSOR_12BIT_STATE_REAL_12BIT,		GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2720_60FPS_IDCG_R12 = 7,
	{false,	false,	true,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2720_60FPS_R10 = 8,
	{false,	false,	true,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2720_60FPS_R12 = 9,
	{false,	false,	false,	SENSOR_12BIT_STATE_REAL_12BIT,		GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2296_60FPS_IDCG_R12 = 10,
	{false,	false,	true,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2296_60FPS_R10 = 11,
	{false,	false,	true,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2296_60FPS_R12 = 12,
	{false,	false,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_3328X1872_120FPS = 13,
	{false,	false,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_2800X2100_30FPS = 14,
	{false,	false,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_4_STEP},//SENSOR_GN3_2040X1532_120FPS = 15,
	{false,	false,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_4_STEP},//SENSOR_GN3_2040X1148_240FPS = 16,
	{false,	false,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_4_STEP},//SENSOR_GN3_2040X1148_480FPS = 17,
	{false,	false,	false,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_4_STEP},//SENSOR_GN3_2040X1532_30FPS = 18,
	{false,	false,	true,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X3060_60FPS_LN2_R12,
	{false,	false,	true,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X3060_60FPS_LN2_R10,
	{false,	false,	true,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2720_60FPS_LN2_R12,
	{false,	false,	true,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2720_60FPS_LN2_R10,
	{false,	false,	true,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2296_60FPS_LN2_R12,
	{false,	false,	true,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2296_60FPS_LN2_R10,
	{false,	false,	true,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X3060_60FPS_LN4_R12,
	{false,	false,	true,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X3060_60FPS_LN4_R10,
	{false,	false,	true,	SENSOR_12BIT_STATE_PSEUDO_12BIT,	GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2296_60FPS_LN4_R12,
	{false,	false,	true,	SENSOR_12BIT_STATE_OFF,				GN3_CIT_ALIGN_2_STEP},//SENSOR_GN3_4080X2296_60FPS_LN4_R10,
};

#define MODE_GROUP_NONE (-1)
enum sensor_gn3_mode_group_enum {
	SENSOR_GN3_MODE_DEFAULT,
	SENSOR_GN3_MODE_IDCG,
	SENSOR_GN3_MODE_LN2,
	SENSOR_GN3_MODE_LN4,
	SENSOR_GN3_MODE_ABS,
	SENSOR_GN3_MODE_MODE_GROUP_MAX
};
u32 sensor_gn3_mode_groups[SENSOR_GN3_MODE_MODE_GROUP_MAX];

#if IS_ENABLED(USE_CAMERA_SENSOR_RETENTION)
#define GN3_FCI_NONE (0x00FF)
#define SENSOR_GN3_LOAD_SRAM_IDX_NONE (-1)
#define SENSOR_GN3_ABS_1_FAST_CHANGE_IDX (0x0103)

struct sensor_gn3_specific_mode_retention_attr {
	u32 fast_change_idx;
	u32 load_sram_idx;
};

struct sensor_gn3_specific_mode_retention_attr sensor_gn3_spec_mode_retention_attr[SENSOR_GN3_MODE_MAX] = {
	{0x0100,			SENSOR_GN3_8160X6120_27FPS_R10_LOAD_SRAM,		},//SENSOR_GN3_8160X6120_27FPS = 0,
	{0x0100,			SENSOR_GN3_7680X4320_30FPS_R10_LOAD_SRAM,		},//SENSOR_GN3_7680X4320_30FPS = 1,
	{0x0103,			SENSOR_GN3_4080X3060_30FPS_CROP_R10_LOAD_SRAM,	},//SENSOR_GN3_4080X3060_30FPS_CROP_R10 = 2,
	{0x0103,			SENSOR_GN3_4080X3060_30FPS_CROP_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X3060_30FPS_CROP_R12 = 3,
	{GN3_IDCG_AF_FCI,	SENSOR_GN3_4080X3060_60FPS_IDCG_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X3060_60FPS_IDCG_R12 = 4,
	{0x0104,			SENSOR_GN3_4080X3060_60FPS_R10_LOAD_SRAM,		},//SENSOR_GN3_4080X3060_60FPS_R10 = 5,
	{0x0104,			SENSOR_GN3_4080X3060_60FPS_R12_LOAD_SRAM,		},//SENSOR_GN3_4080X3060_60FPS_R12 = 6,
	{GN3_IDCG_AF_FCI,	SENSOR_GN3_4080X2720_60FPS_IDCG_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X2720_60FPS_IDCG_R12 = 7,
	{0x0104,			SENSOR_GN3_4080X2720_60FPS_R10_LOAD_SRAM,		},//SENSOR_GN3_4080X2720_60FPS_R10 = 8,
	{0x0104,			SENSOR_GN3_4080X2720_60FPS_R12_LOAD_SRAM,		},//SENSOR_GN3_4080X2720_60FPS_R12 = 9,
	{GN3_IDCG_AF_FCI,	SENSOR_GN3_4080X2296_60FPS_IDCG_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X2296_60FPS_IDCG_R12 = 10,
	{0x0104,			SENSOR_GN3_4080X2296_60FPS_R10_LOAD_SRAM,		},//SENSOR_GN3_4080X2296_60FPS_R10 = 11,
	{0x0104,			SENSOR_GN3_4080X2296_60FPS_R12_LOAD_SRAM,		},//SENSOR_GN3_4080X2296_60FPS_R12 = 12,
	{GN3_FCI_NONE,		SENSOR_GN3_LOAD_SRAM_IDX_NONE,					},//SENSOR_GN3_3328X1872_120FPS = 13,
	{GN3_FCI_NONE,		SENSOR_GN3_LOAD_SRAM_IDX_NONE,					},//SENSOR_GN3_2800X2100_30FPS = 14,
	{0x0101,			SENSOR_GN3_2040X1532_120FPS_R10_LOAD_SRAM,		},//SENSOR_GN3_2040X1532_120FPS = 15,
	{0x0101,			SENSOR_GN3_2040X1148_240FPS_R10_LOAD_SRAM,		},//SENSOR_GN3_2040X1148_240FPS = 16,
	{0x0102,			SENSOR_GN3_LOAD_SRAM_IDX_NONE,					},//SENSOR_GN3_2040X1148_480FPS = 17,
	{GN3_FCI_NONE,		SENSOR_GN3_LOAD_SRAM_IDX_NONE,					},//SENSOR_GN3_2040X1532_30FPS = 18,

	{0x0105,			SENSOR_GN3_4080X3060_60FPS_LN2_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X3060_60FPS_LN2_R12,
	{0x0105,			SENSOR_GN3_4080X3060_60FPS_LN2_R10_LOAD_SRAM,	},//SENSOR_GN3_4080X3060_60FPS_LN2_R10,
	{0x0105,			SENSOR_GN3_4080X2720_60FPS_LN2_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X2720_60FPS_LN2_R12,
	{0x0105,			SENSOR_GN3_4080X2720_60FPS_LN2_R10_LOAD_SRAM,	},//SENSOR_GN3_4080X2720_60FPS_LN2_R10,
	{0x0105,			SENSOR_GN3_4080X2296_60FPS_LN2_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X2296_60FPS_LN2_R12,
	{0x0105,			SENSOR_GN3_4080X2296_60FPS_LN2_R10_LOAD_SRAM,	},//SENSOR_GN3_4080X2296_60FPS_LN2_R10,

	{0x0106,			SENSOR_GN3_4080X3060_60FPS_LN4_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X3060_60FPS_LN4_R12,
	{0x0106,			SENSOR_GN3_4080X3060_60FPS_LN4_R10_LOAD_SRAM,	},//SENSOR_GN3_4080X3060_60FPS_LN4_R10,
	{0x0106,			SENSOR_GN3_4080X2296_60FPS_LN4_R12_LOAD_SRAM,	},//SENSOR_GN3_4080X2296_60FPS_LN4_R12,
	{0x0106,			SENSOR_GN3_4080X2296_60FPS_LN4_R10_LOAD_SRAM,	},//SENSOR_GN3_4080X2296_60FPS_LN4_R10,
};
#endif

static const u32 sensor_gn3_cis_dual_master_settings[] = {
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0A70,	0x0001,	0x02,
	0x0A72,	0x0100,	0x02,
	0x0A74,	0x0000,	0x02,
	0x0A76,	0x0000,	0x02,
	0x0A78,	0x0000,	0x02,
	0x0A7A,	0x0000,	0x02,
	0x0A7C,	0x0000,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xFC56,	0x0000,	0x02,
	0xFC40,	0x0000,	0x02,
	0xFC42,	0x0000,	0x02,
	0xFCD0,	0x0000,	0x02,
	0xFC62,	0x0000,	0x02,
	0xFC64,	0x0000,	0x02,
	0x0F24,	0x0002,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

static const u32 sensor_gn3_cis_dual_master_settings_size =
	ARRAY_SIZE(sensor_gn3_cis_dual_master_settings);

static const u32 sensor_gn3_cis_dual_slave_settings[] = {
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x0A70,	0x0001,	0x02,
	0x0A72,	0x0001,	0x02,
	0x0A74,	0x0000,	0x02,
	0x0A76,	0x0001,	0x02,
	0x0A78,	0x0000,	0x02,
	0x0A7A,	0x0000,	0x02,
	0x0A7C,	0x0000,	0x02,
	0xFCFC,	0x2000,	0x02,
	0xFC56,	0x0000,	0x02,
	0xFC40,	0x0001,	0x02,
	0xFC42,	0x0000,	0x02,
	0xFCD0,	0x003C,	0x02,
	0xFC62,	0x0028,	0x02,
	0xFC64,	0x0028,	0x02,
	0x0F24,	0x0200,	0x02,
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0085,	0x02,
};

static const u32 sensor_gn3_cis_dual_slave_settings_size =
	ARRAY_SIZE(sensor_gn3_cis_dual_slave_settings);

#if IS_ENABLED(CIS_CALIBRATION)
static u32 sensor_gn3_pre_XTC_1[] = {
	0xFCFC,	0x4000,	0x02,
	0x6000,	0x0005,	0x02,
	0x0100,	0x0003,	0x02,
	I2C_MODE_DELAY,        5000,        0x00,
	0xFCFC,	0x2000,	0x02,
	0xDA62,	0x0000,	0x02,
	0xDAA4,	0x123D,	0x02,
	0xDA60,	0x0100,	0x02,
	0xDAA2,	0x0001,	0x02,
	0xDAAA,	0x0200,	0x02,
	0xFCFC,	0x2002,	0x02,
	0xFCFC,	0x4000,	0x02,
#if IS_ENABLED(GN3_BURST_WRITE)
	0x6004,	0x0001,	0x02,
#endif
	0x6028,	0x2002,	0x02,
	0x602A,	0x8320,	0x02,
};
static u32 sensor_gn3_post_XTC_1[] = {
	0xFCFC,	0x4000,	0x02,
#if IS_ENABLED(GN3_BURST_WRITE)
	0x6004,	0x0000,	0x02,
#endif
	0xFCFC,	0x4000,	0x02,
	0xFE4A,	0x00A1,	0x02,
	0x6000,	0x0085,	0x02,
};

static u32 * sensor_gn3_pre_XTC[] = {
	sensor_gn3_pre_XTC_1,
};

static const u32 sensor_gn3_pre_XTC_size[] = {
	ARRAY_SIZE(sensor_gn3_pre_XTC_1),
};

static u32 * sensor_gn3_post_XTC[] = {
	sensor_gn3_post_XTC_1,
};

static const u32 sensor_gn3_post_XTC_size[] = {
	ARRAY_SIZE(sensor_gn3_post_XTC_1),
};
#endif

static int sensor_gn3_cis_group_param_hold_func(struct v4l2_subdev *subdev, unsigned int hold);
int sensor_gn3_cis_stream_on(struct v4l2_subdev *subdev);
int sensor_gn3_cis_stream_off(struct v4l2_subdev *subdev);
int sensor_gn3_cis_set_lownoise_mode_change(struct v4l2_subdev *subdev);
#if IS_ENABLED(USE_CAMERA_SENSOR_RETENTION)
int sensor_gn3_cis_retention_crc_check(struct v4l2_subdev *subdev);
int sensor_gn3_cis_retention_prepare(struct v4l2_subdev *subdev);
#endif
#endif
