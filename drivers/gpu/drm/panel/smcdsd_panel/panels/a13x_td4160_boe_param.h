/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __TD4160_BOE_PARAM_H__
#define __TD4160_BOE_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>

#define LCD_TYPE_VENDOR		"BOE"

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

#define LDI_REG_BRIGHTNESS	0x51
#define LDI_REG_ID		0xDA
#define LDI_LEN_BRIGHTNESS	((u16)ARRAY_SIZE(SEQ_TD4160_BOE_BRIGHTNESS))

/* len is read length */
#define LDI_LEN_ID		3

#define TYPE_WRITE		I2C_SMBUS_WRITE
#define TYPE_DELAY		U8_MAX

static u8 LM36274_INIT[] = {
	TYPE_WRITE, 0x0C, 0x2C,
	TYPE_WRITE, 0x0D, 0x26,
	TYPE_WRITE, 0x0E, 0x26,
	TYPE_WRITE, 0x09, 0xBE,
	TYPE_WRITE, 0x02, 0x6B,
	TYPE_WRITE, 0x03, 0x2F,
	TYPE_WRITE, 0x11, 0x74,
	TYPE_WRITE, 0x04, 0x05,
	TYPE_WRITE, 0x05, 0xCC,
	TYPE_WRITE, 0x10, 0x67,
	TYPE_WRITE, 0x08, 0x13,
};

static u8 LM36274_EXIT[] = {
	TYPE_WRITE, 0x09, 0xB8,
	TYPE_DELAY, 1, 0,
	TYPE_WRITE, 0x08, 0x00,
};

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static unsigned char SEQ_TD4160_BOE_SLEEP_OUT[] = { 0x11 };
static unsigned char SEQ_TD4160_BOE_SLEEP_IN[] = { 0x10 };
static unsigned char SEQ_TD4160_BOE_DISPLAY_OFF[] = { 0x28 };
static unsigned char SEQ_TD4160_BOE_DISPLAY_ON[] = { 0x29 };

static unsigned char SEQ_TD4160_BOE_BRIGHTNESS[] = {
	0x51,
	0x00,
};

static unsigned char SEQ_TD4160_BOE_001[] = {
	0xB0,
	0x04,
};

static unsigned char SEQ_TD4160_BOE_002[] = {
	0xB6,
	0x30, 0x6A, 0x00, 0x06, 0xC3, 0x03,
};

static unsigned char SEQ_TD4160_BOE_003[] = {
	0xB7,
	0x31, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_004[] = {
	0xB8,
	0x00, 0x78, 0x64, 0x10, 0x64, 0xB4,
};

static unsigned char SEQ_TD4160_BOE_005[] = {
	0xB9,
	0x00, 0x78, 0x64, 0x10, 0x64, 0xB4,
};

static unsigned char SEQ_TD4160_BOE_006[] = {
	0xBA,
	0x03, 0x79, 0x46, 0x10, 0x1F, 0x33,
};

static unsigned char SEQ_TD4160_BOE_007[] = {
	0xBB,
	0x00, 0xB4, 0xA0,
};

static unsigned char SEQ_TD4160_BOE_008[] = {
	0xBC,
	0x00, 0xB4, 0xA0,
};

static unsigned char SEQ_TD4160_BOE_009[] = {
	0xBD,
	0x00, 0xB4, 0xA0,
};

static unsigned char SEQ_TD4160_BOE_010[] = {
	0xBE,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_011[] = {
	0xC0,
	0x00, 0x60, 0x10, 0x06, 0x40, 0x00, 0x16, 0x06, 0x98, 0x00,
	0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_012[] = {
	0xC1,
	0x30, 0x11, 0x50, 0xFA, 0x01, 0x00, 0x00, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x40, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xF0, 0x07, 0x08, 0x07, 0xD0, 0x0A, 0xBE,
};

static unsigned char SEQ_TD4160_BOE_013[] = {
	0xC2,
	0x01, 0x20, 0x50, 0x14, 0x04, 0x10, 0x0B, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x05, 0xF0, 0x54, 0x08, 0x08, 0x05, 0x05, 0xC5,
	0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x11, 0x00, 0x80, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_014[] = {
	0xC3,
	0x01, 0x00, 0x55, 0x01, 0x00, 0x46, 0x54, 0x00, 0x00, 0x00,
	0x20, 0x01, 0x01, 0x00, 0x55, 0x01, 0x00, 0x46, 0x54, 0x00,
	0x00, 0x00, 0x20, 0x02, 0x01, 0x00, 0x55, 0x01, 0x00, 0x46,
	0x54, 0x00, 0x00, 0x00, 0x20, 0x00, 0x01, 0x00, 0x55, 0x01,
	0x00, 0x46, 0x54, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_015[] = {
	0xC4,
	0x00, 0x00, 0x5E, 0x64, 0x00, 0x03, 0x05, 0x13, 0x15, 0x17,
	0x19, 0x5D, 0x5F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x5F, 0x5D, 0x1A, 0x18, 0x16, 0x14, 0x06,
	0x04, 0x00, 0x64, 0x5E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x57, 0x55, 0x55, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0x55, 0x55, 0xD5,
};

static unsigned char SEQ_TD4160_BOE_016[] = {
	0xC5,
	0x08, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_017[] = {
	0xC6,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x22, 0x04, 0x22, 0x01, 0x00,
	0x61, 0x00, 0x00, 0x00, 0x01, 0x00, 0x61, 0x00, 0x01, 0x05,
	0x01, 0x0B, 0x01, 0x35, 0xFF, 0x8F, 0x06, 0x05, 0x01, 0xC0,
	0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x00, 0xC0, 0x11,
	0x00, 0x00, 0x00, 0x10, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00,
	0x50, 0x00, 0x33, 0x03, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_018[] = {
	0xC7,
	0x00, 0x00, 0x00, 0x6C, 0x00, 0xA6, 0x00, 0xB3, 0x00, 0xCA,
	0x00, 0xD8, 0x00, 0xEB, 0x00, 0xEF, 0x01, 0x0C, 0x00, 0xDE,
	0x01, 0x39, 0x01, 0x00, 0x01, 0x4C, 0x01, 0x0A, 0x01, 0x7F,
	0x01, 0x8B, 0x02, 0x19, 0x02, 0x93, 0x02, 0xA0, 0x00, 0x00,
	0x00, 0x6C, 0x00, 0xA6, 0x00, 0xB3, 0x00, 0xCA, 0x00, 0xD8,
	0x00, 0xEB, 0x00, 0xEF, 0x01, 0x0C, 0x00, 0xDE, 0x01, 0x39,
	0x01, 0x00, 0x01, 0x4C, 0x01, 0x0A, 0x01, 0x7F, 0x01, 0x8B,
	0x02, 0x19, 0x02, 0x93, 0x02, 0xA0,
};

static unsigned char SEQ_TD4160_BOE_019[] = {
	0xCB,
	0x02, 0xD0, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x40, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
};

static unsigned char SEQ_TD4160_BOE_020[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x18, 0x40, 0x00,
	0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_021[] = {
	0xCF,
	0x00,
};

static unsigned char SEQ_TD4160_BOE_022[] = {
	0xD0,
	0xC1, 0x46, 0x81, 0x66, 0x09, 0x90, 0x00, 0xCC, 0xF2, 0xFF,
	0x11, 0x46, 0x06, 0x7E, 0x09, 0x08, 0xCC, 0x1B, 0xF0, 0x06,
};

static unsigned char SEQ_TD4160_BOE_023[] = {
	0xD1,
	0xCC, 0xD4, 0x1B, 0x33, 0x33, 0x17, 0x07, 0xBB, 0x33, 0x33,
	0x33, 0x33, 0x00, 0x3B, 0x77, 0x07, 0x3B, 0x30, 0x06, 0x72,
	0x33, 0x13, 0x00, 0xD7, 0x0C, 0x33, 0x02, 0x00, 0x18, 0x70,
	0x18, 0x77, 0x11, 0x11, 0x11, 0x20, 0x20,
};

static unsigned char SEQ_TD4160_BOE_024[] = {
	0xD2,
	0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_025[] = {
	0xD3,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF,
	0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7,
	0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF,
	0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF,
	0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7,
	0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF,
	0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF,
	0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7,
	0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF,
	0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF,
	0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7,
	0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF,
	0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF,
	0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7,
	0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF, 0xFF, 0xF7, 0xFF,
	0xFF, 0xF7, 0xFF,
};

static unsigned char SEQ_TD4160_BOE_026[] = {
	0xD4,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20,
	0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_027[] = {
	0xD6,
	0x00,
};

static unsigned char SEQ_TD4160_BOE_028[] = {
	0xD7,
	0x01, 0x00, 0x12, 0x12, 0x00, 0x62, 0x00, 0x16, 0x00, 0x62,
	0x00, 0x16, 0x03, 0x83, 0x80, 0x85, 0x85, 0x85, 0x87, 0x84,
	0x45, 0x86, 0x87, 0x80, 0x88, 0x86, 0x89, 0x83, 0x83, 0x87,
	0x84, 0x88, 0x8A, 0x0C, 0x0B, 0x0A, 0x0A, 0x0A, 0x07, 0x07,
	0x06, 0x06, 0x00, 0x08, 0x0A, 0x0A,
};

static unsigned char SEQ_TD4160_BOE_029[] = {
	0xD8,
	0x40, 0x99, 0x26, 0xED, 0x16, 0x6C, 0x16, 0x6C, 0x16, 0x6C,
	0x00, 0x14, 0x00, 0x14, 0x00, 0x14, 0x01, 0x0C, 0x00, 0x00,
	0x01, 0x00,
};

static unsigned char SEQ_TD4160_BOE_030[] = {
	0xD9,
	0x00, 0x02, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_031[] = {
	0xDD,
	0x30, 0x06, 0x23, 0x65,
};

static unsigned char SEQ_TD4160_BOE_032[] = {
	0xDE,
	0x00, 0x00, 0x00, 0x0F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x10,
	0x00, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_033[] = {
	0xE5,
	0x03, 0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_034[] = {
	0xE6,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_035[] = {
	0xEA,
	0x02, 0x07, 0x07, 0x04, 0x80, 0x10, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x23, 0x00, 0x07, 0x00, 0xED, 0x00, 0xED, 0x00,
	0xED, 0x01, 0x28, 0x01, 0x28, 0x00, 0x62, 0x00, 0x62, 0x00,
	0x62, 0x01, 0x0F, 0x01, 0x00,
};

static unsigned char SEQ_TD4160_BOE_036[] = {
	0xEB,
	0x07, 0x60, 0x76, 0x07, 0x61, 0x01, 0x08, 0x00,
};

static unsigned char SEQ_TD4160_BOE_037[] = {
	0xEC,
	0x02, 0xD0, 0x01, 0x70, 0x73, 0x10, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x2A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static unsigned char SEQ_TD4160_BOE_038[] = {
	0xED,
	0x01, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x65, 0xF6,
	0xE2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xF0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x41, 0x10, 0x01,
};

static unsigned char SEQ_TD4160_BOE_039[] = {
	0xEE,
	0x05, 0x00, 0x05, 0x00, 0xC0, 0x0B, 0x00, 0x00, 0x03, 0x00,
	0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0xC0, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x55, 0x17, 0x04,
	0x65, 0x40, 0x00, 0x00, 0x55, 0x17, 0x04, 0x65, 0x40, 0x00,
	0x00, 0x55, 0x17, 0x04, 0x65, 0x40, 0x00, 0x00, 0x40, 0x17,
	0x04, 0x65, 0x40, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00,
	0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x40, 0x15, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02,
};

static unsigned char SEQ_TD4160_BOE_040[] = {
	0xB0,
	0x03,
};

static unsigned char SEQ_TD4160_BOE_041[] = {
	0x53,
	0x2C,
};

static unsigned char SEQ_TD4160_BOE_042[] = {
	0x55,
	0x03,
};

static unsigned char SEQ_TD4160_BOE_043[] = {
	0x5E,
	0x30,
};

static struct lcd_seq_info LCD_SEQ_INIT_1[] = {
	{SEQ_TD4160_BOE_001, ARRAY_SIZE(SEQ_TD4160_BOE_001), 0, },
	{SEQ_TD4160_BOE_002, ARRAY_SIZE(SEQ_TD4160_BOE_002), 0, },
	{SEQ_TD4160_BOE_003, ARRAY_SIZE(SEQ_TD4160_BOE_003), 0, },
	{SEQ_TD4160_BOE_004, ARRAY_SIZE(SEQ_TD4160_BOE_004), 0, },
	{SEQ_TD4160_BOE_005, ARRAY_SIZE(SEQ_TD4160_BOE_005), 0, },
	{SEQ_TD4160_BOE_006, ARRAY_SIZE(SEQ_TD4160_BOE_006), 0, },
	{SEQ_TD4160_BOE_007, ARRAY_SIZE(SEQ_TD4160_BOE_007), 0, },
	{SEQ_TD4160_BOE_008, ARRAY_SIZE(SEQ_TD4160_BOE_008), 0, },
	{SEQ_TD4160_BOE_009, ARRAY_SIZE(SEQ_TD4160_BOE_009), 0, },
	{SEQ_TD4160_BOE_010, ARRAY_SIZE(SEQ_TD4160_BOE_010), 0, },
	{SEQ_TD4160_BOE_011, ARRAY_SIZE(SEQ_TD4160_BOE_011), 0, },
	{SEQ_TD4160_BOE_012, ARRAY_SIZE(SEQ_TD4160_BOE_012), 0, },
	{SEQ_TD4160_BOE_013, ARRAY_SIZE(SEQ_TD4160_BOE_013), 0, },
	{SEQ_TD4160_BOE_014, ARRAY_SIZE(SEQ_TD4160_BOE_014), 0, },
	{SEQ_TD4160_BOE_015, ARRAY_SIZE(SEQ_TD4160_BOE_015), 0, },
	{SEQ_TD4160_BOE_016, ARRAY_SIZE(SEQ_TD4160_BOE_016), 0, },
	{SEQ_TD4160_BOE_017, ARRAY_SIZE(SEQ_TD4160_BOE_017), 0, },
	{SEQ_TD4160_BOE_018, ARRAY_SIZE(SEQ_TD4160_BOE_018), 0, },
	{SEQ_TD4160_BOE_019, ARRAY_SIZE(SEQ_TD4160_BOE_019), 0, },
	{SEQ_TD4160_BOE_020, ARRAY_SIZE(SEQ_TD4160_BOE_020), 0, },
	{SEQ_TD4160_BOE_021, ARRAY_SIZE(SEQ_TD4160_BOE_021), 0, },
	{SEQ_TD4160_BOE_022, ARRAY_SIZE(SEQ_TD4160_BOE_022), 0, },
	{SEQ_TD4160_BOE_023, ARRAY_SIZE(SEQ_TD4160_BOE_023), 0, },
	{SEQ_TD4160_BOE_024, ARRAY_SIZE(SEQ_TD4160_BOE_024), 0, },
	{SEQ_TD4160_BOE_025, ARRAY_SIZE(SEQ_TD4160_BOE_025), 0, },
	{SEQ_TD4160_BOE_026, ARRAY_SIZE(SEQ_TD4160_BOE_026), 0, },
	{SEQ_TD4160_BOE_027, ARRAY_SIZE(SEQ_TD4160_BOE_027), 0, },
	{SEQ_TD4160_BOE_028, ARRAY_SIZE(SEQ_TD4160_BOE_028), 0, },
	{SEQ_TD4160_BOE_029, ARRAY_SIZE(SEQ_TD4160_BOE_029), 0, },
	{SEQ_TD4160_BOE_030, ARRAY_SIZE(SEQ_TD4160_BOE_030), 0, },
	{SEQ_TD4160_BOE_031, ARRAY_SIZE(SEQ_TD4160_BOE_031), 0, },
	{SEQ_TD4160_BOE_032, ARRAY_SIZE(SEQ_TD4160_BOE_032), 0, },
	{SEQ_TD4160_BOE_033, ARRAY_SIZE(SEQ_TD4160_BOE_033), 0, },
	{SEQ_TD4160_BOE_034, ARRAY_SIZE(SEQ_TD4160_BOE_034), 0, },
	{SEQ_TD4160_BOE_035, ARRAY_SIZE(SEQ_TD4160_BOE_035), 0, },
	{SEQ_TD4160_BOE_036, ARRAY_SIZE(SEQ_TD4160_BOE_036), 0, },
	{SEQ_TD4160_BOE_037, ARRAY_SIZE(SEQ_TD4160_BOE_037), 0, },
	{SEQ_TD4160_BOE_038, ARRAY_SIZE(SEQ_TD4160_BOE_038), 0, },
	{SEQ_TD4160_BOE_039, ARRAY_SIZE(SEQ_TD4160_BOE_039), 0, },
	{SEQ_TD4160_BOE_040, ARRAY_SIZE(SEQ_TD4160_BOE_040), 0, },
	{SEQ_TD4160_BOE_041, ARRAY_SIZE(SEQ_TD4160_BOE_041), 0, },
	{SEQ_TD4160_BOE_042, ARRAY_SIZE(SEQ_TD4160_BOE_042), 0, },
	{SEQ_TD4160_BOE_043, ARRAY_SIZE(SEQ_TD4160_BOE_043), 0, },
};

static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	1, 1, 2, 3, 3, 4, 5, 5, 6, 7, /* 1: 1 */
	7, 8, 9, 9, 10, 11, 11, 12, 13, 14,
	14, 15, 16, 16, 17, 18, 18, 19, 20, 20,
	21, 22, 22, 23, 24, 24, 25, 26, 27, 27,
	28, 29, 29, 30, 31, 31, 32, 33, 33, 34,
	35, 35, 36, 37, 37, 38, 39, 40, 40, 41,
	42, 42, 43, 44, 44, 45, 46, 46, 47, 48,
	48, 49, 50, 51, 51, 52, 53, 53, 54, 55,
	55, 56, 57, 57, 58, 59, 59, 60, 61, 61,
	62, 63, 64, 64, 65, 66, 66, 67, 68, 68,
	69, 70, 70, 71, 72, 72, 73, 74, 74, 75,
	76, 77, 77, 78, 79, 79, 80, 81, 81, 82,
	83, 83, 84, 85, 85, 86, 87, 88, 88, 89, /* 128: 88 */
	90, 91, 92, 93, 94, 95, 96, 97, 98, 99,
	100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
	110, 111, 112, 113, 114, 115, 116, 117, 118, 118,
	119, 120, 121, 122, 123, 124, 125, 126, 127, 128,
	129, 130, 131, 132, 133, 134, 135, 136, 137, 138,
	139, 140, 141, 142, 143, 144, 145, 146, 147, 148,
	149, 149, 150, 151, 152, 153, 154, 155, 156, 157,
	158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
	168, 169, 170, 171, 172, 173, 174, 175, 176, 177,
	178, 179, 180, 180, 181, 182, 183, 184, 185, 186,
	187, 188, 189, 190, 191, 192, 193, 194, 195, 196,
	197, 198, 199, 200, 201, 202, 203, 204, 205, 206,
	207, 208, 209, 210, 211, 211, 211, 211, 211, 211, /* 255: 211 */
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 211, 211, 211, 211, 211,
	211, 211, 211, 211, 211, 254,
};

#endif /* __TD4160_BOE_PARAM_H__ */
