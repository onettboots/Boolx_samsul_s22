/*******************************************************************************
* Copyright (c) 2021, STMicroelectronics - All Rights Reserved
*
* This file is part of VL53L5 Kernel Driver and is dual licensed,
* either 'STMicroelectronics Proprietary license'
* or 'BSD 3-clause "New" or "Revised" License' , at your option.
*
********************************************************************************
*
* 'STMicroelectronics Proprietary license'
*
********************************************************************************
*
* License terms: STMicroelectronics Proprietary in accordance with licensing
* terms at www.st.com/sla0081
*
* STMicroelectronics confidential
* Reproduction and Communication of this document is strictly prohibited unless
* specifically authorized in writing by STMicroelectronics.
*
*
********************************************************************************
*
* Alternatively, VL53L5 Kernel Driver may be distributed under the terms of
* 'BSD 3-clause "New" or "Revised" License', in which case the following
* provisions apply instead of the ones mentioned above :
*
********************************************************************************
*
* License terms: BSD 3-clause "New" or "Revised" License.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions are met:
*
* 1. Redistributions of source code must retain the above copyright notice, this
* list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright notice,
* this list of conditions and the following disclaimer in the documentation
* and/or other materials provided with the distribution.
*
* 3. Neither the name of the copyright holder nor the names of its contributors
* may be used to endorse or promote products derived from this software
* without specific prior written permission.
*
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
* AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
* FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
* DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
* SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
* CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
* OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*
*******************************************************************************/

#ifndef TEST_MAP_H
#define TEST_MAP_H

#include "vl53l5_types.h"
#include "vl53l5_results_config.h"
#include "dci_structs.h"
#include "vl53l5_results_map.h"
#include "dci_patch_op_map.h"

#include "vl53l5_hap_structs.h"
#include "vl53l5_hap_ver_map.h"
#include "vl53l5_hap_cfg_map.h"
#include "vl53l5_hap_int_map.h"
#include "vl53l5_hap_op_map.h"
#include "vl53l5_hap_err_map.h"

#include "vl53l5_chk_tol_rng_op_map.h"
#include "vl53l5_chk_tol_sharp_op_map.h"
#include "vl53l5_chk_tol_rng_patch_op_map.h"

#ifdef __cplusplus
extern "C" {
#endif

struct test_dev_t
{

    struct  vl53l5_range_results_t                        rng_dev;
    struct  vl53l5_sharpener_target_data_t    sharp_tgt_data;

    struct  vl53l5_hap_tuning_t                 tuning;
    struct  vl53l5_hap_ver_dev_t                ver_dev;

    struct  vl53l5_hap_cfg_dev_t                cfg_dev;

    struct  vl53l5_hap_int_dev_t                int_dev;
    struct  vl53l5_hap_op_dev_t                 op_dev;
    struct  vl53l5_hap_err_dev_t                err_dev;

    struct  vl53l5_chk_tol_rng_op_dev_t         chk_tol_rng_op;
    struct  vl53l5_chk_tol_sharp_op_dev_t       chk_tol_sharp_op;
    struct  vl53l5_chk_tol_rng_patch_op_dev_t   chk_tol_rng_patch_op;
};

#ifdef __cplusplus
}
#endif

#endif
