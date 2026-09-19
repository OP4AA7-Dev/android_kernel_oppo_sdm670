/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (C) 2018-2020 Oplus. All rights reserved.
 */
#ifndef _OPPO_PROJECT_H_
#define _OPPO_PROJECT_H_
#include "oplus_project_data_ocdt.h"
#include "oplus_project_oldcdt.h"

#define ALIGN4(s) ((sizeof(s) + 3) & (~0x3))

#define FEATURE1_OPEARTOR_OPEN_MASK 0000
#define FEATURE1_FOREIGN_MASK 0001
#define FEATURE1_OPEARTOR_CMCC_MASK 0010
#define FEATURE1_OPEARTOR_CT_MASK 0011
#define FEATURE1_OPEARTOR_CU_MASK 0100
#define FEATURE1_OPEARTOR_MAX_MASK 1111

enum F_INDEX {
    IDX_1 = 1,
    IDX_2,
    IDX_3,
    IDX_4,
    IDX_5,
    IDX_6,
    IDX_7,
    IDX_8,
    IDX_9,
    IDX_10,
};

struct pcb_match {
    enum PCB_VERSION version;
    char* str;
};

#endif
