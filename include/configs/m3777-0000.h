/*
 * Copyright (c) 2017, NVIDIA CORPORATION.
 *
 * SPDX-License-Identifier: GPL-2.0
 */

#ifndef _M3777_0000_H
#define _M3777_0000_H

#include <linux/sizes.h>

#include "tegra186-common.h"

/* High-level configuration options */
#define CONFIG_TEGRA_BOARD_STRING	"NVIDIA M3777-0000"

/* Board-specific serial config */
#define CONFIG_TEGRA_ENABLE_UARTB

/* I2C */
#define CONFIG_SYS_I2C_TEGRA

/* SATA/AHCI */
#define CONFIG_AHCI
#define CONFIG_LIBATA
#define CONFIG_SCSI_AHCI
#define CONFIG_SCSI_AHCI_PLAT
#define CONFIG_SYS_SCSI_MAX_SCSI_ID     1
#define CONFIG_SYS_SCSI_MAX_LUN         1
#define CONFIG_SYS_SCSI_MAX_DEVICE      (CONFIG_SYS_SCSI_MAX_SCSI_ID * \
                                         CONFIG_SYS_SCSI_MAX_LUN)
#define CONFIG_SCSI

/* Environment in 'nowhere' at this time - save it to SATA later? */
#define CONFIG_ENV_IS_NOWHERE

/* PCI host support */
#define CONFIG_PCI
#define CONFIG_PCI_PNP
#define CONFIG_CMD_PCI

#include "tegra-common-post.h"

/* Crystal is 38.4MHz. clk_m runs at half that rate */
#define COUNTER_FREQUENCY	19200000

#endif /* _M3777_0000_H */