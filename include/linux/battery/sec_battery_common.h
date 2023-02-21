/*
 * sec_battery_common.h
 * Samsung Mobile Charging Common Header
 *
 * Copyright (C) 2020 Samsung Electronics, Inc.
 *
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef __SEC_BATTERY_COMMON_H
#define __SEC_BATTERY_COMMON_H __FILE__

#include <linux/power_supply.h>
#include <dt-bindings/battery/sec-battery.h>

enum power_supply_ext_property {
	POWER_SUPPLY_EXT_PROP_MIN = 1000,
	POWER_SUPPLY_EXT_PROP_CHECK_SUB_CHG_I2C = POWER_SUPPLY_EXT_PROP_MIN,
	POWER_SUPPLY_EXT_PROP_MULTI_CHARGER_MODE,
	POWER_SUPPLY_EXT_PROP_WIRELESS_OP_FREQ,
	POWER_SUPPLY_EXT_PROP_WIRELESS_OP_FREQ_STRENGTH,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TRX_CMD,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TRX_VAL,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_ID,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_ID_CNT,
	POWER_SUPPLY_EXT_PROP_WIRELESS_ERR,
	POWER_SUPPLY_EXT_PROP_WIRELESS_SWITCH,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_ENABLE,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_VOUT,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_IOUT,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_UNO_VIN,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_UNO_IIN,
	POWER_SUPPLY_EXT_PROP_WIRELESS_RX_CONNECTED,
	POWER_SUPPLY_EXT_PROP_WIRELESS_RX_POWER,
	POWER_SUPPLY_EXT_PROP_WIRELESS_WR_CONNECTED,
	POWER_SUPPLY_EXT_PROP_WIRELESS_MAX_VOUT,
	POWER_SUPPLY_EXT_PROP_WIRELESS_ABNORMAL_PAD,
	POWER_SUPPLY_EXT_PROP_WIRELESS_AUTH_ADT_STATUS,
	POWER_SUPPLY_EXT_PROP_WIRELESS_AUTH_ADT_DATA,
	POWER_SUPPLY_EXT_PROP_WIRELESS_AUTH_ADT_SIZE,
	POWER_SUPPLY_EXT_PROP_WIRELESS_RX_TYPE,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_ERR,
	POWER_SUPPLY_EXT_PROP_WIRELESS_MIN_DUTY,
	POWER_SUPPLY_EXT_PROP_WIRELESS_SEND_FSK,
	POWER_SUPPLY_EXT_PROP_WIRELESS_RX_VOUT,
	POWER_SUPPLY_EXT_PROP_WIRELESS_INITIAL_WC_CHECK,
	POWER_SUPPLY_EXT_PROP_WIRELESS_PARAM_INFO,
	POWER_SUPPLY_EXT_PROP_WIRELESS_CHECK_FW_VER,
	POWER_SUPPLY_EXT_PROP_WIRELESS_SGF,
	POWER_SUPPLY_EXT_PROP_WIRELESS_MST_PWR_EN,
	POWER_SUPPLY_EXT_PROP_AICL_CURRENT,
	POWER_SUPPLY_EXT_PROP_CHECK_MULTI_CHARGE,
	POWER_SUPPLY_EXT_PROP_CHIP_ID,
	POWER_SUPPLY_EXT_PROP_ERROR_CAUSE,
	POWER_SUPPLY_EXT_PROP_SYSOVLO,
	POWER_SUPPLY_EXT_PROP_VBAT_OVP,
	POWER_SUPPLY_EXT_PROP_FGSRC_SWITCHING,
	POWER_SUPPLY_EXT_PROP_USB_CONFIGURE,
	POWER_SUPPLY_EXT_PROP_WDT_STATUS,
	POWER_SUPPLY_EXT_PROP_WATER_DETECT,
	POWER_SUPPLY_EXT_PROP_SURGE,
	POWER_SUPPLY_EXT_PROP_HV_DISABLE,
	POWER_SUPPLY_EXT_PROP_FUELGAUGE_RESET,
	POWER_SUPPLY_EXT_PROP_FACTORY_VOLTAGE_REGULATION,
	POWER_SUPPLY_EXT_PROP_ANDIG_IVR_SWITCH,
	POWER_SUPPLY_EXT_PROP_FUELGAUGE_FACTORY,
	POWER_SUPPLY_EXT_PROP_DISABLE_FACTORY_MODE,
	POWER_SUPPLY_EXT_PROP_SUB_PBA_TEMP_REC,
	POWER_SUPPLY_EXT_PROP_OVERHEAT_NOTIFY,
	POWER_SUPPLY_EXT_PROP_CHARGE_POWER,
	POWER_SUPPLY_EXT_PROP_MEASURE_SYS,
	POWER_SUPPLY_EXT_PROP_MEASURE_INPUT,
	POWER_SUPPLY_EXT_PROP_WC_CONTROL,
	POWER_SUPPLY_EXT_PROP_WC_EPT_UNKNOWN,
	POWER_SUPPLY_EXT_PROP_CHGINSEL,
	POWER_SUPPLY_EXT_PROP_JIG_GPIO,
	POWER_SUPPLY_EXT_PROP_OVERHEAT_HICCUP,
	POWER_SUPPLY_EXT_PROP_MONITOR_WORK,
	POWER_SUPPLY_EXT_PROP_SHIPMODE_TEST,
	POWER_SUPPLY_EXT_PROP_AUTO_SHIPMODE_CONTROL,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TIMER_ON,
	POWER_SUPPLY_EXT_PROP_CALL_EVENT,
	POWER_SUPPLY_EXT_PROP_GEAR_PHM_EVENT,
	POWER_SUPPLY_EXT_PROP_DEFAULT_CURRENT,
#if IS_ENABLED(CONFIG_DUAL_BATTERY)
	POWER_SUPPLY_EXT_PROP_CHGIN_OK,
	POWER_SUPPLY_EXT_PROP_SUPLLEMENT_MODE,
	POWER_SUPPLY_EXT_PROP_RECHG_ON,
	POWER_SUPPLY_EXT_PROP_EOC_ON,
	POWER_SUPPLY_EXT_PROP_DISCHG_MODE,
	POWER_SUPPLY_EXT_PROP_CHG_MODE,
	POWER_SUPPLY_EXT_PROP_CHG_VOLTAGE,
	POWER_SUPPLY_EXT_PROP_BAT_VOLTAGE,
	POWER_SUPPLY_EXT_PROP_CHG_CURRENT,
	POWER_SUPPLY_EXT_PROP_DISCHG_CURRENT,
	POWER_SUPPLY_EXT_PROP_FASTCHG_LIMIT_CURRENT,
	POWER_SUPPLY_EXT_PROP_TRICKLECHG_LIMIT_CURRENT,
	POWER_SUPPLY_EXT_PROP_DISCHG_LIMIT_CURRENT,
	POWER_SUPPLY_EXT_PROP_RECHG_VOLTAGE,
	POWER_SUPPLY_EXT_PROP_EOC_VOLTAGE,
	POWER_SUPPLY_EXT_PROP_EOC_CURRENT,
	POWER_SUPPLY_EXT_PROP_POWERMETER_ENABLE,
	POWER_SUPPLY_EXT_PROP_TSD_ENABLE,
	POWER_SUPPLY_EXT_PROP_DUAL_BAT_DET,
	POWER_SUPPLY_EXT_PROP_FULL_CONDITION,
#endif
	POWER_SUPPLY_EXT_PROP_CURRENT_EVENT,
	POWER_SUPPLY_EXT_PROP_CURRENT_EVENT_CLEAR,
	POWER_SUPPLY_EXT_PROP_PAD_VOLT_CTRL,
	POWER_SUPPLY_EXT_PROP_MAX_DUTY_EVENT,
	POWER_SUPPLY_EXT_PROP_VCHGIN_CHANGE,
	POWER_SUPPLY_EXT_PROP_WIRELESS_VOUT,
	POWER_SUPPLY_EXT_PROP_WIRELESS_TX_AVG_CURR,
	POWER_SUPPLY_EXT_PROP_WIRELESS_2ND_DONE,
	POWER_SUPPLY_EXT_PROP_CURRENT_MEASURE,
	POWER_SUPPLY_EXT_PROP_DIRECT_CHARGER_MODE,
	POWER_SUPPLY_EXT_PROP_CHARGING_ENABLED_DC,
	POWER_SUPPLY_EXT_PROP_DIRECT_DONE,
	POWER_SUPPLY_EXT_PROP_DIRECT_FIXED_PDO,
	POWER_SUPPLY_EXT_PROP_DIRECT_WDT_CONTROL,
	POWER_SUPPLY_EXT_PROP_DIRECT_CONSTANT_CHARGE_VOLTAGE,
	POWER_SUPPLY_EXT_PROP_DIRECT_CONSTANT_CHARGE_VOLTAGE_MAX,
	POWER_SUPPLY_EXT_PROP_DIRECT_CURRENT_MAX,
	POWER_SUPPLY_EXT_PROP_DIRECT_ADC_CTRL,
	POWER_SUPPLY_EXT_PROP_DIRECT_POWER_TYPE,
	POWER_SUPPLY_EXT_PROP_DIRECT_PPS,
	POWER_SUPPLY_EXT_PROP_DIRECT_PPS_FAILED,
	POWER_SUPPLY_EXT_PROP_DIRECT_PPS_READY,
	POWER_SUPPLY_EXT_PROP_DIRECT_DETACHED,
	POWER_SUPPLY_EXT_PROP_DIRECT_BUCK_OFF,
	POWER_SUPPLY_EXT_PROP_DIRECT_HARD_RESET,
	POWER_SUPPLY_EXT_PROP_DIRECT_PPS_DISABLE,
	POWER_SUPPLY_EXT_PROP_DIRECT_HAS_APDO,
	POWER_SUPPLY_EXT_PROP_DIRECT_TA_ALERT,
	POWER_SUPPLY_EXT_PROP_DIRECT_CHARGER_CHG_STATUS,
	POWER_SUPPLY_EXT_PROP_CHANGE_CHARGING_SOURCE,
	POWER_SUPPLY_EXT_PROP_REFRESH_CHARGING_SOURCE,
	POWER_SUPPLY_EXT_PROP_DIRECT_CLEAR_ERR,
	POWER_SUPPLY_EXT_PROP_DIRECT_SEND_UVDM,
	POWER_SUPPLY_EXT_PROP_UPDATE_BATTERY_DATA,
	POWER_SUPPLY_EXT_PROP_SRCCAP,
	POWER_SUPPLY_EXT_PROP_HV_PDO,
	POWER_SUPPLY_EXT_PROP_WD_QBATTOFF,
	POWER_SUPPLY_EXT_PROP_WPC_DET_STATUS,
	POWER_SUPPLY_EXT_PROP_CHARGE_BOOST,
	POWER_SUPPLY_EXT_PROP_CHARGE_MODE,
	POWER_SUPPLY_EXT_PROP_FLED_BOOST_ON,
	POWER_SUPPLY_EXT_PROP_FLED_BOOST_OFF,
	POWER_SUPPLY_EXT_PROP_BYPASS_MODE_DISABLE,
	POWER_SUPPLY_EXT_PROP_CHARGING_ENABLED,
	POWER_SUPPLY_EXT_PROP_INPUT_VOLTAGE_REGULATION,
	POWER_SUPPLY_EXT_PROP_POWER_DESIGN,
	POWER_SUPPLY_EXT_PROP_FILTER_CFG,
	POWER_SUPPLY_EXT_PROP_CHARGE_OTG_CONTROL,
	POWER_SUPPLY_EXT_PROP_CHARGE_POWERED_OTG_CONTROL,
	POWER_SUPPLY_EXT_PROP_CHARGE_UNO_CONTROL,
	POWER_SUPPLY_EXT_PROP_CHARGE_COUNTER_SHADOW,
	POWER_SUPPLY_EXT_PROP_WPC_EN,
	POWER_SUPPLY_EXT_PROP_WPC_EN_MST,
	POWER_SUPPLY_EXT_PROP_MST_MODE,
	POWER_SUPPLY_EXT_PROP_MST_DELAY,
	POWER_SUPPLY_EXT_PROP_WPC_FREQ_STRENGTH,
	POWER_SUPPLY_EXT_PROP_HEALTH,
	POWER_SUPPLY_EXT_PROP_BOOT_COMPLETE,
	POWER_SUPPLY_EXT_PROP_SLEEP_MODE,
	POWER_SUPPLY_EXT_PROP_MFC_FW_UPDATE,
	POWER_SUPPLY_EXT_PROP_THERMAL_ZONE,
	POWER_SUPPLY_EXT_PROP_DC_INITIALIZE,
	POWER_SUPPLY_EXT_PROP_BATTERY_ID,
#if defined(CONFIG_DUAL_BATTERY_CELL_SENSING)
	POWER_SUPPLY_EXT_PROP_DIRECT_VBAT_CHECK,
#endif
	POWER_SUPPLY_EXT_PROP_WIRELESS_RX_CONTROL,
	POWER_SUPPLY_EXT_PROP_INPUT_CURRENT_LIMIT_WRL,
	POWER_SUPPLY_EXT_PROP_CONSTANT_CHARGE_CURRENT_WRL,
	POWER_SUPPLY_EXT_PROP_SUB_TEMP,
	POWER_SUPPLY_EXT_PROP_MIX_LIMIT,
	POWER_SUPPLY_EXT_PROP_ENABLE_HW_FACTORY_MODE,
	POWER_SUPPLY_EXT_PROP_FACTORY_MODE,
	POWER_SUPPLY_EXT_PROP_CHECK_INIT,
	POWER_SUPPLY_EXT_PROP_IB_MODE,
	POWER_SUPPLY_EXT_PROP_OB_MODE_CABLE_REMOVED,
	POWER_SUPPLY_EXT_PROP_BATT_F_MODE,
	POWER_SUPPLY_EXT_PROP_FACTORY_MODE_RELIEVE,
	POWER_SUPPLY_EXT_PROP_FACTORY_MODE_BYPASS,
	POWER_SUPPLY_EXT_PROP_LCD_FLICKER,
	POWER_SUPPLY_EXT_PROP_PASS_THROUGH_MODE,
	POWER_SUPPLY_EXT_PROP_PASS_THROUGH_MODE_TA_VOL,
	POWER_SUPPLY_EXT_PROP_D2D_REVERSE_VOLTAGE,
	POWER_SUPPLY_EXT_PROP_D2D_REVERSE_OCP,
	POWER_SUPPLY_EXT_PROP_BATT_DUMP,
	POWER_SUPPLY_EXT_PROP_ABNORMAL_SRCCAP,
	POWER_SUPPLY_EXT_PROP_MAX,
};

enum sec_battery_usb_conf {
	USB_CURRENT_NONE = 0,
	USB_CURRENT_SUSPENDED = 1,
	USB_CURRENT_CLEAR = 2,
	USB_CURRENT_UNCONFIGURED = 100,
	USB_CURRENT_HIGH_SPEED = 475,
	USB_CURRENT_SUPER_SPEED = 850,
};

enum sec_battery_wpc_en_ctrl {
	WPC_EN_SYSFS = 0x1,
	WPC_EN_CCIC = 0x2,
	WPC_EN_CHARGING = 0x4,
	WPC_EN_TX = 0x8,
	WPC_EN_MST = 0x10,
	WPC_EN_FW = 0x20,
};

static inline struct power_supply *get_power_supply_by_name(char *name)
{
	if (!name)
		return (struct power_supply *)NULL;
	else
		return power_supply_get_by_name(name);
}

#define psy_do_property(name, function, property, value) \
({	\
	struct power_supply *psy;	\
	int ret = 0;	\
	psy = get_power_supply_by_name((name));	\
	if (!psy) {	\
		pr_err("%s: Fail to "#function" psy (%s)\n",	\
			__func__, (name));	\
		value.intval = 0;	\
		ret = -ENOENT;	\
	} else {	\
		if (psy->desc->function##_property != NULL) { \
			ret = psy->desc->function##_property(psy, \
				(enum power_supply_property) (property), &(value)); \
			if (ret < 0) {	\
				pr_err("%s: Fail to %s "#function" "#property" (%d)\n", \
						__func__, name, ret);	\
				value.intval = 0;	\
			}	\
		} else {	\
			ret = -ENOSYS;	\
		}	\
		power_supply_put(psy);		\
	}					\
	ret;	\
})

#if defined(CONFIG_OF)
#define sb_of_parse_u32(np, pdata, value, deft) \
({ \
	int ret = 0; \
	ret = of_property_read_u32(np, #value, (unsigned int *)&pdata->value); \
	if (!ret) \
		pr_info("%s: %s - write "#value" to %d\n", __func__, np->name, pdata->value); \
	else \
		pdata->value = deft; \
	ret;\
})

#define sb_of_parse_str(np, pdata, value) \
({ \
	int ret = 0; \
	ret = of_property_read_string(np, #value, (const char **)&pdata->value); \
	if (!ret) \
		pr_info("%s: %s - write "#value" to %s\n", __func__, np->name, pdata->value); \
	ret;\
})

#define sb_of_parse_bool(np, pdata, value) \
({ \
	pdata->value = of_property_read_bool(np, #value); \
	pr_info("%s: %s - write "#value" to %d\n", __func__, np->name, pdata->value); \
})
#endif

#endif /* __SEC_BATTERY_COMMON_H */
