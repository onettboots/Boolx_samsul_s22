/*
 * Samsung Exynos SoC series Pablo driver
 *
 * Copyright (c) 2020 Samsung Electronics Co., Ltd
 *		http://www.samsung.com
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

const u32 is_csi_settle_table[] = {
	6500,		37,
	6490,		37,
	6480,		37,
	6470,		37,
	6460,		37,
	6450,		37,
	6440,		37,
	6430,		37,
	6420,		37,
	6410,		37,
	6400,		36,
	6390,		36,
	6380,		36,
	6370,		36,
	6360,		36,
	6350,		36,
	6340,		36,
	6330,		36,
	6320,		36,
	6310,		36,
	6300,		36,
	6290,		36,
	6280,		36,
	6270,		36,
	6260,		36,
	6250,		36,
	6240,		36,
	6230,		35,
	6220,		35,
	6210,		35,
	6200,		35,
	6190,		35,
	6180,		35,
	6170,		35,
	6160,		35,
	6150,		35,
	6140,		35,
	6130,		35,
	6120,		35,
	6110,		35,
	6100,		35,
	6090,		35,
	6080,		35,
	6070,		34,
	6060,		34,
	6050,		34,
	6040,		34,
	6030,		34,
	6020,		34,
	6010,		34,
	6000,		34,
	5990,		34,
	5980,		34,
	5970,		34,
	5960,		34,
	5950,		34,
	5940,		34,
	5930,		34,
	5920,		34,
	5910,		34,
	5900,		33,
	5890,		33,
	5880,		33,
	5870,		33,
	5860,		33,
	5850,		33,
	5840,		33,
	5830,		33,
	5820,		33,
	5810,		33,
	5800,		33,
	5790,		33,
	5780,		33,
	5770,		33,
	5760,		33,
	5750,		33,
	5740,		33,
	5730,		32,
	5720,		32,
	5710,		32,
	5700,		32,
	5690,		32,
	5680,		32,
	5670,		32,
	5660,		32,
	5650,		32,
	5640,		32,
	5630,		32,
	5620,		32,
	5610,		32,
	5600,		32,
	5590,		32,
	5580,		32,
	5570,		31,
	5560,		31,
	5550,		31,
	5540,		31,
	5530,		31,
	5520,		31,
	5510,		31,
	5500,		31,
	5490,		31,
	5480,		31,
	5470,		31,
	5460,		31,
	5450,		31,
	5440,		31,
	5430,		31,
	5420,		31,
	5410,		31,
	5400,		30,
	5390,		30,
	5380,		30,
	5370,		30,
	5360,		30,
	5350,		30,
	5340,		30,
	5330,		30,
	5320,		30,
	5310,		30,
	5300,		30,
	5290,		30,
	5280,		30,
	5270,		30,
	5260,		30,
	5250,		30,
	5240,		29,
	5230,		29,
	5220,		29,
	5210,		29,
	5200,		29,
	5190,		29,
	5180,		29,
	5170,		29,
	5160,		29,
	5150,		29,
	5140,		29,
	5130,		29,
	5120,		29,
	5110,		29,
	5100,		29,
	5090,		29,
	5080,		29,
	5070,		28,
	5060,		28,
	5050,		28,
	5040,		28,
	5030,		28,
	5020,		28,
	5010,		28,
	5000,		28,
	4990,		28,
	4980,		28,
	4970,		28,
	4960,		28,
	4950,		28,
	4940,		28,
	4930,		28,
	4920,		28,
	4910,		28,
	4900,		27,
	4890,		27,
	4880,		27,
	4870,		27,
	4860,		27,
	4850,		27,
	4840,		27,
	4830,		27,
	4820,		27,
	4810,		27,
	4800,		27,
	4790,		27,
	4780,		27,
	4770,		27,
	4760,		27,
	4750,		27,
	4740,		26,
	4730,		26,
	4720,		26,
	4710,		26,
	4700,		26,
	4690,		26,
	4680,		26,
	4670,		26,
	4660,		26,
	4650,		26,
	4640,		26,
	4630,		26,
	4620,		26,
	4610,		26,
	4600,		26,
	4590,		26,
	4580,		26,
	4570,		25,
	4560,		25,
	4550,		25,
	4540,		25,
	4530,		25,
	4520,		25,
	4510,		25,
	4500,		25,
	4490,		25,
	4480,		25,
	4470,		25,
	4460,		25,
	4450,		25,
	4440,		25,
	4430,		25,
	4420,		25,
	4410,		25,
	4400,		24,
	4390,		24,
	4380,		24,
	4370,		24,
	4360,		24,
	4350,		24,
	4340,		24,
	4330,		24,
	4320,		24,
	4310,		24,
	4300,		24,
	4290,		24,
	4280,		24,
	4270,		24,
	4260,		24,
	4250,		24,
	4240,		23,
	4230,		23,
	4220,		23,
	4210,		23,
	4200,		23,
	4190,		23,
	4180,		23,
	4170,		23,
	4160,		23,
	4150,		23,
	4140,		23,
	4130,		23,
	4120,		23,
	4110,		23,
	4100,		23,
	4090,		23,
	4080,		23,
	4070,		22,
	4060,		22,
	4050,		22,
	4040,		22,
	4030,		22,
	4020,		22,
	4010,		22,
	4000,		22,
	3990,		22,
	3980,		22,
	3970,		22,
	3960,		22,
	3950,		22,
	3940,		22,
	3930,		22,
	3920,		22,
	3910,		22,
	3900,		21,
	3890,		21,
	3880,		21,
	3870,		21,
	3860,		21,
	3850,		21,
	3840,		21,
	3830,		21,
	3820,		21,
	3810,		21,
	3800,		21,
	3790,		21,
	3780,		21,
	3770,		21,
	3760,		21,
	3750,		21,
	3740,		20,
	3730,		20,
	3720,		20,
	3710,		20,
	3700,		20,
	3690,		20,
	3680,		20,
	3670,		20,
	3660,		20,
	3650,		20,
	3640,		20,
	3630,		20,
	3620,		20,
	3610,		20,
	3600,		20,
	3590,		20,
	3580,		20,
	3570,		19,
	3560,		19,
	3550,		19,
	3540,		19,
	3530,		19,
	3520,		19,
	3510,		19,
	3500,		19,
	3490,		19,
	3480,		19,
	3470,		19,
	3460,		19,
	3450,		19,
	3440,		19,
	3430,		19,
	3420,		19,
	3410,		18,
	3400,		18,
	3390,		18,
	3380,		18,
	3370,		18,
	3360,		18,
	3350,		18,
	3340,		18,
	3330,		18,
	3320,		18,
	3310,		18,
	3300,		18,
	3290,		18,
	3280,		18,
	3270,		18,
	3260,		18,
	3250,		18,
	3240,		17,
	3230,		17,
	3220,		17,
	3210,		17,
	3200,		17,
	3190,		17,
	3180,		17,
	3170,		17,
	3160,		17,
	3150,		17,
	3140,		17,
	3130,		17,
	3120,		17,
	3110,		17,
	3100,		17,
	3090,		17,
	3080,		17,
	3070,		16,
	3060,		16,
	3050,		16,
	3040,		16,
	3030,		16,
	3020,		16,
	3010,		16,
	3000,		16,
	2990,		16,
	2980,		16,
	2970,		16,
	2960,		16,
	2950,		16,
	2940,		16,
	2930,		16,
	2920,		16,
	2910,		15,
	2900,		15,
	2890,		15,
	2880,		15,
	2870,		15,
	2860,		15,
	2850,		15,
	2840,		15,
	2830,		15,
	2820,		15,
	2810,		15,
	2800,		15,
	2790,		15,
	2780,		15,
	2770,		15,
	2760,		15,
	2750,		15,
	2740,		14,
	2730,		14,
	2720,		14,
	2710,		14,
	2700,		14,
	2690,		14,
	2680,		14,
	2670,		14,
	2660,		14,
	2650,		14,
	2640,		14,
	2630,		14,
	2620,		14,
	2610,		14,
	2600,		14,
	2590,		14,
	2580,		14,
	2570,		13,
	2560,		13,
	2550,		13,
	2540,		13,
	2530,		13,
	2520,		13,
	2510,		13,
	2500,		13,
	2490,		13,
	2480,		13,
	2470,		13,
	2460,		13,
	2450,		13,
	2440,		13,
	2430,		13,
	2420,		13,
	2410,		12,
	2400,		12,
	2390,		12,
	2380,		12,
	2370,		12,
	2360,		12,
	2350,		12,
	2340,		12,
	2330,		12,
	2320,		12,
	2310,		12,
	2300,		12,
	2290,		12,
	2280,		12,
	2270,		12,
	2260,		12,
	2250,		12,
	2240,		11,
	2230,		11,
	2220,		11,
	2210,		11,
	2200,		11,
	2190,		11,
	2180,		11,
	2170,		11,
	2160,		11,
	2150,		11,
	2140,		11,
	2130,		11,
	2120,		11,
	2110,		11,
	2100,		11,
	2090,		11,
	2080,		11,
	2070,		10,
	2060,		10,
	2050,		10,
	2040,		10,
	2030,		10,
	2020,		10,
	2010,		10,
	2000,		10,
	1990,		10,
	1980,		10,
	1970,		10,
	1960,		10,
	1950,		10,
	1940,		10,
	1930,		10,
	1920,		10,
	1910,		9,
	1900,		9,
	1890,		9,
	1880,		9,
	1870,		9,
	1860,		9,
	1850,		9,
	1840,		9,
	1830,		9,
	1820,		9,
	1810,		9,
	1800,		9,
	1790,		9,
	1780,		9,
	1770,		9,
	1760,		9,
	1750,		9,
	1740,		8,
	1730,		8,
	1720,		8,
	1710,		8,
	1700,		8,
	1690,		8,
	1680,		8,
	1670,		8,
	1660,		8,
	1650,		8,
	1640,		8,
	1630,		8,
	1620,		8,
	1610,		8,
	1600,		8,
	1590,		8,
	1580,		7,
	1570,		7,
	1560,		7,
	1550,		7,
	1540,		7,
	1530,		7,
	1520,		7,
	1510,		7,
	1500,		7,
	1490,		73,
	1480,		73,
	1470,		72,
	1460,		72,
	1450,		71,
	1440,		71,
	1430,		70,
	1420,		70,
	1410,		69,
	1400,		69,
	1390,		68,
	1380,		68,
	1370,		67,
	1360,		67,
	1350,		66,
	1340,		66,
	1330,		65,
	1320,		65,
	1310,		64,
	1300,		64,
	1290,		64,
	1280,		63,
	1270,		63,
	1260,		62,
	1250,		62,
	1240,		61,
	1230,		61,
	1220,		60,
	1210,		60,
	1200,		59,
	1190,		59,
	1180,		58,
	1170,		58,
	1160,		57,
	1150,		57,
	1140,		56,
	1130,		56,
	1120,		55,
	1110,		55,
	1100,		54,
	1090,		54,
	1080,		53,
	1070,		53,
	1060,		52,
	1050,		52,
	1040,		52,
	1030,		51,
	1020,		51,
	1010,		50,
	1000,		50,
	990,		49,
	980,		49,
	970,		48,
	960,		48,
	950,		47,
	940,		47,
	930,		46,
	920,		46,
	910,		45,
	900,		45,
	890,		44,
	880,		44,
	870,		43,
	860,		43,
	850,		42,
	840,		42,
	830,		41,
	820,		41,
	810,		40,
	800,		40,
	790,		39,
	780,		39,
	770,		39,
	760,		38,
	750,		38,
	740,		37,
	730,		37,
	720,		36,
	710,		36,
	700,		35,
	690,		35,
	680,		34,
	670,		34,
	660,		33,
	650,		33,
	640,		32,
	630,		32,
	620,		31,
	610,		31,
	600,		30,
	590,		30,
	580,		29,
	570,		29,
	560,		28,
	550,		28,
	540,		27,
	530,		27,
	520,		27,
	510,		26,
	500,		26,
	490,		25,
	480,		25,
	470,		24,
	460,		24,
	450,		23,
	440,		23,
	430,		22,
	420,		22,
	410,		21,
	400,		21,
	390,		20,
	380,		20,
	370,		19,
	360,		19,
	350,		18,
	340,		18,
	330,		17,
	320,		17,
	310,		16,
	300,		16,
	290,		15,
	280,		15,
	270,		14,
	260,		14,
	250,		14,
	240,		13,
	230,		13,
	220,		12,
	210,		12,
	200,		11,
	190,		11,
	180,		10,
	170,		10,
	160,		9,
	150,		9,
	140,		8,
	130,		8,
	120,		7,
	110,		7,
	100,		6,
	90,		6,
	80,		5,
};

const u32 is_csi_settle_table_cphy[] = {
	4500,		1,
	4490,		1,
	4480,		1,
	4470,		1,
	4460,		1,
	4450,		1,
	4440,		1,
	4430,		1,
	4420,		1,
	4410,		1,
	4400,		1,
	4390,		1,
	4380,		1,
	4370,		1,
	4360,		1,
	4350,		1,
	4340,		1,
	4330,		1,
	4320,		1,
	4310,		1,
	4300,		1,
	4290,		1,
	4280,		1,
	4270,		1,
	4260,		1,
	4250,		1,
	4240,		1,
	4230,		1,
	4220,		1,
	4210,		1,
	4200,		1,
	4190,		1,
	4180,		1,
	4170,		1,
	4160,		1,
	4150,		1,
	4140,		1,
	4130,		1,
	4120,		1,
	4110,		1,
	4100,		1,
	4090,		1,
	4080,		1,
	4070,		1,
	4060,		1,
	4050,		1,
	4040,		1,
	4030,		1,
	4020,		1,
	4010,		1,
	4000,		1,
	3990,		1,
	3980,		1,
	3970,		1,
	3960,		1,
	3950,		1,
	3940,		1,
	3930,		1,
	3920,		1,
	3910,		1,
	3900,		1,
	3890,		1,
	3880,		1,
	3870,		1,
	3860,		1,
	3850,		1,
	3840,		1,
	3830,		1,
	3820,		1,
	3810,		1,
	3800,		1,
	3790,		1,
	3780,		1,
	3770,		1,
	3760,		1,
	3750,		1,
	3740,		1,
	3730,		1,
	3720,		1,
	3710,		1,
	3700,		1,
	3690,		1,
	3680,		1,
	3670,		1,
	3660,		1,
	3650,		1,
	3640,		1,
	3630,		1,
	3620,		1,
	3610,		1,
	3600,		1,
	3590,		1,
	3580,		1,
	3570,		1,
	3560,		1,
	3550,		1,
	3540,		1,
	3530,		1,
	3520,		1,
	3510,		1,
	3500,		1,
	3490,		1,
	3480,		1,
	3470,		1,
	3460,		1,
	3450,		1,
	3440,		1,
	3430,		1,
	3420,		1,
	3410,		1,
	3400,		1,
	3390,		1,
	3380,		1,
	3370,		1,
	3360,		1,
	3350,		1,
	3340,		1,
	3330,		1,
	3320,		1,
	3310,		1,
	3300,		1,
	3290,		1,
	3280,		1,
	3270,		1,
	3260,		1,
	3250,		1,
	3240,		1,
	3230,		1,
	3220,		1,
	3210,		1,
	3200,		1,
	3190,		1,
	3180,		1,
	3170,		1,
	3160,		1,
	3150,		1,
	3140,		1,
	3130,		1,
	3120,		1,
	3110,		1,
	3100,		1,
	3090,		1,
	3080,		1,
	3070,		1,
	3060,		1,
	3050,		1,
	3040,		1,
	3030,		1,
	3020,		1,
	3010,		1,
	3000,		1,
	2990,		1,
	2980,		1,
	2970,		1,
	2960,		1,
	2950,		1,
	2940,		1,
	2930,		1,
	2920,		1,
	2910,		1,
	2900,		1,
	2890,		1,
	2880,		1,
	2870,		1,
	2860,		1,
	2850,		1,
	2840,		1,
	2830,		1,
	2820,		1,
	2810,		1,
	2800,		1,
	2790,		1,
	2780,		1,
	2770,		1,
	2760,		1,
	2750,		1,
	2740,		1,
	2730,		1,
	2720,		1,
	2710,		1,
	2700,		1,
	2690,		1,
	2680,		1,
	2670,		1,
	2660,		1,
	2650,		1,
	2640,		1,
	2630,		1,
	2620,		1,
	2610,		1,
	2600,		1,
	2590,		1,
	2580,		1,
	2570,		1,
	2560,		1,
	2550,		1,
	2540,		1,
	2530,		1,
	2520,		1,
	2510,		1,
	2500,		1,
	2490,		1,
	2480,		1,
	2470,		1,
	2460,		1,
	2450,		1,
	2440,		1,
	2430,		1,
	2420,		1,
	2410,		1,
	2400,		1,
	2390,		1,
	2380,		1,
	2370,		1,
	2360,		1,
	2350,		1,
	2340,		1,
	2330,		1,
	2320,		1,
	2310,		1,
	2300,		1,
	2290,		1,
	2280,		1,
	2270,		1,
	2260,		1,
	2250,		1,
	2240,		1,
	2230,		1,
	2220,		1,
	2210,		1,
	2200,		1,
	2190,		1,
	2180,		1,
	2170,		1,
	2160,		1,
	2150,		1,
	2140,		1,
	2130,		1,
	2120,		1,
	2110,		1,
	2100,		1,
	2090,		1,
	2080,		1,
	2070,		1,
	2060,		1,
	2050,		1,
	2040,		1,
	2030,		1,
	2020,		1,
	2010,		1,
	2000,		1,
	1990,		1,
	1980,		1,
	1970,		1,
	1960,		1,
	1950,		1,
	1940,		1,
	1930,		1,
	1920,		1,
	1910,		1,
	1900,		1,
	1890,		1,
	1880,		1,
	1870,		1,
	1860,		1,
	1850,		1,
	1840,		1,
	1830,		1,
	1820,		1,
	1810,		1,
	1800,		1,
	1790,		1,
	1780,		1,
	1770,		1,
	1760,		1,
	1750,		1,
	1740,		1,
	1730,		1,
	1720,		1,
	1710,		1,
	1700,		1,
	1690,		1,
	1680,		1,
	1670,		1,
	1660,		1,
	1650,		1,
	1640,		1,
	1630,		1,
	1620,		1,
	1610,		1,
	1600,		1,
	1590,		1,
	1580,		1,
	1570,		1,
	1560,		1,
	1550,		1,
	1540,		1,
	1530,		1,
	1520,		1,
	1510,		1,
	1500,		1,
	1490,		1,
	1480,		1,
	1470,		1,
	1460,		1,
	1450,		1,
	1440,		1,
	1430,		1,
	1420,		1,
	1410,		1,
	1400,		1,
	1390,		1,
	1380,		1,
	1370,		1,
	1360,		1,
	1350,		1,
	1340,		1,
	1330,		1,
	1320,		1,
	1310,		1,
	1300,		1,
	1290,		1,
	1280,		1,
	1270,		1,
	1260,		1,
	1250,		1,
	1240,		1,
	1230,		1,
	1220,		1,
	1210,		1,
	1200,		1,
	1190,		1,
	1180,		1,
	1170,		1,
	1160,		1,
	1150,		1,
	1140,		1,
	1130,		1,
	1120,		1,
	1110,		1,
	1100,		1,
	1090,		1,
	1080,		1,
	1070,		1,
	1060,		1,
	1050,		1,
	1040,		1,
	1030,		1,
	1020,		1,
	1010,		1,
	1000,		1,
	990,		2,
	980,		2,
	970,		2,
	960,		2,
	950,		2,
	940,		2,
	930,		2,
	920,		2,
	910,		2,
	900,		2,
	890,		2,
	880,		2,
	870,		2,
	860,		2,
	850,		2,
	840,		2,
	830,		2,
	820,		2,
	810,		2,
	800,		2,
	790,		2,
	780,		2,
	770,		2,
	760,		2,
	750,		2,
	740,		2,
	730,		2,
	720,		2,
	710,		2,
	700,		2,
	690,		2,
	680,		2,
	670,		2,
	660,		2,
	650,		2,
	640,		2,
	630,		2,
	620,		2,
	610,		2,
	600,		2,
	590,		2,
	580,		2,
	570,		2,
	560,		2,
	550,		2,
	540,		2,
	530,		2,
	520,		2,
	510,		2,
	500,		2,
	490,		2,
	480,		2,
	470,		2,
	460,		2,
	450,		2,
	440,		2,
	430,		2,
	420,		2,
	410,		2,
	400,		2,
	390,		2,
	380,		2,
	370,		2,
	360,		2,
	350,		2,
	340,		2,
	330,		2,
	320,		2,
	310,		2,
	300,		2,
	290,		2,
	280,		2,
	270,		2,
	260,		2,
	250,		2,
	240,		2,
	230,		2,
	220,		2,
	210,		2,
	200,		2,
	190,		2,
	180,		2,
	170,		2,
	160,		2,
	150,		2,
	140,		2,
	130,		2,
	120,		2,
	110,		2,
	100,		2,
	90,		2,
	80,		2,
};
