// DO NOT EDIT: This file generated from insns.dat, originally
//   sourced from the NASM project then modified.

// This file specifically is in the Public Domain


#include "instructions.h"

static struct instruction instruction_group__[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDF}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_adc_[39] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x10}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x12}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x13}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x13}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x13}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x13}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x13}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x13}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x14}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x15}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x15}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x15}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_add_[39] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x00}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x00}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x01}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x01}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x01}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x01}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x01}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x01}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x02}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x02}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x03}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x03}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x03}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x03}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x03}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x03}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x04}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x05}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x05}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x05}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_addpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x58}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_addps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x58}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_addsd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x58}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_addss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x58}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_addsubpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_addsubps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_aesdec_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0xDE}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_aesdeclast_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0xDF}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_aesenc_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0xDC}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_aesenclast_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0xDD}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_aesimc_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0xDB}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_aeskeygenassist_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0xDF}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_and_[39] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x20}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x20}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x21}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x21}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x21}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x21}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x21}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x21}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x22}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x22}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x23}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x23}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x23}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x23}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x23}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x23}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x24}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x25}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x25}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x25}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_andnpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x55}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_andnps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x55}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_andpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x54}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_andps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x54}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_blendpd_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_blendps_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_blendvpd_[3] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x38,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x15}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_blendvps_[3] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x38,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x14}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_bsf_[7] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBC}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBC}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBC}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBC}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBC}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBC}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_bsr_[7] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_bswap_[17] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xC9}, .operands = {{102, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCA}, .operands = {{102, 1, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCB}, .operands = {{102, 2, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCC}, .operands = {{102, 3, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCD}, .operands = {{102, 4, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCE}, .operands = {{102, 5, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCF}, .operands = {{102, 6, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xD0}, .operands = {{102, 7, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xC9}, .operands = {{102, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCA}, .operands = {{102, 1, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCB}, .operands = {{102, 2, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCC}, .operands = {{102, 3, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCD}, .operands = {{102, 4, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCE}, .operands = {{102, 5, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xCF}, .operands = {{102, 6, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xD0}, .operands = {{102, 7, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_bt_[10] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA3}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA3}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA3}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_btc_[10] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBB}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBB}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBB}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBB}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBB}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBB}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_btr_[10] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB3}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB3}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB3}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_bts_[10] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAB}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAB}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAB}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAB}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAB}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAB}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBA}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_call_[13] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE8}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE8}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE8}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE8}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_cbw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x98}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_cdq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x99}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_cdqe_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x98}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_clc_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cld_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFC}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_clflush_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xAE}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_clgi_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xDD}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cli_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFA}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmc_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF5}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmovcc_[49] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x41}, .operands = {{102, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x42}, .operands = {{102, 1, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x43}, .operands = {{102, 2, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x44}, .operands = {{102, 3, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x45}, .operands = {{102, 4, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x46}, .operands = {{102, 5, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x47}, .operands = {{102, 6, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x48}, .operands = {{102, 7, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x41}, .operands = {{102, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x42}, .operands = {{102, 1, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x43}, .operands = {{102, 2, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x44}, .operands = {{102, 3, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x45}, .operands = {{102, 4, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x46}, .operands = {{102, 5, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x47}, .operands = {{102, 6, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x48}, .operands = {{102, 7, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x41}, .operands = {{102, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x42}, .operands = {{102, 1, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x43}, .operands = {{102, 2, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x44}, .operands = {{102, 3, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x45}, .operands = {{102, 4, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x46}, .operands = {{102, 5, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x47}, .operands = {{102, 6, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x48}, .operands = {{102, 7, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x41}, .operands = {{102, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x42}, .operands = {{102, 1, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x43}, .operands = {{102, 2, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x44}, .operands = {{102, 3, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x45}, .operands = {{102, 4, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x46}, .operands = {{102, 5, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x47}, .operands = {{102, 6, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x48}, .operands = {{102, 7, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x41}, .operands = {{102, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x42}, .operands = {{102, 1, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x43}, .operands = {{102, 2, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x44}, .operands = {{102, 3, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x45}, .operands = {{102, 4, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x46}, .operands = {{102, 5, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x47}, .operands = {{102, 6, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x48}, .operands = {{102, 7, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x41}, .operands = {{102, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x42}, .operands = {{102, 1, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x43}, .operands = {{102, 2, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x44}, .operands = {{102, 3, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x45}, .operands = {{102, 4, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x46}, .operands = {{102, 5, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x47}, .operands = {{102, 6, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x48}, .operands = {{102, 7, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cmp_[39] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x38}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x38}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x39}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x39}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x39}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x39}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x39}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x39}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3A}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3B}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3B}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3B}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3B}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3B}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3B}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3C}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3D}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3D}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x3D}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpeqpd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpeqps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpeqsd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF2,0x0F,0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpeqss_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF3,0x0F,0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmplepd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpleps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmplesd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF2,0x0F,0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpless_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF3,0x0F,0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpltpd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpltps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpltsd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF2,0x0F,0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpltss_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF3,0x0F,0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpneqpd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpneqps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpneqsd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF2,0x0F,0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpneqss_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF3,0x0F,0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpnlepd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpnleps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpnlesd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF2,0x0F,0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpnless_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF3,0x0F,0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpnltpd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpnltps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpnltsd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF2,0x0F,0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpnltss_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF3,0x0F,0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpordpd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpordps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpordsd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF2,0x0F,0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpordss_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF3,0x0F,0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmppd_[2] = {
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xC2}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpsb_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xA6}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpsd_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xA7}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0xF2,0x0F,0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpsq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xA7}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cmpss_[3] = {
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0xF3,0x0F,0xC2}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0xF3,0x0F,0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpsw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xA7}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_cmpunordpd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpunordps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpunordsd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF2,0x0F,0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpunordss_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0xF3,0x0F,0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cmpxchg_[9] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB0}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB1}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB1}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB1}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cmpxchg16b_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xC7}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cmpxchg8b_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xC7}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_comisd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x2F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_comiss_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x2F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cpu_read_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x3D}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cpu_write_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x3C}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cpuid_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xA2}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cqo_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x99}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_crc32_[6] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF0}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cvtdq2pd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtdq2ps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtpd2dq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtpd2pi_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x2D}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtpd2ps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtpi2pd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x2A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtpi2ps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x2A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtps2dq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtps2pd_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtps2pi_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x2D}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtsd2si_[5] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2D}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2D}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2D}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cvtsd2ss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtsi2sd_[4] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2A}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2A}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cvtsi2ss_[4] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2A}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2A}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cvtss2sd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvtss2si_[5] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2D}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2D}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2D}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cvttpd2dq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvttpd2pi_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x2C}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvttps2dq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvttps2pi_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x2C}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_cvttsd2si_[5] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2C}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2C}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2C}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cvttss2si_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2C}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_cwd_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x99}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_cwde_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x98}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_dec_[12] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{102, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x00}, .operands = {{102, 1, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x01}, .operands = {{102, 2, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x02}, .operands = {{102, 3, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x03}, .operands = {{102, 4, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x04}, .operands = {{102, 5, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x05}, .operands = {{102, 6, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x06}, .operands = {{102, 7, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_div_[5] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF6}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_divpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x5E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_divps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_divsd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x5E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_divss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x5E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_dmint_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x39}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_dppd_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x41}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_dpps_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x40}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_emms_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x77}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_enter_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC8}, .operands = {{105, 0, 2},{105, 0, 2}}, .flags = 0x0},
};

static struct instruction instruction_group_extractps_[3] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x17}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x17}, .operands = {{0, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_extrq_[3] = {
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0x78}, .operands = {{0, 0, 0},{105, 0, 1},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x79}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_fwait_[2] = {
	{.opcodes_len = 0, .operands_len = 1, .opcodes = {}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_getsec_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x37}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_haddpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x7C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_haddps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x7C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_hint_nop0_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop1_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop10_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop11_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop12_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop13_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop14_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop15_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop16_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop17_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop18_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop19_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop2_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop20_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop21_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop22_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop23_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1A}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop24_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop25_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop26_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop27_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop28_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop29_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop3_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop30_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop31_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1B}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop32_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop33_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop34_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop35_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop36_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop37_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop38_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop39_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1C}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop4_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop40_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop41_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop42_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop43_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop44_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop45_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop46_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop47_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1D}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop48_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop49_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop5_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop50_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop51_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop52_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop53_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop54_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop55_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1E}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop56_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop57_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop58_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop59_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop6_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop60_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop61_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop62_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop63_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop7_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop8_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hint_nop9_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x19}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_hsubpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x7D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_hsubps_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x7D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_icebp_[9] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{102, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{102, 1, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{102, 2, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{102, 3, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{102, 4, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{102, 5, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{102, 6, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{102, 7, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_idiv_[5] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF6}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_imul_[47] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF6}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAF}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAF}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAF}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAF}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAF}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xAF}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 2},{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 2},{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 2},{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 2},{109, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 2},{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 2},{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 2},{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 2},{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 4},{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 4},{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 4},{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 4},{109, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 4},{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 4},{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 4},{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 4},{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 8},{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 8},{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 8},{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 8},{109, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 8},{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 8},{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 8},{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6B}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6B}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x69}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x69}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6B}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6B}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x69}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x69}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6B}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6B}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x69}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x69}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_in_[7] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE4}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE5}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE5}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xEC}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xED}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xED}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_inc_[12] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{102, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x00}, .operands = {{102, 1, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x01}, .operands = {{102, 2, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x02}, .operands = {{102, 3, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x03}, .operands = {{102, 4, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x04}, .operands = {{102, 5, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x05}, .operands = {{102, 6, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x06}, .operands = {{102, 7, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_insb_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6C}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_insd_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6D}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_insertps_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x21}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_insertq_[3] = {
	{.opcodes_len = 3, .operands_len = 4, .opcodes = {0xF2,0x0F,0x78}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x79}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_insw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6D}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_int_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCD}, .operands = {{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_int01_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_int03_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCC}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_int1_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_int3_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCC}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_invept_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x80}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_invlpga_[4] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x01,0xDF}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x01,0xDF}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xDF}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_invvpid_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x81}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_iret_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCF}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_iretd_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCF}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_iretq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCF}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_iretw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCF}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_jcc_[57] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x81}, .operands = {{102, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x82}, .operands = {{102, 1, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x83}, .operands = {{102, 2, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x84}, .operands = {{102, 3, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x85}, .operands = {{102, 4, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x86}, .operands = {{102, 5, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x87}, .operands = {{102, 6, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x88}, .operands = {{102, 7, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x81}, .operands = {{102, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x82}, .operands = {{102, 1, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x83}, .operands = {{102, 2, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x84}, .operands = {{102, 3, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x85}, .operands = {{102, 4, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x86}, .operands = {{102, 5, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x87}, .operands = {{102, 6, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x88}, .operands = {{102, 7, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x71}, .operands = {{102, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x72}, .operands = {{102, 1, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x73}, .operands = {{102, 2, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x74}, .operands = {{102, 3, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x75}, .operands = {{102, 4, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x76}, .operands = {{102, 5, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x77}, .operands = {{102, 6, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x78}, .operands = {{102, 7, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x71}, .operands = {{102, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x72}, .operands = {{102, 1, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x73}, .operands = {{102, 2, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x74}, .operands = {{102, 3, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x75}, .operands = {{102, 4, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x76}, .operands = {{102, 5, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x77}, .operands = {{102, 6, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x78}, .operands = {{102, 7, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x81}, .operands = {{102, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x82}, .operands = {{102, 1, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x83}, .operands = {{102, 2, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x84}, .operands = {{102, 3, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x85}, .operands = {{102, 4, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x86}, .operands = {{102, 5, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x87}, .operands = {{102, 6, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x88}, .operands = {{102, 7, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x72,0xE9}, .operands = {{102, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x73,0xE9}, .operands = {{102, 1, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x74,0xE9}, .operands = {{102, 2, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x75,0xE9}, .operands = {{102, 3, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x76,0xE9}, .operands = {{102, 4, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x77,0xE9}, .operands = {{102, 5, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x78,0xE9}, .operands = {{102, 6, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x79,0xE9}, .operands = {{102, 7, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x71}, .operands = {{102, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x72}, .operands = {{102, 1, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x73}, .operands = {{102, 2, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x74}, .operands = {{102, 3, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x75}, .operands = {{102, 4, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x76}, .operands = {{102, 5, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x77}, .operands = {{102, 6, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x78}, .operands = {{102, 7, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_jecxz_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE3}, .operands = {{105, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_jmp_[15] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xEB}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xEB}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE9}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE9}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE9}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE9}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_jmpe_[6] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xB8}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xB8}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xB8}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_jrcxz_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE3}, .operands = {{105, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_lahf_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x9F}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lar_[13] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x5},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x02}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_lddqu_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0xF0}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_ldmxcsr_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xAE}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lea_[7] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8D}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8D}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8D}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8D}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8D}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8D}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_leave_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC9}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lfence_[3] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xAE,0xE8}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xAE,0xE8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lfs_[4] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB4}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB4}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB4}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_lgs_[4] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB5}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB5}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB5}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_llwpcb_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x12}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x12}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lodsb_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAC}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lodsd_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAD}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_lodsq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAD}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_lodsw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAD}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_loop_[4] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE2}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE2}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE2}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_loope_[4] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE1}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE1}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE1}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_loopne_[4] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE0}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE0}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE0}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_loopnz_[4] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE0}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE0}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE0}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_loopz_[4] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xE1}, .operands = {{105, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE1}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE1}, .operands = {{105, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lsl_[13] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x5},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x03}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_lss_[4] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB2}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB2}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB2}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_lwpins_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lwpval_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_lzcnt_[4] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBD}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_maskmovdqu_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_maskmovq_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF7}, .operands = {{114, 120, 0},{114, 120, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_maxpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x5F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_maxps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_maxsd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x5F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_maxss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x5F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_mfence_[3] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xAE,0xF0}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xAE,0xF0}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_minpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x5D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_minps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_minsd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x5D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_minss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x5D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_monitor_[3] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xC8}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x0F,0x01,0xC8}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_monitorx_[5] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xFA}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x0F,0x01,0xFA}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x0F,0x01,0xFA}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x0F,0x01,0xFA}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_montmul_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA6,0xC0}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_mov_[86] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8C}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8C}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8C}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8C}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8C}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8E}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8E}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8E}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8E}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8E}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x88}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x88}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x89}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x89}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x89}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x89}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x89}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x89}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8A}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8B}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8B}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8B}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8B}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8B}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x8B}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB1}, .operands = {{102, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB2}, .operands = {{102, 1, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB3}, .operands = {{102, 2, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB4}, .operands = {{102, 3, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB5}, .operands = {{102, 4, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB6}, .operands = {{102, 5, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB7}, .operands = {{102, 6, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB8}, .operands = {{102, 7, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB9}, .operands = {{102, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBA}, .operands = {{102, 1, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBB}, .operands = {{102, 2, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBC}, .operands = {{102, 3, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBD}, .operands = {{102, 4, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBE}, .operands = {{102, 5, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBF}, .operands = {{102, 6, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{102, 7, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB9}, .operands = {{102, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBA}, .operands = {{102, 1, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBB}, .operands = {{102, 2, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBC}, .operands = {{102, 3, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBD}, .operands = {{102, 4, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBE}, .operands = {{102, 5, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBF}, .operands = {{102, 6, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{102, 7, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB9}, .operands = {{102, 0, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBA}, .operands = {{102, 1, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBB}, .operands = {{102, 2, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBC}, .operands = {{102, 3, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBD}, .operands = {{102, 4, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBE}, .operands = {{102, 5, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBF}, .operands = {{102, 6, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{102, 7, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC7}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xB9}, .operands = {{102, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBA}, .operands = {{102, 1, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBB}, .operands = {{102, 2, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBC}, .operands = {{102, 3, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBD}, .operands = {{102, 4, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBE}, .operands = {{102, 5, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xBF}, .operands = {{102, 6, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{102, 7, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC6}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC7}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC7}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC7}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC7}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC6}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC7}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC7}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_movapd_[5] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x28}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x29}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x29}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x28}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_movaps_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x28}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x29}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movbe_[7] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF0}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF0}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF0}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0xF1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_movd_[9] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x6E}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x7E}, .operands = {{0, 0, 0},{114, 120, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x6E}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x7E}, .operands = {{0, 0, 8},{114, 120, 8}}, .flags = 0x3},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x7E}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6E}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x7E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movddup_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movdq2q_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0xD6}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movdqa_[5] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x7F}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6F}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x7F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movdqu_[5] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x6F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x7F}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x6F}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x7F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movhlps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movhpd_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x17}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x16}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_movhps_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x16}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x17}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movlhps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x16}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movlpd_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x13}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movlps_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x13}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movmskpd_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x50}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_movmskps_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x50}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_movntdq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE7}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movntdqa_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x2A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movnti_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC3}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC3}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_movntpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x2B}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movntps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x2B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movntq_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE7}, .operands = {{109, 0, -1},{114, 120, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movntsd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x2B}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movntss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x2B}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movq_[11] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x6F}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x7F}, .operands = {{0, 0, 0},{114, 120, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x6E}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x7E}, .operands = {{0, 0, 8},{114, 120, 8}}, .flags = 0x3},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x7E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD6}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x7E}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6E}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x7E}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_movq2dq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0xD6}, .operands = {{0, 0, 0},{114, 120, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movsb_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xA4}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movsd_[6] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xA5}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movshdup_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x16}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movsldup_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movsq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xA5}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_movss_[4] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movsw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xA5}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_movsx_[8] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBE}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBE}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBE}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBF}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBE}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xBF}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x63}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_movsxd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x63}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_movupd_[5] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x11}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x10}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_movups_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_movzx_[7] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB6}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB6}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB6}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB7}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB6}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB7}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_mpsadbw_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x42}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_mul_[5] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF6}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_mulpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x59}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_mulps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x59}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_mulsd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x59}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_mulss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x59}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_mwait_[3] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xC9}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x01,0xC9}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_mwaitx_[3] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xFB}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x01,0xFB}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_neg_[5] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF6}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_nop_[5] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x90}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x1F}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_not_[5] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF6}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF7}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_or_[39] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x08}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x08}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x09}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x09}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x09}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x09}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x09}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x09}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0A}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0B}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0B}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0B}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0B}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0B}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0B}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0C}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0D}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0D}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0D}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_orpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x56}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_orps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x56}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_out_[7] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{105, 0, 1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE7}, .operands = {{105, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE7}, .operands = {{105, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xEE}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xEF}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xEF}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_outsb_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6E}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_outsd_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6F}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_outsw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6F}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_pabsb_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x1C}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x1C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pabsd_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x1E}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x1E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pabsw_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x1D}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x1D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_packssdw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x6B}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_packsswb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x63}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x63}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_packusdw_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x2B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_packuswb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x67}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x67}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paddb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xFC}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xFC}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paddd_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xFE}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xFE}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paddq_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xD4}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD4}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paddsb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xEC}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xEC}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paddsiw_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x51}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_paddsw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xED}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xED}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paddusb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xDC}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xDC}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paddusw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xDD}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xDD}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paddw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xFD}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xFD}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_palignr_[3] = {
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x0F,0x3A,0x0F}, .operands = {{114, 120, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pand_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xDB}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xDB}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pandn_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xDF}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xDF}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pause_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x90}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_paveb_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x50}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_pavgb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE0}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pavgw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE3}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE3}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pblendvb_[3] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x38,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pblendw_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pclmulhqhqdq_[2] = {
	{.opcodes_len = 5, .operands_len = 2, .opcodes = {0x66,0x0F,0x3A,0x44,0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pclmulhqlqdq_[2] = {
	{.opcodes_len = 5, .operands_len = 2, .opcodes = {0x66,0x0F,0x3A,0x44,0x01}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pclmullqhqdq_[2] = {
	{.opcodes_len = 5, .operands_len = 2, .opcodes = {0x66,0x0F,0x3A,0x44,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pclmullqlqdq_[2] = {
	{.opcodes_len = 5, .operands_len = 2, .opcodes = {0x66,0x0F,0x3A,0x44,0x00}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pclmulqdq_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x44}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpeqb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x74}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x74}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpeqd_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x76}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x76}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpeqq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x29}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpeqw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x75}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x75}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpestri_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x61}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpestrm_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x60}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpgtb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x64}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x64}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpgtd_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x66}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x66}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpgtq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x37}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpgtw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x65}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x65}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpistri_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x63}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pcmpistrm_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x62}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pdistib_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x54}, .operands = {{114, 120, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_pextrb_[4] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x14}, .operands = {{0, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_pextrd_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x16}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pextrq_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x16}, .operands = {{0, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_pextrw_[7] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xC5}, .operands = {{0, 0, 0},{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC5}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC5}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x15}, .operands = {{0, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_phaddd_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x02}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x02}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_phaddsw_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x03}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x03}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_phaddw_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x01}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x01}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_phminposuw_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x41}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_phsubd_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x06}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x06}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_phsubsw_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x07}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x07}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_phsubw_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x05}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x05}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pinsrb_[4] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x20}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x20}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x20}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pinsrd_[3] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x22}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x22}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pinsrq_[3] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x22}, .operands = {{0, 0, 8},{109, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x22}, .operands = {{0, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_pinsrw_[9] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xC4}, .operands = {{114, 120, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xC4}, .operands = {{114, 120, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xC4}, .operands = {{114, 120, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC4}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC4}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC4}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC4}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC4}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pmachriw_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5E}, .operands = {{114, 120, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_pmaddubsw_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x04}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x04}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmaddwd_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF5}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF5}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmagw_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x52}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_pmaxsb_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x3C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmaxsd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x3D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmaxsw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xEE}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xEE}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmaxub_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xDE}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xDE}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmaxud_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x3F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmaxuw_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x3E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pminsb_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x38}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pminsd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x39}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pminsw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xEA}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xEA}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pminub_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xDA}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xDA}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pminud_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x3B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pminuw_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x3A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovmskb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xD7}, .operands = {{0, 0, 0},{114, 120, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovsxbd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x21}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovsxbq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x22}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovsxbw_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x20}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovsxdq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x25}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovsxwd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x23}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovsxwq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x24}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovzxbd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x31}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovzxbq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x32}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovzxbw_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x30}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovzxdq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x35}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovzxwd_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x33}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmovzxwq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x34}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmuldq_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x28}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmulhriw_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5D}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_pmulhrsw_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x0B}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x0B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmulhrwc_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x59}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_pmulhuw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE4}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE4}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmulhw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE5}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE5}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmulld_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x40}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmullw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xD5}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD5}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmuludq_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF4}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF4}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pmvgezb_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5C}, .operands = {{114, 120, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_pmvlzb_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5B}, .operands = {{114, 120, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_pmvnzb_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5A}, .operands = {{114, 120, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_pmvzb_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x58}, .operands = {{114, 120, 0},{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_pop_[21] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x59}, .operands = {{102, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5A}, .operands = {{102, 1, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5B}, .operands = {{102, 2, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5C}, .operands = {{102, 3, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5D}, .operands = {{102, 4, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5E}, .operands = {{102, 5, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5F}, .operands = {{102, 6, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x60}, .operands = {{102, 7, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x59}, .operands = {{102, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5A}, .operands = {{102, 1, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5B}, .operands = {{102, 2, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5C}, .operands = {{102, 3, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5D}, .operands = {{102, 4, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5E}, .operands = {{102, 5, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x5F}, .operands = {{102, 6, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x60}, .operands = {{102, 7, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x8F}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x8F}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xA1}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xA9}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_popcnt_[4] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB8}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB8}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB8}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_popf_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x9D}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_popfq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x9D}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_popfw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x9D}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_por_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xEB}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xEB}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_prefetchnta_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_prefetcht0_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_prefetcht1_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_prefetcht2_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x18}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psadbw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF6}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pshufb_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x00}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x00}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pshufd_[3] = {
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0x70}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0x70}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pshufhw_[3] = {
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0xF3,0x0F,0x70}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0xF3,0x0F,0x70}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pshuflw_[3] = {
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0xF2,0x0F,0x70}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0xF2,0x0F,0x70}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pshufw_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0x70}, .operands = {{114, 120, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_psignb_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x08}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x08}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psignd_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x0A}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x0A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psignw_[3] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x0F,0x38,0x09}, .operands = {{114, 120, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x09}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pslld_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF2}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x72}, .operands = {{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x72}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_pslldq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x73}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psllq_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF3}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x73}, .operands = {{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF3}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x73}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psllw_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF1}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x71}, .operands = {{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF1}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x71}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psrad_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE2}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x72}, .operands = {{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x72}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psraw_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE1}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x71}, .operands = {{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE1}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x71}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psrld_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xD2}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x72}, .operands = {{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x72}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psrldq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x73}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psrlq_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xD3}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x73}, .operands = {{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD3}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x73}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psrlw_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xD1}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x71}, .operands = {{114, 120, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD1}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x71}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_psubb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF8}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF8}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psubd_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xFA}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xFA}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psubq_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xFB}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xFB}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psubsb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE8}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE8}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psubsiw_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x55}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_psubsw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xE9}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xE9}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psubusb_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xD8}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD8}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psubusw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xD9}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xD9}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_psubw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xF9}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xF9}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_ptest_[2] = {
	{.opcodes_len = 4, .operands_len = 2, .opcodes = {0x66,0x0F,0x38,0x17}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_punpckhbw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x68}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x68}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_punpckhdq_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x6A}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_punpckhqdq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_punpckhwd_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x69}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x69}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_punpcklbw_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x60}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x60}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_punpckldq_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x62}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x62}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_punpcklqdq_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x6C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_punpcklwd_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x61}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x61}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_push_[28] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x51}, .operands = {{102, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x52}, .operands = {{102, 1, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x53}, .operands = {{102, 2, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x54}, .operands = {{102, 3, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x55}, .operands = {{102, 4, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x56}, .operands = {{102, 5, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x57}, .operands = {{102, 6, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x58}, .operands = {{102, 7, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x51}, .operands = {{102, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x52}, .operands = {{102, 1, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x53}, .operands = {{102, 2, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x54}, .operands = {{102, 3, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x55}, .operands = {{102, 4, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x56}, .operands = {{102, 5, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x57}, .operands = {{102, 6, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x58}, .operands = {{102, 7, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFF}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xA0}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xA8}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6A}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6A}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x68}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6A}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x68}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x6A}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x68}, .operands = {{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_pushf_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x9C}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_pushfq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x9C}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_pushfw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x9C}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_pxor_[3] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xEF}, .operands = {{114, 120, 8},{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0xEF}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rcl_[13] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_rcpps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x53}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rcpss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x53}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rcr_[13] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_rdm_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x3A}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rdpmc_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x33}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rdshr_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x36}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_rdtsc_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x31}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rdtscp_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xF9}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_ret_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC3}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC2}, .operands = {{105, 0, 2}}, .flags = 0x0},
};

static struct instruction instruction_group_retf_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCB}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCA}, .operands = {{105, 0, 2}}, .flags = 0x0},
};

static struct instruction instruction_group_retfd_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCB}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCA}, .operands = {{105, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_retfq_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCB}, .operands = {{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCA}, .operands = {{105, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_retfw_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCB}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xCA}, .operands = {{105, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_retn_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC3}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC2}, .operands = {{105, 0, 2}}, .flags = 0x0},
};

static struct instruction instruction_group_retnq_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC3}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC2}, .operands = {{105, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_retnw_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC3}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC2}, .operands = {{105, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_retq_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC3}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC2}, .operands = {{105, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_retw_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC3}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xC2}, .operands = {{105, 0, 2}}, .flags = 0x0},
};

static struct instruction instruction_group_rol_[13] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_ror_[13] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_roundpd_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_roundps_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x08}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_roundsd_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_roundss_[2] = {
	{.opcodes_len = 4, .operands_len = 3, .opcodes = {0x66,0x0F,0x3A,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_rsdc_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x79}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rsldt_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x7B}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rsm_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xAA}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rsqrtps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x52}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rsqrtss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x52}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_rsts_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x7D}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sahf_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x9E}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sal_[13] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_salc_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xD6}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sar_[13] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_sbb_[39] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x18}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x18}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x19}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x19}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x19}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x19}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x19}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x19}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1A}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1B}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1B}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1B}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1B}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1B}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1B}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1C}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1D}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1D}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1D}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_scasb_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAE}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_scasd_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAF}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_scasq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAF}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_scasw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAF}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_setcc_[17] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x91}, .operands = {{102, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x92}, .operands = {{102, 1, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x93}, .operands = {{102, 2, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x94}, .operands = {{102, 3, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x95}, .operands = {{102, 4, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x96}, .operands = {{102, 5, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x97}, .operands = {{102, 6, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x98}, .operands = {{102, 7, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x91}, .operands = {{102, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x92}, .operands = {{102, 1, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x93}, .operands = {{102, 2, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x94}, .operands = {{102, 3, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x95}, .operands = {{102, 4, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x96}, .operands = {{102, 5, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x97}, .operands = {{102, 6, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x98}, .operands = {{102, 7, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sfence_[3] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xAE,0xF8}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xAE,0xF8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sgdt_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x01}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_shl_[13] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_shld_[13] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA4}, .operands = {{109, 0, 2},{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA4}, .operands = {{0, 0, 2},{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA4}, .operands = {{109, 0, 4},{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA4}, .operands = {{0, 0, 4},{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA4}, .operands = {{109, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA4}, .operands = {{0, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA5}, .operands = {{109, 0, 2},{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA5}, .operands = {{0, 0, 2},{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA5}, .operands = {{109, 0, 4},{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA5}, .operands = {{0, 0, 4},{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA5}, .operands = {{109, 0, 8},{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xA5}, .operands = {{0, 0, 8},{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_shr_[13] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_shrd_[13] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAC}, .operands = {{109, 0, 2},{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAC}, .operands = {{0, 0, 2},{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAC}, .operands = {{109, 0, 4},{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAC}, .operands = {{0, 0, 4},{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAC}, .operands = {{109, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAC}, .operands = {{0, 0, 8},{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAD}, .operands = {{109, 0, 2},{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAD}, .operands = {{0, 0, 2},{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAD}, .operands = {{109, 0, 4},{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAD}, .operands = {{0, 0, 4},{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAD}, .operands = {{109, 0, 8},{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xAD}, .operands = {{0, 0, 8},{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_shufpd_[3] = {
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC6}, .operands = {{0, 0, 0},{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 3, .operands_len = 3, .opcodes = {0x66,0x0F,0xC6}, .operands = {{0, 0, 0},{109, 0, -1},{105, 0, 1}}, .flags = 0x0},
};

static struct instruction instruction_group_shufps_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x0F,0xC6}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sidt_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x01}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_skinit_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xDE}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sldt_[7] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 8}}, .flags = 0x1},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_slwpcb_[3] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x12}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x12}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_smi_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF1}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_smint_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x38}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_smsw_[6] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x01}, .operands = {{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x01}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x01}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x01}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x01}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_sqrtpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x51}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sqrtps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x51}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sqrtsd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x51}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sqrtss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x51}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_stc_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xF9}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_std_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFD}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_stgi_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xDC}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sti_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xFB}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_stmxcsr_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xAE}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_stosb_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAA}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_stosd_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAB}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_stosq_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAB}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_stosw_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAB}, .operands = {{0, 0, 2}}, .flags = 0x4},
};

static struct instruction instruction_group_str_[6] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_sub_[39] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x28}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x28}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2A}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2C}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2D}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2D}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2D}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_subpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x5C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_subps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x5C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_subsd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF2,0x0F,0x5C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_subss_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0xF3,0x0F,0x5C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_svdc_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x78}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_svldt_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x7A}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_svts_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x7C}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_swapgs_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xF8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_syscall_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x05}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_sysenter_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x34}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_test_[24] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x84}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x84}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x84}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x85}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA8}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA9}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA9}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xA9}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF6}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF7}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF7}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF7}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF6}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF7}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF7}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_ucomisd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x2E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_ucomiss_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x2E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_ud0_[4] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xFF}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xFF}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xFF}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_ud1_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB9}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB9}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB9}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xB9}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_ud2_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x0B}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_ud2a_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x0B}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_ud2b_[5] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xB9}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB9}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB9}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xB9}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_umov_[13] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x10}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x11}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x11}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x11}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x11}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x12}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x13}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x13}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x13}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x13}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_unpckhpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x15}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_unpckhps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x15}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_unpcklpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x14}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_unpcklps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x14}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaddpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x58}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x58}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaddps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x58}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x58}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaddsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x58}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaddss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x58}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaddsubpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaddsubps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD0}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaesdec_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDE}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaesdeclast_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDF}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaesenc_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDC}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaesenclast_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDD}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vaesimc_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xDB}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vandnpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x55}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x55}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vandnps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x55}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x55}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vandpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x54}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x54}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vandps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x54}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x54}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vblendpd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vblendps_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vblendvpd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x4B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x4B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vblendvps_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x4A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x4A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vbroadcastf128_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vbroadcastsd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x19}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vbroadcastss_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x18}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x18}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_ospd_[5] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_osps_[5] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_ossd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_osss_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_uqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_uqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_uqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_uqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_uspd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x18}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x18}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_usps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x18}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x18}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_ussd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x18}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeq_usss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x18}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpeqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x00}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalse_oqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalse_oqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalse_oqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalse_oqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalse_ospd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalse_osps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalse_ossd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalse_osss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalsepd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalseps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalsesd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpfalsess_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpge_oqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpge_oqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpge_oqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpge_oqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpge_ospd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpge_osps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpge_ossd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpge_osss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgepd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgeps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgesd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgess_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgt_oqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgt_oqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgt_oqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgt_oqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgt_ospd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgt_osps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgt_ossd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgt_osss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgtpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgtps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgtsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpgtss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmple_oqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmple_oqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmple_oqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmple_oqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmple_ospd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmple_osps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmple_ossd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmple_osss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplepd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpleps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplesd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpless_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplt_oqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplt_oqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplt_oqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplt_oqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplt_ospd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplt_osps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplt_ossd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmplt_osss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpltpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpltps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpltsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpltss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_oqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_oqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_oqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_oqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_ospd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_osps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_ossd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_osss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_uqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_uqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_uqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_uqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_uspd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_usps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_ussd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneq_usss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpneqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnge_uqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x19}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x19}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnge_uqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x19}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x19}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnge_uqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x19}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnge_uqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x19}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnge_uspd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnge_usps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnge_ussd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnge_usss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngepd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngeps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngesd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngess_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngt_uqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngt_uqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngt_uqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngt_uqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngt_uspd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngt_usps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngt_ussd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngt_usss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngtpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngtps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngtsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpngtss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnle_uqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnle_uqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnle_uqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnle_uqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnle_uspd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnle_usps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnle_ussd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnle_usss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlepd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnleps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlesd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnless_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlt_uqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlt_uqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlt_uqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlt_uqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlt_uspd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlt_usps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlt_ussd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnlt_usss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnltpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnltps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnltsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpnltss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpord_qpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpord_qps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpord_qsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpord_qss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpord_spd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x17}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x17}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpord_sps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x17}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x17}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpord_ssd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x17}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpord_sss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x17}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpordpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpordps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpordsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpordss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmppd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpps_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpsd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpss_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrue_uqpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrue_uqps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrue_uqsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrue_uqss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrue_uspd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrue_usps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrue_ussd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrue_usss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x1F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptruepd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptrueps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptruesd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmptruess_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunord_qpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunord_qps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunord_qsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunord_qss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunord_spd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x13}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x13}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunord_sps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x13}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x13}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunord_ssd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x13}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunord_sss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x13}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunordpd_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunordps_[3] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunordsd_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcmpunordss_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0xC2,0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcomisd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcomiss_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtdq2pd_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtdq2ps_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtpd2dq_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtpd2ps_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtps2dq_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtps2pd_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtsd2si_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtsd2ss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtsi2sd_[4] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtsi2ss_[4] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtss2sd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvtss2si_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvttpd2dq_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvttps2dq_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x5B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvttsd2si_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vcvttss2si_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vdivpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vdivps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vdivsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vdivss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vdppd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x41}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vdpps_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x40}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x40}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_verr_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_verw_[4] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x00}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vextractf128_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x19}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vextractps_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x17}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmaddpd_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x69}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x69}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x69}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x69}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmaddps_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x68}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x68}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x68}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x68}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmaddsd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmaddss_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmaddsubpd_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmaddsubps_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmsubaddpd_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmsubaddps_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x5E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmsubpd_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmsubps_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmsubsd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfmsubss_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x6E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfnmaddpd_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x79}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x79}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x79}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x79}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfnmaddps_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x78}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x78}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x78}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x78}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfnmaddsd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfnmaddss_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfnmsubpd_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfnmsubps_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfnmsubsd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfnmsubss_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x7E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfrczpd_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfrczps_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfrczsd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vfrczss_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x82}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vhaddpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x7C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x7C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vhaddps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x7C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x7C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vhsubpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x7D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x7D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vhsubps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x7D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x7D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vinsertf128_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x18}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vinsertps_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x21}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vlddqu_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vldmxcsr_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAE}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vldqqu_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmaskmovdqu_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xF7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmaskmovpd_[5] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmaskmovps_[5] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmaxpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmaxps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmaxsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmaxss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmcall_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xC1}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmclear_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x66,0x0F,0xC7}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_vmfunc_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xD4}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vminpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vminps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vminsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vminss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmlaunch_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xC2}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmload_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xDA}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmmcall_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xD9}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovapd_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x28}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x28}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovaps_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x28}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x28}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x29}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovd_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovddup_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovdqa_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovdqu_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovhlps_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovhpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x17}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovhps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x17}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovlhps_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovlpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x13}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovlps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x13}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovmskpd_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovmskps_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x50}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovntdq_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovntdqa_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2A}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovntpd_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovntps_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2B}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovntqq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovq_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovqqa_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovqqu_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x6F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x7F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovsd_[5] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovshdup_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x16}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x16}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovsldup_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x12}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovss_[5] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovupd_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmovups_[5] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x10}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x11}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmpsadbw_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x42}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmptrld_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xC7}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_vmptrst_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xC7}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_vmread_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x78}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_vmresume_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xC3}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmrun_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xD8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmsave_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xDB}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmulpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x59}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x59}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmulps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x59}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x59}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmulsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x59}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmulss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x59}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmwrite_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x79}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x1},
};

static struct instruction instruction_group_vmxoff_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xC4}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vmxon_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0xF3,0x0F,0xC7}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_vorpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x56}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x56}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vorps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x56}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x56}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpabsb_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1C}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpabsd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpabsw_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x1D}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpackssdw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpacksswb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x63}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpackusdw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x2B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpackuswb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x67}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpaddb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xFC}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpaddd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xFE}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpaddq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD4}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpaddsb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xEC}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpaddsw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xED}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpaddusb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDC}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpaddusw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDD}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpaddw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xFD}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpalignr_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x0F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpand_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDB}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpandn_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDF}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpavgb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xE0}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpavgw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xE3}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpblendvb_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x4C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpblendw_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x0E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpclmulhqhqdq_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x44,0x11}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpclmulhqlqdq_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x44,0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpclmullqhqdq_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x44,0x10}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpclmullqlqdq_[2] = {
	{.opcodes_len = 2, .operands_len = 3, .opcodes = {0x44,0x00}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpclmulqdq_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x44}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmov_[5] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xA2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xA2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xA2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xA2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpeqb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x74}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpeqd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x76}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpeqq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x29}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpeqw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x75}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpestri_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x61}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpestrm_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x60}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpgtb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x64}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpgtd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x66}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpgtq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x37}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpgtw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x65}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpistri_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x63}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcmpistrm_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x62}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcomb_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xCC}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcomd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xCE}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcomq_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xCF}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcomub_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xEC}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcomud_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xEE}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcomuq_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xEF}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcomuw_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xED}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpcomw_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xCD}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vperm2f128_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpermilpd_[5] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x0D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpermilps_[5] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x0C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpextrb_[4] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpextrd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpextrq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x16}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpextrw_[6] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xC5}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xC5}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddbd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddbq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC3}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddbw_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC1}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x02}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphadddq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xCB}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddsw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x03}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddubd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddubq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD3}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddubw_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD1}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddudq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xDB}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphadduwd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphadduwq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x01}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddwd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC6}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphaddwq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xC7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphminposuw_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x41}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphsubbw_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE1}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphsubd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x06}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphsubdq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE3}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphsubsw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x07}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphsubw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x05}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vphsubwd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xE2}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpinsrb_[4] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x20}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x20}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x20}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpinsrd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x22}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x22}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpinsrq_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x22}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x22}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpinsrw_[4] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC4}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC4}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC4}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacsdd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x9E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacsdqh_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x9F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacsdql_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x97}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacssdd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x8E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacssdqh_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x8F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacssdql_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x87}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacsswd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x86}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacssww_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x85}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacswd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x96}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmacsww_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x95}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmadcsswd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xA6}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmadcswd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xB6}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmaddubsw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x04}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmaddwd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xF5}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmaxsb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x3C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmaxsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x3D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmaxsw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xEE}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmaxub_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDE}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmaxud_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x3F}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmaxuw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x3E}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpminsb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x38}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpminsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x39}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpminsw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xEA}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpminub_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xDA}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpminud_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x3B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpminuw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x3A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovmskb_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0xD7}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovsxbd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x21}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovsxbq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x22}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovsxbw_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x20}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovsxdq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x25}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovsxwd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x23}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovsxwq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x24}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovzxbd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x31}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovzxbq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x32}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovzxbw_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x30}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovzxdq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x35}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovzxwd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x33}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmovzxwq_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x34}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmuldq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x28}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmulhrsw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmulhuw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xE4}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmulhw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xE5}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmulld_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x40}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmullw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD5}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpmuludq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xF4}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpor_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xEB}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpperm_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xA3}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xA3}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vprotb_[4] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x90}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x90}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xC0}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vprotd_[4] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x92}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x92}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xC2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vprotq_[4] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x93}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x93}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xC3}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vprotw_[4] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x91}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x91}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xC1}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsadbw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xF6}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshab_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x98}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x98}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshad_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x9A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x9A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshaq_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x9B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x9B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshaw_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x99}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x99}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshlb_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x94}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x94}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshld_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x96}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x96}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshlq_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x97}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x97}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshlw_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x95}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x95}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshufb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x00}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshufd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x70}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshufhw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x70}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpshuflw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x70}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsignb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsignd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsignw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpslld_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xF2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x72}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpslldq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x73}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsllq_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xF3}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x73}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsllw_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xF1}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x71}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsrad_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xE2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x72}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsraw_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xE1}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x71}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsrld_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD2}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x72}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsrldq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x73}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsrlq_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD3}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x73}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsrlw_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD1}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x71}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsubb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xF8}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsubd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xFA}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsubq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xFB}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsubsb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xE8}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsubsw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xE9}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsubusb_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD8}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsubusw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xD9}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpsubw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xF9}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vptest_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x17}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x17}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpunpckhbw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x68}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpunpckhdq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpunpckhqdq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6D}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpunpckhwd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x69}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpunpcklbw_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x60}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpunpckldq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x62}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpunpcklqdq_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x6C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpunpcklwd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x61}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vpxor_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0xEF}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vrcpps_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x53}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x53}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vrcpss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x53}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vroundpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x09}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vroundps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x08}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vroundsd_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x0B}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vroundss_[2] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0x0A}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vrsqrtps_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x52}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x52}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vrsqrtss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x52}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vshufpd_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC6}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC6}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vshufps_[3] = {
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC6}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 4, .opcodes = {0xC6}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vsqrtpd_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x51}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x51}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vsqrtps_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x51}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x51}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vsqrtsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x51}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vsqrtss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x51}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vstmxcsr_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xAE}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vsubpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vsubps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vsubsd_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vsubss_[2] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x5C}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vtestpd_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0F}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vtestps_[3] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x0E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vucomisd_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vucomiss_[2] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x2E}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vunpckhpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vunpckhps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x15}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vunpcklpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vunpcklps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x14}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vxorpd_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x57}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x57}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vxorps_[3] = {
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x57}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 3, .opcodes = {0x57}, .operands = {{0, 0, 0},{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vzeroall_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x77}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_vzeroupper_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0x77}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_wrshr_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0x37}, .operands = {{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_xadd_[9] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC0}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC0}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC1}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC1}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC1}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC1}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC1}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xC1}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_xbts_[5] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA6}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA6}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA6}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0xA6}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_xchg_[65] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x91}, .operands = {{102, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x92}, .operands = {{102, 1, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x93}, .operands = {{102, 2, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x94}, .operands = {{102, 3, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x95}, .operands = {{102, 4, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x96}, .operands = {{102, 5, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x97}, .operands = {{102, 6, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x98}, .operands = {{102, 7, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x91}, .operands = {{102, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x92}, .operands = {{102, 1, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x93}, .operands = {{102, 2, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x94}, .operands = {{102, 3, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x95}, .operands = {{102, 4, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x96}, .operands = {{102, 5, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x97}, .operands = {{102, 6, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x98}, .operands = {{102, 7, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x91}, .operands = {{102, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x92}, .operands = {{102, 1, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x93}, .operands = {{102, 2, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x94}, .operands = {{102, 3, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x95}, .operands = {{102, 4, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x96}, .operands = {{102, 5, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x97}, .operands = {{102, 6, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x98}, .operands = {{102, 7, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x91}, .operands = {{0, 0, 2},{102, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x92}, .operands = {{0, 0, 2},{102, 1, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x93}, .operands = {{0, 0, 2},{102, 2, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x94}, .operands = {{0, 0, 2},{102, 3, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x95}, .operands = {{0, 0, 2},{102, 4, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x96}, .operands = {{0, 0, 2},{102, 5, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x97}, .operands = {{0, 0, 2},{102, 6, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x98}, .operands = {{0, 0, 2},{102, 7, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x91}, .operands = {{0, 0, 4},{102, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x92}, .operands = {{0, 0, 4},{102, 1, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x93}, .operands = {{0, 0, 4},{102, 2, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x94}, .operands = {{0, 0, 4},{102, 3, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x95}, .operands = {{0, 0, 4},{102, 4, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x96}, .operands = {{0, 0, 4},{102, 5, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x97}, .operands = {{0, 0, 4},{102, 6, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x98}, .operands = {{0, 0, 4},{102, 7, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x91}, .operands = {{0, 0, 8},{102, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x92}, .operands = {{0, 0, 8},{102, 1, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x93}, .operands = {{0, 0, 8},{102, 2, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x94}, .operands = {{0, 0, 8},{102, 3, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x95}, .operands = {{0, 0, 8},{102, 4, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x96}, .operands = {{0, 0, 8},{102, 5, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x97}, .operands = {{0, 0, 8},{102, 6, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x98}, .operands = {{0, 0, 8},{102, 7, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x86}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x86}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x86}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x86}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x87}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_xcryptcbc_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA7,0xD0}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xcryptcfb_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA7,0xE0}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xcryptctr_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA7,0xD8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xcryptecb_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA7,0xC8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xcryptofb_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA7,0xE8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xgetbv_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0x01,0xD0}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xlat_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xD7}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xlatb_[2] = {
	{.opcodes_len = 1, .operands_len = 1, .opcodes = {0xD7}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xor_[39] = {
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x30}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x30}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x31}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x31}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x31}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x31}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x31}, .operands = {{109, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x31}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x32}, .operands = {{0, 0, 0},{109, 0, -1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x32}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x33}, .operands = {{0, 0, 2},{109, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x33}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x33}, .operands = {{0, 0, 4},{109, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x33}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x33}, .operands = {{0, 0, 8},{109, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x33}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x34}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x35}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x35}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x35}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{0, 0, 0},{105, 0, 1}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 2},{105, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 4},{105, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{0, 0, 8},{0, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{0, 0, 8},{105, 0, 8}}, .flags = 0x3},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x80}, .operands = {{109, 0, -1},{0, 0, 0}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 2},{0, 0, 2}}, .flags = 0x4},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x83}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
	{.opcodes_len = 1, .operands_len = 2, .opcodes = {0x81}, .operands = {{109, 0, 4},{0, 0, 4}}, .flags = 0x0},
};

static struct instruction instruction_group_xorpd_[2] = {
	{.opcodes_len = 3, .operands_len = 2, .opcodes = {0x66,0x0F,0x57}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xorps_[2] = {
	{.opcodes_len = 2, .operands_len = 2, .opcodes = {0x0F,0x57}, .operands = {{0, 0, 0},{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xrstor_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xAE}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_xrstor64_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xAE}, .operands = {{109, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_xsave_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xAE}, .operands = {{109, 0, -1}}, .flags = 0x0},
};

static struct instruction instruction_group_xsave64_[2] = {
	{.opcodes_len = 2, .operands_len = 1, .opcodes = {0x0F,0xAE}, .operands = {{109, 0, 8}}, .flags = 0x3},
};

static struct instruction instruction_group_xsha1_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA6,0xC8}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xsha256_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA6,0xD0}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

static struct instruction instruction_group_xstore_[2] = {
	{.opcodes_len = 3, .operands_len = 1, .opcodes = {0x0F,0xA7,0xC0}, .operands = {{0, 0, 0}}, .flags = 0x0},
};

struct instruction_group_index_entry instruction_group_index[1126] = {
#define X(id, n, len) [id] = { .table = instruction_group_##n##_, .name = #n, .group_len = len},
	INSTRUCTION_GROUP_X_LIST
#undef X
};

static int instruction_hash_table_size = 2048;

static struct {unsigned int hash; int instr_index; }
instruction_hash_table[2048] = {
	[0x0] = {0xbd0697f6, 795}, [0x1] = {0x75ac17ee, 1022}, [0x2] = {0xbeca17f9, 1090}, [0x3] = {0xcc003, 235}, [0x4] = {0xa476a803, 384}, 
	[0x5] = {0xa476a805, 385}, [0x6] = {0xa6469003, 611}, [0x7] = {0x457c0ff4, 1104}, [0x9] = {0x60280809, 970}, [0xa] = {0xbeca1809, 1091}, 
	[0xc] = {0xa602300c, 849}, [0xd] = {0xd, 1}, [0xe] = {0x4435300d, 245}, [0x17] = {0xc5501017, 169}, [0x18] = {0xc5501018, 170}, 
	[0x19] = {0xc5501019, 171}, [0x1a] = {0xc550101a, 172}, [0x1b] = {0xc550101b, 173}, [0x1c] = {0xc550101c, 174}, [0x1d] = {0xc550101d, 175}, 
	[0x1e] = {0xc550101e, 176}, [0x1f] = {0xc550101f, 177}, [0x20] = {0xc5501020, 178}, [0x21] = {0x4ef01021, 285}, [0x22] = {0xa476a819, 386}, 
	[0x24] = {0x8814f024, 784}, [0x25] = {0xb5319025, 866}, [0x30] = {0x4ef01030, 286}, [0x31] = {0xfbe9e831, 660}, [0x33] = {0xb1c39833, 530}, 
	[0x34] = {0x44e94034, 500}, [0x35] = {0x8814f034, 785}, [0x36] = {0x893a6035, 1098}, [0x37] = {0x1dda837, 551}, [0x39] = {0x4ee7c039, 270}, 
	[0x3a] = {0x69723039, 1008}, [0x3d] = {0xc550103d, 180}, [0x3e] = {0xc550103e, 181}, [0x3f] = {0xc550103f, 182}, [0x40] = {0xc5501040, 183}, 
	[0x41] = {0xc5501041, 184}, [0x42] = {0x436e0842, 129}, [0x43] = {0xc5501042, 185}, [0x44] = {0xc5501043, 186}, [0x45] = {0xc5501044, 187}, 
	[0x46] = {0x4ca21046, 52}, [0x47] = {0xc5501045, 188}, [0x48] = {0xc5501046, 189}, [0x49] = {0x44a94048, 383}, [0x4a] = {0xb1c39843, 531}, 
	[0x4b] = {0xfbe9e841, 661}, [0x4c] = {0x69723046, 1009}, [0x4d] = {0x893a6044, 1099}, [0x4e] = {0x42e7c84e, 6}, [0x50] = {0xa476a850, 387}, 
	[0x52] = {0xa476a852, 388}, [0x53] = {0x42efc053, 19}, [0x54] = {0x941fa854, 835}, [0x55] = {0x4ca21055, 53}, [0x56] = {0x444de056, 260}, 
	[0x5e] = {0x42e7c85e, 7}, [0x5f] = {0xdcbf585e, 690}, [0x62] = {0x42efc062, 20}, [0x63] = {0xc5501063, 191}, [0x64] = {0xc5501064, 192}, 
	[0x65] = {0xc5501065, 193}, [0x66] = {0xc5501066, 194}, [0x67] = {0x444de066, 261}, [0x68] = {0xa476a865, 389}, [0x69] = {0xff100069, 134}, 
	[0x6a] = {0x63a9306a, 14}, [0x6b] = {0xff10006a, 135}, [0x6c] = {0xff10006b, 146}, [0x6d] = {0xff10006c, 157}, [0x6e] = {0xff10006e, 168}, 
	[0x6f] = {0xff10006f, 179}, [0x70] = {0x7d3d3870, 131}, [0x71] = {0xff100070, 190}, [0x72] = {0xff100071, 195}, [0x73] = {0xff100072, 196}, 
	[0x74] = {0xff100073, 197}, [0x75] = {0xcb073, 204}, [0x76] = {0xb9102071, 325}, [0x77] = {0xd16086c, 382}, [0x78] = {0xa6469066, 612}, 
	[0x79] = {0xa6469075, 613}, [0x7a] = {0xce07a, 474}, [0x7b] = {0xdcbf586e, 691}, [0x7c] = {0xd6287073, 922}, [0x7d] = {0xce87d, 534}, 
	[0x7e] = {0xce87e, 535}, [0x7f] = {0x1230107f, 614}, [0x80] = {0xce080, 477}, [0x81] = {0x55a8e87f, 830}, [0x82] = {0xbe17887e, 886}, 
	[0x83] = {0xb57f587e, 991}, [0x84] = {0xcb084, 210}, [0x85] = {0x4344a085, 119}, [0x86] = {0xce884, 537}, [0x87] = {0xb57f5880, 992}, 
	[0x88] = {0xedfa7885, 1071}, [0x89] = {0xb911b889, 327}, [0x8a] = {0x4599f87d, 1121}, [0x8c] = {0x4179f08c, 911}, [0x8d] = {0xce88d, 543}, 
	[0x8e] = {0x6028088e, 972}, [0x8f] = {0x1230108f, 615}, [0x90] = {0x9f2b0890, 554}, [0x91] = {0x432cb091, 90}, [0x92] = {0x7dc23892, 89}, 
	[0x93] = {0x93aff092, 243}, [0x94] = {0x4ef01093, 288}, [0x95] = {0x4344a095, 120}, [0x96] = {0x87b87890, 778}, [0x97] = {0xb57f5894, 993}, 
	[0x98] = {0x45082098, 545}, [0x9b] = {0xc39b689b, 56}, [0x9c] = {0x881ce89b, 786}, [0xa0] = {0x881ce8a0, 787}, [0xa1] = {0xce0a1, 478}, 
	[0xa2] = {0xce8a2, 544}, [0xa3] = {0x4ef010a3, 289}, [0xa4] = {0x9bc178a1, 575}, [0xa6] = {0xb1c398a6, 532}, [0xa8] = {0x93aff0a8, 244}, 
	[0xa9] = {0x120000a8, 403}, [0xaa] = {0x450820a8, 546}, [0xab] = {0xc39b68ab, 57}, [0xac] = {0xbd0a28aa, 734}, [0xae] = {0xc2cc48ae, 1083}, 
	[0xb0] = {0xbbfa58b0, 646}, [0xb1] = {0xccda58b0, 758}, [0xb2] = {0x58b2, 315}, [0xb3] = {0xff5f58b2, 634}, [0xb4] = {0xc90b4, 115}, 
	[0xb5] = {0xb1c398b5, 533}, [0xb6] = {0x120000b6, 404}, [0xb7] = {0x189740b3, 790}, [0xb8] = {0x4ca210b8, 54}, [0xb9] = {0xbd0a28b9, 735}, 
	[0xbc] = {0x120000bc, 405}, [0xbe] = {0xc2cc48be, 1084}, [0xc0] = {0xbbfa58c0, 647}, [0xc1] = {0xccda58c0, 759}, [0xc2] = {0xff5f58c2, 635}, 
	[0xc8] = {0x4ca210c8, 55}, [0xc9] = {0x434788c8, 123}, [0xca] = {0xb57f58ca, 994}, [0xcc] = {0xb57f58cc, 995}, [0xcf] = {0xce0cf, 483}, 
	[0xd1] = {0xdcbf58d1, 692}, [0xd4] = {0xbcec28d4, 746}, [0xd9] = {0x735710d9, 985}, [0xdf] = {0x4311a0df, 27}, [0xe0] = {0xdcbf58e0, 693}, 
	[0xe1] = {0xb57f58e0, 996}, [0xe4] = {0xbcec28e4, 747}, [0xe5] = {0x74b1e0e5, 578}, [0xeb] = {0xa9e9f8eb, 891}, [0xec] = {0x735710ec, 986}, 
	[0xee] = {0xcf0ee, 558}, [0xef] = {0xcf0ef, 559}, [0xf0] = {0xcf0f0, 560}, [0xf2] = {0x123010f2, 616}, [0xf7] = {0x2b9508f7, 978}, 
	[0xf8] = {0x4344a0f8, 121}, [0xfb] = {0x2b9508fb, 979}, [0xfc] = {0xbe0d98fc, 844}, [0x101] = {0x12301101, 617}, [0x102] = {0x12000102, 406}, 
	[0x103] = {0xebe1d903, 358}, [0x105] = {0xebe1d905, 359}, [0x106] = {0x97134906, 944}, [0x107] = {0x4344a107, 122}, [0x10b] = {0x4508210b, 547}, 
	[0x10c] = {0xf6a510c, 413}, [0x10e] = {0xc39b690e, 58}, [0x10f] = {0xa44a390e, 766}, [0x112] = {0xfd7df912, 538}, [0x113] = {0xebe1d913, 360}, 
	[0x119] = {0xebe1d919, 361}, [0x11a] = {0x4508211a, 548}, [0x11c] = {0xa39cf91c, 365}, [0x11d] = {0xc39b691d, 59}, [0x11e] = {0xa39cf91e, 366}, 
	[0x11f] = {0xbd0a291c, 736}, [0x120] = {0xa44a391e, 767}, [0x121] = {0xc2cc4921, 1085}, [0x123] = {0xbbfa5923, 648}, [0x124] = {0xccda5923, 760}, 
	[0x125] = {0xff5f5925, 636}, [0x12a] = {0x45ba112a, 917}, [0x12b] = {0xa39cf92b, 367}, [0x12c] = {0x1dcc92c, 499}, [0x12d] = {0xa3f1792d, 373}, 
	[0x12e] = {0x44fbc12d, 514}, [0x12f] = {0xbd0a292c, 737}, [0x130] = {0xc2cc4930, 1086}, [0x131] = {0xa39cf931, 368}, [0x132] = {0xbbfa5932, 649}, 
	[0x133] = {0xccda5932, 761}, [0x134] = {0xff5f5934, 637}, [0x135] = {0xa316b935, 332}, [0x136] = {0x4b9d936, 251}, [0x137] = {0x887e133, 899}, 
	[0x138] = {0x4b5cc938, 495}, [0x13a] = {0xdb70793a, 1108}, [0x13d] = {0xa47cd13d, 390}, [0x13f] = {0xa47cd13f, 391}, [0x140] = {0xdbefe940, 109}, 
	[0x141] = {0xa3f17941, 375}, [0x147] = {0xbcec2947, 748}, [0x148] = {0x4b5cc948, 496}, [0x14b] = {0xa316b94b, 334}, [0x14c] = {0x889794b, 901}, 
	[0x150] = {0xdc545950, 114}, [0x151] = {0x1da6150, 316}, [0x152] = {0xa47cd152, 392}, [0x156] = {0xbcec2956, 749}, [0x158] = {0x7da09158, 429}, 
	[0x159] = {0x7da09159, 430}, [0x15a] = {0x7da0915a, 431}, [0x15d] = {0x1313295d, 682}, [0x15f] = {0x4738015f, 38}, [0x160] = {0x1da615f, 317}, 
	[0x162] = {0xa9ab9962, 465}, [0x163] = {0x31c28963, 564}, [0x164] = {0xf461e164, 1122}, [0x167] = {0xa91d5167, 881}, [0x16b] = {0x6977c16b, 1010}, 
	[0x16c] = {0xef97916c, 833}, [0x16d] = {0x1313296d, 683}, [0x173] = {0x31c28973, 565}, [0x176] = {0x32fc2976, 362}, [0x178] = {0x6977c178, 1011}, 
	[0x179] = {0x57d35179, 577}, [0x17a] = {0x32fc297a, 363}, [0x17b] = {0x28f5997b, 455}, [0x17c] = {0xdc75f17c, 666}, [0x17e] = {0x6977c17e, 1012}, 
	[0x17f] = {0x2ee9317f, 93}, [0x180] = {0x5bf70980, 502}, [0x181] = {0xa44a3981, 768}, [0x182] = {0x1d64982, 225}, [0x183] = {0x45ba983, 11}, 
	[0x189] = {0xa47cd189, 393}, [0x18a] = {0x2ba6198a, 988}, [0x18b] = {0xa47cd18b, 394}, [0x18c] = {0xdc75f18c, 667}, [0x18e] = {0x2ee9318e, 94}, 
	[0x18f] = {0x3040b98f, 96}, [0x190] = {0x949cc990, 249}, [0x191] = {0x1d8b991, 269}, [0x192] = {0xa44a3990, 769}, [0x193] = {0x2f1c6192, 961}, 
	[0x195] = {0x6d51a995, 86}, [0x196] = {0xb4a5a996, 947}, [0x198] = {0xa5272998, 432}, [0x199] = {0xb4a5a998, 948}, [0x19a] = {0x3040b99a, 97}, 
	[0x19f] = {0x1d8b99f, 290}, [0x1a0] = {0xa47cd19f, 395}, [0x1a1] = {0x2f1c619f, 962}, [0x1a4] = {0x6d51a9a4, 87}, [0x1a5] = {0xb074b1a5, 515}, 
	[0x1a6] = {0xbf6fc9a4, 622}, [0x1a7] = {0xb4a5a9a6, 949}, [0x1a8] = {0xa9ab99a8, 466}, [0x1a9] = {0xb4fa29a8, 968}, [0x1ab] = {0x4b5cc9ab, 497}, 
	[0x1ac] = {0xb4a5a9ac, 950}, [0x1ad] = {0x1093f1ad, 280}, [0x1ae] = {0x113bf9ae, 294}, [0x1b0] = {0xb41f69b0, 906}, [0x1b3] = {0xbf6fc9b3, 623}, 
	[0x1b7] = {0xe2d179b7, 381}, [0x1b8] = {0x455c29b7, 894}, [0x1b9] = {0xb58581b8, 997}, [0x1ba] = {0x4b5cc9ba, 498}, [0x1bb] = {0xb4fa29bb, 971}, 
	[0x1bc] = {0x2b9559bb, 980}, [0x1bd] = {0x1093f1bd, 281}, [0x1be] = {0xb58581ba, 998}, [0x1c1] = {0x1dd59c1, 518}, [0x1c4] = {0xdc7ab9c4, 674}, 
	[0x1c5] = {0x1d191c5, 124}, [0x1c6] = {0xcc1c6, 246}, [0x1c7] = {0x455c29c6, 895}, [0x1c8] = {0xb41f69c5, 907}, [0x1c9] = {0x6977c1c4, 1013}, 
	[0x1cb] = {0x44dd79cb, 481}, [0x1cd] = {0xcc1cd, 247}, [0x1ce] = {0xb58581cd, 999}, [0x1d0] = {0x11f589d0, 396}, [0x1d1] = {0x131329d0, 684}, 
	[0x1d2] = {0xdb7079d2, 1109}, [0x1d3] = {0xdc7ab9d3, 675}, [0x1d4] = {0x1e139d4, 1107}, [0x1d5] = {0x1d191d5, 125}, [0x1de] = {0x113f29de, 295}, 
	[0x1df] = {0x131329df, 685}, [0x1e1] = {0xb53191e1, 868}, [0x1e6] = {0x432a31e6, 72}, [0x1e7] = {0x4cab41e6, 83}, [0x1ef] = {0xdc75f1ef, 668}, 
	[0x1f0] = {0xb53191f0, 869}, [0x1f1] = {0xa53711f1, 454}, [0x1f3] = {0x5bf709f3, 503}, [0x1f4] = {0x9cd941f4, 750}, [0x1f5] = {0x432a31f5, 73}, 
	[0x1f9] = {0x455a81f9, 854}, [0x1fa] = {0xb52941f9, 855}, [0x1fe] = {0xdc75f1fe, 669}, [0x201] = {0x1314d201, 706}, [0x203] = {0xa40af203, 376}, 
	[0x204] = {0x9cd94203, 751}, [0x205] = {0xa40af205, 377}, [0x206] = {0xb2e39206, 662}, [0x207] = {0xa5371207, 456}, [0x208] = {0x184aba08, 789}, 
	[0x209] = {0x455a8206, 871}, [0x20a] = {0xb5858204, 1000}, [0x20b] = {0xb5858206, 1001}, [0x210] = {0x443db210, 250}, [0x211] = {0x45092211, 550}, 
	[0x212] = {0xa40af212, 378}, [0x213] = {0x1314d210, 707}, [0x214] = {0x7e5a5a10, 774}, [0x215] = {0xb2e39215, 663}, [0x216] = {0xbf6fca16, 624}, 
	[0x217] = {0xb5319215, 870}, [0x218] = {0xb62fda13, 1029}, [0x219] = {0xa40af219, 379}, [0x21a] = {0xb5858219, 1002}, [0x21d] = {0xbe63821d, 923}, 
	[0x21f] = {0x7e5a5a1f, 775}, [0x226] = {0xbf6fca26, 625}, [0x227] = {0x893a4a26, 1096}, [0x22c] = {0x45535a2c, 796}, [0x22d] = {0x73578a2c, 990}, 
	[0x234] = {0x4452d234, 268}, [0x235] = {0x893a4a35, 1097}, [0x236] = {0xdc7aba36, 676}, [0x23c] = {0x45535a3c, 797}, [0x241] = {0xe8a50a41, 556}, 
	[0x242] = {0x8660f241, 776}, [0x244] = {0xce244, 493}, [0x246] = {0xdc7aba46, 677}, [0x24a] = {0xce24a, 494}, [0x250] = {0xe8a50a50, 557}, 
	[0x251] = {0x8660f250, 777}, [0x256] = {0x432a3256, 74}, [0x258] = {0x432a3258, 75}, [0x25b] = {0xc86d825b, 13}, [0x25c] = {0x87b87a5c, 779}, 
	[0x261] = {0xbe621a61, 914}, [0x265] = {0x432a3265, 76}, [0x266] = {0x9cd94266, 752}, [0x267] = {0x432a3267, 77}, [0x268] = {0x455a9268, 885}, 
	[0x26c] = {0x432a326c, 78}, [0x26d] = {0xb63fc26c, 1058}, [0x270] = {0xb79d3270, 15}, [0x271] = {0x1d07270, 32}, [0x272] = {0x680bb270, 864}, 
	[0x273] = {0x1314d273, 708}, [0x274] = {0x68b3ba70, 875}, [0x276] = {0x9cd94276, 753}, [0x277] = {0xbe621a77, 915}, [0x278] = {0xb2e39278, 664}, 
	[0x279] = {0xedfa6276, 1067}, [0x27a] = {0x1e16a78, 1114}, [0x27e] = {0xb513a27e, 973}, [0x27f] = {0xa5301a7f, 442}, [0x280] = {0x680bb27f, 865}, 
	[0x281] = {0x63a91a81, 12}, [0x282] = {0xb513a280, 974}, [0x283] = {0x1314d283, 709}, [0x284] = {0xa91d5283, 882}, [0x285] = {0x1c95fa84, 981}, 
	[0x286] = {0x1dfea84, 1023}, [0x287] = {0xbe6f8281, 1025}, [0x288] = {0xb2e39288, 665}, [0x289] = {0x1c95fa89, 982}, [0x28a] = {0xbe6f8283, 1026}, 
	[0x28b] = {0x1d0ea8b, 116}, [0x28c] = {0xb63fc282, 1059}, [0x28d] = {0xb513a28d, 975}, [0x28e] = {0x5d301a81, 1066}, [0x290] = {0x1dd3290, 505}, 
	[0x291] = {0xbe6f8291, 1027}, [0x292] = {0x696d4a92, 1003}, [0x293] = {0xb513a293, 976}, [0x294] = {0x32863294, 356}, [0x297] = {0xbe6f8297, 1028}, 
	[0x298] = {0x32863298, 357}, [0x299] = {0x97f8c299, 300}, [0x29a] = {0xc8a9a, 25}, [0x29b] = {0x746cba9b, 345}, [0x29c] = {0x455ab29a, 893}, 
	[0x2a0] = {0x68b6eaa0, 876}, [0x2a6] = {0xc8aa6, 26}, [0x2a7] = {0xcd2a6, 318}, [0x2a8] = {0xf83c2a7, 418}, [0x2a9] = {0x1dd5aa6, 520}, 
	[0x2af] = {0xe248d2af, 335}, [0x2b0] = {0x44f9c2af, 510}, [0x2b1] = {0x44f9c2b1, 511}, [0x2b2] = {0xccab2, 312}, [0x2b3] = {0x44dd72b3, 480}, 
	[0x2b4] = {0x5d334ab1, 1070}, [0x2ba] = {0xc5e22aba, 1113}, [0x2bd] = {0xc8abd, 29}, [0x2be] = {0x44f9c2be, 512}, [0x2c1] = {0xc3a0bac1, 60}, 
	[0x2c2] = {0xe9975ac2, 801}, [0x2c3] = {0x4a235ac3, 930}, [0x2c4] = {0x44f9c2c4, 513}, [0x2c5] = {0xe248d2c5, 336}, [0x2c6] = {0x4a235ac5, 931}, 
	[0x2c7] = {0xa534e2c7, 448}, [0x2cc] = {0x75abd2cc, 1018}, [0x2cd] = {0xc8acd, 30}, [0x2ce] = {0xc8ace, 31}, [0x2cf] = {0x97f89ace, 278}, 
	[0x2d1] = {0xc3a0bad1, 61}, [0x2d2] = {0x5bbf7ad2, 1087}, [0x2d3] = {0x4a235ad3, 932}, [0x2d4] = {0xc74fead1, 1125}, [0x2d7] = {0xc82d7, 2}, 
	[0x2d8] = {0xc82d8, 3}, [0x2d9] = {0x44dd62d7, 479}, [0x2da] = {0xac029ad9, 482}, [0x2db] = {0x1d54adb, 201}, [0x2dc] = {0x4a235ad9, 933}, 
	[0x2dd] = {0x97f89add, 279}, [0x2de] = {0xce2de, 501}, [0x2e3] = {0xa3e2c2e3, 369}, [0x2e7] = {0x5672e7, 207}, [0x2ec] = {0x44ab2aec, 425}, 
	[0x2ee] = {0xf41c1aee, 814}, [0x2f2] = {0x44ab2af2, 426}, [0x2f6] = {0xa3e2c2f6, 371}, [0x2f8] = {0xb19e4af8, 1075}, [0x2fa] = {0xb638cafa, 1046}, 
	[0x2fc] = {0x74b1cafc, 576}, [0x2fe] = {0xf41c1afe, 815}, [0x301] = {0xdbefeb01, 110}, [0x303] = {0xbe6db303, 1024}, [0x308] = {0x7a426b08, 802}, 
	[0x309] = {0xb19e4b08, 1076}, [0x311] = {0xf51e7b11, 1124}, [0x312] = {0xb2df4312, 626}, [0x313] = {0x8b74bb13, 822}, [0x317] = {0x7a426b17, 803}, 
	[0x31c] = {0x1dd531c, 516}, [0x321] = {0x1ded321, 561}, [0x322] = {0x1ded322, 562}, [0x323] = {0xb2df4321, 627}, [0x324] = {0x8b74bb23, 823}, 
	[0x325] = {0x1dd3325, 507}, [0x326] = {0x44a02326, 342}, [0x329] = {0x43f1fb29, 223}, [0x32b] = {0x3099332b, 103}, [0x330] = {0x442ceb30, 232}, 
	[0x331] = {0xb9102330, 326}, [0x334] = {0xc3a0bb34, 62}, [0x335] = {0x1dd9b35, 536}, [0x336] = {0x30993336, 104}, [0x338] = {0xa034eb38, 428}, 
	[0x33a] = {0x64a6c33a, 17}, [0x33d] = {0xc3c2fb3d, 68}, [0x340] = {0xc2388b40, 1079}, [0x341] = {0xb63d9341, 1052}, [0x343] = {0xc3a0bb43, 63}, 
	[0x348] = {0xb911bb48, 328}, [0x349] = {0xa9014b48, 862}, [0x34a] = {0x64a6c34a, 18}, [0x34d] = {0xc3c2fb4d, 69}, [0x351] = {0xbf2ff351, 594}, 
	[0x353] = {0xa9ab8353, 461}, [0x358] = {0xa9014b58, 863}, [0x35d] = {0x1d5835d, 213}, [0x35e] = {0xcbe47b5d, 916}, [0x35f] = {0x1d5835f, 214}, 
	[0x360] = {0xbf2ff360, 595}, [0x361] = {0xf41c1b61, 816}, [0x362] = {0xb4eb735e, 954}, [0x363] = {0xbe70e360, 1063}, [0x364] = {0xcdca4b64, 463}, 
	[0x365] = {0xd0361, 1116}, [0x367] = {0x4c9c6b67, 44}, [0x368] = {0x80fd5b67, 132}, [0x36a] = {0x1d5836a, 205}, [0x36b] = {0xb19e4b6b, 1077}, 
	[0x36c] = {0x1d5836c, 206}, [0x370] = {0xf41c1b70, 817}, [0x371] = {0xb4eb7371, 963}, [0x372] = {0x11396b72, 722}, [0x373] = {0x44a02373, 343}, 
	[0x377] = {0x4c9c6b77, 45}, [0x378] = {0x80fd5b77, 133}, [0x37a] = {0x7a426b7a, 804}, [0x37b] = {0xb19e4b7a, 1078}, [0x37f] = {0x1d5837f, 209}, 
	[0x381] = {0x11396b81, 723}, [0x383] = {0x13187b83, 718}, [0x384] = {0xb2df4384, 628}, [0x386] = {0x8b74bb86, 824}, [0x388] = {0xc9388, 117}, 
	[0x389] = {0x6d188b89, 42}, [0x38a] = {0x44a02388, 344}, [0x38b] = {0x97d3738b, 85}, [0x38c] = {0x7a426b8a, 805}, [0x392] = {0xb4635b92, 939}, 
	[0x393] = {0xcdcd7b93, 467}, [0x394] = {0xb2df4394, 629}, [0x395] = {0x13187b93, 719}, [0x396] = {0x8b74bb95, 825}, [0x397] = {0xb4635b94, 940}, 
	[0x399] = {0xa9ab8399, 462}, [0x39f] = {0x96e1ab9f, 257}, [0x3a0] = {0x1dccb9f, 504}, [0x3a2] = {0xb4635ba2, 941}, [0x3a5] = {0xb0bc43a5, 521}, 
	[0x3a6] = {0x63a913a6, 10}, [0x3a8] = {0xb4635ba8, 942}, [0x3a9] = {0x57ce33a9, 831}, [0x3aa] = {0xf63c73aa, 818}, [0x3ab] = {0xa4bd23ab, 423}, 
	[0x3ac] = {0xbe14cbaa, 874}, [0x3b0] = {0xc3c2fbb0, 70}, [0x3b2] = {0xbd0a33b2, 738}, [0x3b3] = {0x1d083b3, 35}, [0x3b4] = {0xc2388bb3, 1080}, 
	[0x3b5] = {0xb0bc43b5, 522}, [0x3b6] = {0x75af73b5, 579}, [0x3ba] = {0x98d3bbba, 311}, [0x3bb] = {0xf63c73ba, 819}, [0x3bc] = {0xbe14cbba, 877}, 
	[0x3bd] = {0x4434f3bd, 237}, [0x3bf] = {0xc3c2fbbf, 71}, [0x3c0] = {0x4434f3bf, 238}, [0x3c1] = {0xbd0a33c1, 739}, [0x3c2] = {0xc5ae5bbf, 1092}, 
	[0x3c3] = {0xbf2ff3c3, 596}, [0x3c4] = {0x7c62c3c4, 810}, [0x3c5] = {0x75af73c5, 580}, [0x3c6] = {0x459a1bc1, 1123}, [0x3c9] = {0x52d00bc9, 304}, 
	[0x3ca] = {0x120003ca, 407}, [0x3cb] = {0x4eeb1bcb, 274}, [0x3cd] = {0x4434f3cd, 239}, [0x3cf] = {0xc5ae5bcf, 1093}, [0x3d3] = {0x4434f3d3, 240}, 
	[0x3d4] = {0xbf2ff3d3, 597}, [0x3d5] = {0x7c62c3d4, 811}, [0x3d7] = {0x949c83d7, 248}, [0x3d8] = {0x120003d7, 408}, [0x3da] = {0x4c9c6bda, 46}, 
	[0x3db] = {0xa48723db, 419}, [0x3dc] = {0x459463db, 1115}, [0x3e2] = {0x92060be2, 826}, [0x3e4] = {0x11396be4, 724}, [0x3e8] = {0x44de43e8, 485}, 
	[0x3e9] = {0x4c9c6be9, 47}, [0x3ee] = {0x8810f3ee, 782}, [0x3f2] = {0x92060bf2, 827}, [0x3f3] = {0x887e3f3, 900}, [0x3f4] = {0x11396bf4, 725}, 
	[0x3f5] = {0x44de43f5, 486}, [0x3f6] = {0x13187bf6, 720}, [0x3f8] = {0x8810f3f8, 783}, [0x3f9] = {0xdb707bf9, 1110}, [0x3fb] = {0x44de43fb, 487}, 
	[0x3ff] = {0xdb70bbff, 1112}, [0x400] = {0x44b00400, 470}, [0x401] = {0x133abc00, 742}, [0x402] = {0x46e68c01, 1094}, [0x405] = {0x13187c05, 721}, 
	[0x40a] = {0x8897c0a, 902}, [0x40f] = {0x133abc0f, 743}, [0x410] = {0x46e68c10, 1095}, [0x417] = {0xbf591c17, 1100}, [0x418] = {0x98315c18, 808}, 
	[0x41d] = {0xf63c741d, 820}, [0x420] = {0xc1c4f420, 1081}, [0x421] = {0x74b1c421, 574}, [0x424] = {0x831db424, 198}, [0x425] = {0xbd0a3424, 740}, 
	[0x426] = {0xbf591c26, 1101}, [0x427] = {0x27851427, 435}, [0x428] = {0x98315c27, 809}, [0x42c] = {0xf63c742c, 821}, [0x42e] = {0xa52d1c2e, 433}, 
	[0x430] = {0xa52d1c30, 434}, [0x431] = {0xc1c4f430, 1082}, [0x433] = {0x831db433, 199}, [0x434] = {0xbd0a3434, 741}, [0x435] = {0xc9435, 118}, 
	[0x437] = {0xa52d9c37, 438}, [0x438] = {0x7c62c437, 812}, [0x439] = {0xccc39, 313}, [0x43a] = {0xa52d9c39, 439}, [0x43b] = {0xc731bc3a, 1119}, 
	[0x43d] = {0xccc3d, 314}, [0x444] = {0xa52d1c44, 437}, [0x446] = {0x7c62c446, 813}, [0x447] = {0xbe705c46, 1049}, [0x44c] = {0xa52d9c4c, 440}, 
	[0x453] = {0xcb453, 222}, [0x455] = {0xc8455, 16}, [0x456] = {0x11fa6c55, 397}, [0x459] = {0xbe705c59, 1050}, [0x45a] = {0xbe195c5a, 887}, 
	[0x45e] = {0x91d9945e, 351}, [0x462] = {0x11fa6c62, 398}, [0x463] = {0x43dee463, 219}, [0x464] = {0xd949dc63, 710}, [0x465] = {0x14aedc65, 698}, 
	[0x467] = {0xdb708467, 1111}, [0x469] = {0x11fa6c69, 399}, [0x46a] = {0xbe195c69, 888}, [0x46f] = {0x408a546f, 908}, [0x470] = {0x97f8cc70, 301}, 
	[0x471] = {0x43dee471, 220}, [0x472] = {0x44aeec71, 460}, [0x473] = {0xa9ab9c70, 468}, [0x474] = {0xd949dc72, 711}, [0x475] = {0x14aedc75, 699}, 
	[0x476] = {0x133abc72, 744}, [0x477] = {0x43dee477, 221}, [0x478] = {0xe39cf46f, 920}, [0x47f] = {0x97f8cc7f, 302}, [0x480] = {0x304cac80, 100}, 
	[0x481] = {0xa5709481, 471}, [0x482] = {0x133abc82, 745}, [0x484] = {0xdc75fc84, 670}, [0x485] = {0x408a5485, 909}, [0x487] = {0x1d7ec87, 241}, 
	[0x488] = {0xa5709487, 472}, [0x48c] = {0x6977c48c, 1014}, [0x490] = {0x2b955c90, 983}, [0x493] = {0xdc75fc93, 671}, [0x495] = {0x43dbfc95, 211}, 
	[0x497] = {0x43dbfc97, 212}, [0x498] = {0xa4865497, 409}, [0x499] = {0x6977c499, 1015}, [0x49d] = {0xdc48649d, 113}, [0x49e] = {0xaba0649d, 252}, 
	[0x49f] = {0x9426649f, 828}, [0x4a0] = {0xe3a0249f, 921}, [0x4a4] = {0x2b955ca4, 984}, [0x4a9] = {0xb635cca9, 1038}, [0x4ab] = {0x2a5da4ab, 410}, 
	[0x4ac] = {0xb6dfcac, 553}, [0x4ad] = {0xb3cd04ad, 966}, [0x4ae] = {0x45079cae, 539}, [0x4af] = {0x11fa6caf, 400}, [0x4b0] = {0x45079cb0, 540}, 
	[0x4b1] = {0x942664ae, 829}, [0x4b2] = {0x5e07acb0, 951}, [0x4b3] = {0xb635ccab, 1039}, [0x4b4] = {0xb6364cb1, 1042}, [0x4b5] = {0xb6364cb4, 1043}, 
	[0x4b7] = {0xfbe9dcb7, 654}, [0x4ba] = {0x4452d4ba, 292}, [0x4bc] = {0x4452d4bc, 293}, [0x4bd] = {0x45079cbd, 541}, [0x4be] = {0x97f884be, 275}, 
	[0x4bf] = {0x278514bf, 436}, [0x4c0] = {0x5e07acbe, 952}, [0x4c4] = {0xa05aecc4, 88}, [0x4c5] = {0x45079cc4, 542}, [0x4c6] = {0xbe638cc4, 936}, 
	[0x4c7] = {0xfbe9dcc7, 655}, [0x4c8] = {0xbe638cc6, 937}, [0x4c9] = {0x4452d4c9, 296}, [0x4ca] = {0x5e07acc4, 953}, [0x4cb] = {0x4452d4cb, 297}, 
	[0x4cc] = {0xdc7ac4cb, 678}, [0x4cd] = {0xbe195ccc, 889}, [0x4ce] = {0x97f884ce, 276}, [0x4cf] = {0x4452d4cf, 298}, [0x4d0] = {0x4452d4d0, 299}, 
	[0x4d1] = {0x4e08c4d1, 264}, [0x4d2] = {0x1db1cd2, 424}, [0x4d3] = {0xbe638cd3, 938}, [0x4d4] = {0xb6364cc7, 1044}, [0x4d5] = {0xd949dcd5, 712}, 
	[0x4d6] = {0xbe703cd3, 1045}, [0x4d8] = {0x14aedcd8, 700}, [0x4d9] = {0xbe638cd9, 943}, [0x4db] = {0xdc7ac4db, 679}, [0x4dc] = {0xbe195cdb, 890}, 
	[0x4e0] = {0xbe703ce0, 1047}, [0x4e3] = {0x1d24ce3, 126}, [0x4e5] = {0xd949dce5, 713}, [0x4e6] = {0xbe703ce6, 1048}, [0x4e7] = {0x14aedce7, 701}, 
	[0x4ea] = {0xa9017cea, 878}, [0x4ec] = {0xa64684ec, 606}, [0x4f1] = {0xc009bcf1, 884}, [0x4f5] = {0xbe706cf5, 1055}, [0x4f6] = {0xdc75fcf6, 672}, 
	[0x4f7] = {0x3f909cf6, 770}, [0x4f8] = {0xbe706cf7, 1056}, [0x4fa] = {0x10b214fa, 283}, [0x4fb] = {0xa64684fb, 607}, [0x4fc] = {0x9cd94cfb, 754}, 
	[0x4fd] = {0xa9017cfa, 879}, [0x505] = {0x3f909d05, 771}, [0x506] = {0xdc75fd06, 673}, [0x507] = {0xbe706d05, 1057}, [0x50a] = {0x5e07ad0a, 955}, 
	[0x50b] = {0x9cd94d0b, 755}, [0x50c] = {0xbe706d0b, 1062}, [0x50e] = {0x43d2ed0e, 200}, [0x512] = {0xb58f0512, 1016}, [0x517] = {0x69722d17, 1004}, 
	[0x51e] = {0xbe70251e, 1030}, [0x520] = {0xbe702520, 1031}, [0x525] = {0x432ddd25, 92}, [0x526] = {0x44de4526, 489}, [0x527] = {0xb2dded27, 602}, 
	[0x528] = {0x69722d25, 1005}, [0x529] = {0x45972528, 1117}, [0x52a] = {0xfbe9dd2a, 656}, [0x52b] = {0x69722d2b, 1006}, [0x52d] = {0x44de452d, 490}, 
	[0x52e] = {0xbe70252d, 1032}, [0x533] = {0xbe702533, 1033}, [0x536] = {0xa4865536, 414}, [0x537] = {0xb2dded37, 603}, [0x538] = {0x45972538, 1118}, 
	[0x539] = {0xfbe9dd39, 657}, [0x53a] = {0xa9013539, 859}, [0x53e] = {0xdc7ac53e, 680}, [0x542] = {0xeb77f542, 208}, [0x543] = {0x87c46d43, 780}, 
	[0x549] = {0xa9013549, 860}, [0x54d] = {0xdc7ac54d, 681}, [0x555] = {0x183ec555, 788}, [0x557] = {0x44ae6557, 445}, [0x558] = {0xdcbf4d57, 686}, 
	[0x55e] = {0xa646855e, 608}, [0x563] = {0xa7974563, 843}, [0x566] = {0xdcbf4d66, 687}, [0x567] = {0x18a33566, 791}, [0x568] = {0x3f909d68, 772}, 
	[0x56b] = {0x4457656b, 306}, [0x56c] = {0x44928d6b, 319}, [0x56d] = {0x44928d6d, 320}, [0x56e] = {0x44ae656b, 446}, [0x56f] = {0xa646856e, 609}, 
	[0x570] = {0x9cd94d6e, 756}, [0x571] = {0x69722d71, 1007}, [0x578] = {0x3f909d78, 773}, [0x579] = {0xedfa7578, 1068}, [0x57a] = {0xc3a10d7a, 64}, 
	[0x57b] = {0x4457657a, 307}, [0x57d] = {0x9cd94d7d, 757}, [0x580] = {0x44928d80, 321}, [0x581] = {0x60280580, 967}, [0x589] = {0xc3a10d89, 65}, 
	[0x58a] = {0xebe1cd89, 352}, [0x58b] = {0xebe1cd8b, 353}, [0x58c] = {0xb52c9d8b, 858}, [0x58d] = {0x4ca1bd8d, 48}, [0x58e] = {0xffc62d8d, 370}, 
	[0x58f] = {0x1c67358f, 372}, [0x590] = {0xb9118d89, 880}, [0x591] = {0x774b058c, 934}, [0x592] = {0x774b0590, 935}, [0x595] = {0xaf7f8d95, 945}, 
	[0x599] = {0xebe1cd99, 354}, [0x59a] = {0xb2dded9a, 604}, [0x59b] = {0xbe09ad99, 838}, [0x59d] = {0x4ca1bd9d, 49}, [0x59f] = {0xebe1cd9f, 355}, 
	[0x5a1] = {0xbdee6da1, 834}, [0x5a4] = {0xaf7f8da4, 946}, [0x5a7] = {0xc8da7, 33}, [0x5a8] = {0xbbfa4da8, 642}, [0x5a9] = {0xb2ddeda9, 605}, 
	[0x5aa] = {0xbe09ada8, 839}, [0x5ab] = {0xff5f4dab, 630}, [0x5b1] = {0xb58f05b1, 1019}, [0x5b2] = {0xce5b2, 506}, [0x5b7] = {0xebd5f5b7, 216}, 
	[0x5b8] = {0xb1666db8, 21}, [0x5b9] = {0xce5b8, 508}, [0x5ba] = {0xff5f4dba, 631}, [0x5bb] = {0xa48655bb, 415}, [0x5bc] = {0xbbfa4db8, 643}, 
	[0x5bd] = {0xa8b6edbb, 851}, [0x5be] = {0x6829d5bd, 867}, [0x5bf] = {0xedfa75be, 1069}, [0x5c1] = {0xd29045c1, 918}, [0x5c4] = {0x1dda5c4, 549}, 
	[0x5c6] = {0x3044b5c6, 98}, [0x5c7] = {0x602805c6, 969}, [0x5c8] = {0xb1666dc8, 22}, [0x5c9] = {0xdcbf4dc9, 688}, [0x5ca] = {0xb2df95ca, 638}, 
	[0x5cc] = {0x1f2055cc, 989}, [0x5ce] = {0xce5ce, 509}, [0x5cf] = {0xa48655cf, 416}, [0x5d5] = {0x3044b5d5, 99}, [0x5d8] = {0xb02acdd8, 79}, 
	[0x5d9] = {0xdcbf4dd9, 689}, [0x5da] = {0xb2df95da, 639}, [0x5dc] = {0x43660ddc, 127}, [0x5dd] = {0x4452d5dc, 303}, [0x5de] = {0xcb5de, 224}, 
	[0x5df] = {0x445765dd, 308}, [0x5e0] = {0xbe61ade0, 896}, [0x5e1] = {0xbe61eddd, 913}, [0x5e2] = {0xbe61ade2, 897}, [0x5e4] = {0x44ae45e4, 441}, 
	[0x5e7] = {0x8dc695e7, 1040}, [0x5e8] = {0xb02acde8, 80}, [0x5e9] = {0xbe705de9, 1051}, [0x5ea] = {0x28f5a5ea, 457}, [0x5eb] = {0x4eee35eb, 277}, 
	[0x5ec] = {0xc3a10dec, 66}, [0x5ed] = {0xc8ded, 34}, [0x5ee] = {0x4ee7fdee, 271}, [0x5ef] = {0x445765ed, 309}, [0x5f0] = {0xbdee25f0, 832}, 
	[0x5f1] = {0x1df0df1, 563}, [0x5f2] = {0xdbfbddf2, 111}, [0x5f3] = {0x44ae45f2, 443}, [0x5f4] = {0xd29375f0, 919}, [0x5f5] = {0xbe61adf5, 898}, 
	[0x5f7] = {0xbe705df7, 1053}, [0x5f8] = {0x44ae45f8, 444}, [0x5fc] = {0xc3a10dfc, 67}, [0x5fd] = {0xbe705dfd, 1054}, [0x600] = {0x4ca1be00, 50}, 
	[0x601] = {0x28f5a600, 458}, [0x602] = {0xcc2c5e02, 349}, [0x604] = {0x73570e04, 977}, [0x607] = {0x44ae7607, 451}, [0x608] = {0xa44a2e07, 762}, 
	[0x609] = {0x4e002609, 262}, [0x60a] = {0x44ae7609, 452}, [0x60b] = {0xbe09ae0b, 840}, [0x60f] = {0x4ca1be0f, 51}, [0x611] = {0xbf2b3611, 590}, 
	[0x614] = {0xc948d614, 1103}, [0x616] = {0x44ae7616, 453}, [0x617] = {0xa44a2e16, 763}, [0x61b] = {0xbbfa4e1b, 644}, [0x61c] = {0x44ae761c, 459}, 
	[0x61d] = {0xff5f4e1d, 632}, [0x61e] = {0xbe09ae1b, 841}, [0x620] = {0xbf2b3620, 591}, [0x621] = {0x935dd621, 236}, [0x624] = {0x97f85e24, 266}, 
	[0x625] = {0x1dd5e24, 523}, [0x626] = {0xa01c1e26, 806}, [0x627] = {0x1e13626, 1106}, [0x628] = {0x2a5da628, 411}, [0x62a] = {0xbbfa4e2a, 645}, 
	[0x62d] = {0xff5f4e2d, 633}, [0x62e] = {0xf6a962e, 417}, [0x631] = {0x1e12e31, 1105}, [0x632] = {0xcc2f8e32, 350}, [0x633] = {0x97f85e33, 267}, 
	[0x636] = {0xa01c1e36, 807}, [0x637] = {0xb58f0636, 1020}, [0x63c] = {0x1d57e3c, 202}, [0x63d] = {0x304cae3d, 101}, [0x63e] = {0x1d79e3d, 227}, 
	[0x63f] = {0xb2df963d, 640}, [0x640] = {0xe248c640, 333}, [0x641] = {0x1318ce3c, 730}, [0x642] = {0x304cae42, 102}, [0x643] = {0xbe123e3d, 850}, 
	[0x644] = {0x1f019e41, 987}, [0x645] = {0xbe9e8e3c, 1073}, [0x646] = {0xf8f79e44, 1120}, [0x649] = {0x1e68649, 374}, [0x64a] = {0xbe0ac649, 842}, 
	[0x64b] = {0xb02ace4b, 81}, [0x64c] = {0xb2df964c, 641}, [0x64d] = {0x1318ce4c, 731}, [0x64e] = {0x1dfae4d, 798}, [0x64f] = {0xb58f0649, 1021}, 
	[0x652] = {0x1dfae52, 799}, [0x658] = {0x1d0ae58, 39}, [0x659] = {0xbf2ffe58, 598}, [0x65a] = {0xb02ace5a, 82}, [0x65b] = {0x1db4e5b, 473}, 
	[0x65d] = {0x1dc7e5d, 484}, [0x65e] = {0x1db3e5e, 469}, [0x65f] = {0x1de165d, 555}, [0x661] = {0xa9ab8661, 464}, [0x664] = {0x4ef00e64, 282}, 
	[0x665] = {0x1dc7e65, 488}, [0x666] = {0xb266e665, 552}, [0x668] = {0x1dc7e68, 491}, [0x669] = {0xbf2ffe68, 599}, [0x66e] = {0x1dc7e6e, 492}, 
	[0x66f] = {0x498f866f, 84}, [0x670] = {0x2f1c5e70, 957}, [0x672] = {0x1dd7672, 529}, [0x673] = {0x97f8a673, 284}, [0x679] = {0x11397679, 726}, 
	[0x67a] = {0xa44a2e79, 764}, [0x67b] = {0x97f8a67b, 287}, [0x67d] = {0xebddee7d, 217}, [0x67e] = {0x2f1c5e7e, 958}, [0x67f] = {0x8dc6967f, 1041}, 
	[0x683] = {0xbf2b3683, 592}, [0x684] = {0x2f1c5e84, 959}, [0x685] = {0x4c515685, 1102}, [0x689] = {0x11397689, 727}, [0x68a] = {0xa44a2e89, 765}, 
	[0x68f] = {0x4ef1068f, 291}, [0x693] = {0xbf2b3693, 593}, [0x698] = {0x4501e698, 528}, [0x69c] = {0xbf6fbe9c, 618}, [0x69f] = {0xa9010e9f, 852}, 
	[0x6aa] = {0x4447b6aa, 253}, [0x6ab] = {0xbe61b6ab, 903}, [0x6ac] = {0x2a5da6ac, 412}, [0x6ad] = {0xa5487ead, 128}, [0x6ae] = {0xbf6fbeac, 619}, 
	[0x6af] = {0x1dd6eaf, 525}, [0x6b0] = {0x1318ceaf, 732}, [0x6b1] = {0xa9010eae, 853}, [0x6b2] = {0xbe61b6ad, 904}, [0x6b3] = {0x76d50eaa, 928}, 
	[0x6b4] = {0x76d50eae, 929}, [0x6b5] = {0xbe9e8eaf, 1074}, [0x6ba] = {0x4447b6ba, 254}, [0x6bb] = {0xcc6bb, 265}, [0x6bc] = {0xbe61b6ba, 905}, 
	[0x6bd] = {0xce6bd, 517}, [0x6be] = {0x1318cebe, 733}, [0x6c0] = {0xbe61b6c0, 910}, [0x6c2] = {0xbe7026c2, 1034}, [0x6c3] = {0xce6c3, 519}, 
	[0x6c4] = {0x56c4, 28}, [0x6c5] = {0xbe7026c4, 1035}, [0x6c6] = {0x455d16c2, 1072}, [0x6ca] = {0x2f1c5eca, 960}, [0x6cb] = {0xbca9becb, 568}, 
	[0x6cc] = {0xe3386ecc, 338}, [0x6cd] = {0xbf2ffecb, 600}, [0x6d1] = {0xbe7026d1, 1036}, [0x6d2] = {0x97f86ed2, 272}, [0x6d3] = {0xbe0fd6d2, 845}, 
	[0x6d7] = {0x44a9b6d7, 421}, [0x6d8] = {0xbe7026d7, 1037}, [0x6da] = {0xbca9beda, 569}, [0x6db] = {0xbf2ffeda, 601}, [0x6e2] = {0xbe0fd6e2, 846}, 
	[0x6e3] = {0xa4872ee3, 420}, [0x6e7] = {0x97f86ee7, 273}, [0x6eb] = {0x81d566eb, 1017}, [0x6ec] = {0x113976ec, 728}, [0x6ee] = {0x449ff6ee, 340}, 
	[0x6f1] = {0x449fb6f1, 322}, [0x6f3] = {0x449fb6f3, 323}, [0x6fb] = {0xff4c5efb, 8}, [0x6fc] = {0x44ae66fb, 447}, [0x6fd] = {0xe3cdfefd, 23}, 
	[0x6fe] = {0x113976fb, 729}, [0x6ff] = {0x87c46eff, 781}, [0x700] = {0xa90166fe, 872}, [0x701] = {0x442c2f01, 229}, [0x707] = {0x449fb707, 324}, 
	[0x708] = {0x44ae6708, 449}, [0x70b] = {0xff4c5f0b, 9}, [0x70d] = {0xe3cdff0d, 24}, [0x70e] = {0x44ae670e, 450}, [0x70f] = {0xbf6fbf0f, 620}, 
	[0x710] = {0xc8f10, 36}, [0x711] = {0xc8f11, 37}, [0x713] = {0xa9016713, 873}, [0x716] = {0xc8f16, 40}, [0x71d] = {0xcbf1d, 228}, 
	[0x71e] = {0x4447b71d, 255}, [0x71f] = {0xbf6fbf1e, 621}, [0x723] = {0x527d6723, 836}, [0x72c] = {0x4447b72c, 256}, [0x732] = {0x527d6732, 837}, 
	[0x736] = {0xc8f36, 41}, [0x73d] = {0xbca9bf3d, 570}, [0x741] = {0xcd741, 422}, [0x742] = {0xbcb1b742, 581}, [0x743] = {0xc8f43, 43}, 
	[0x744] = {0xcd743, 427}, [0x745] = {0xbe0fd745, 847}, [0x748] = {0x13147f48, 694}, [0x749] = {0x4a234f49, 924}, [0x74b] = {0x4a234f4b, 925}, 
	[0x74c] = {0xbca9bf4c, 571}, [0x74d] = {0xb2e33f4d, 650}, [0x74e] = {0x44dc974e, 475}, [0x74f] = {0x1dacf4f, 339}, [0x750] = {0xa9011f4d, 856}, 
	[0x751] = {0xbcb1b751, 582}, [0x752] = {0x5e07af4d, 956}, [0x753] = {0xbb1faf53, 347}, [0x754] = {0xbe0fd754, 848}, [0x757] = {0x13147f57, 695}, 
	[0x759] = {0x4a234f59, 926}, [0x75d] = {0xb2e33f5d, 651}, [0x75f] = {0xbe16cf5f, 883}, [0x760] = {0x4a234f5f, 927}, [0x761] = {0xcb52df61, 587}, 
	[0x762] = {0x309d2f62, 105}, [0x763] = {0xa9011f62, 857}, [0x764] = {0xb10b5764, 524}, [0x768] = {0xedfa5f68, 1064}, [0x76a] = {0xe7788f6a, 346}, 
	[0x76b] = {0xd949e76b, 714}, [0x76d] = {0x14aee76d, 702}, [0x771] = {0x309d2f71, 106}, [0x772] = {0x31c29f72, 566}, [0x774] = {0xbd069774, 792}, 
	[0x775] = {0x1d59775, 218}, [0x776] = {0x11fa6f76, 401}, [0x778] = {0xce778, 527}, [0x779] = {0xfa7ef78, 583}, [0x77a] = {0xd949e77a, 715}, 
	[0x77c] = {0x14aee77c, 703}, [0x782] = {0x31c29f82, 567}, [0x783] = {0xbb22df83, 348}, [0x784] = {0x11fa6f84, 402}, [0x785] = {0xbd069783, 793}, 
	[0x787] = {0x525aff87, 800}, [0x788] = {0xfa7ef88, 584}, [0x789] = {0xbeca1787, 1088}, [0x78d] = {0xbe1bcf8d, 892}, [0x796] = {0xcc796, 305}, 
	[0x797] = {0xbeca1796, 1089}, [0x7a4] = {0xcbfa4, 231}, [0x7a5] = {0xc5500fa5, 136}, [0x7a6] = {0xc5500fa6, 137}, [0x7a7] = {0xc5500fa7, 138}, 
	[0x7a8] = {0xc5500fa8, 139}, [0x7a9] = {0xc5500fa9, 140}, [0x7aa] = {0xc5500faa, 141}, [0x7ab] = {0xc5500fab, 142}, [0x7ac] = {0xc5500fac, 143}, 
	[0x7ad] = {0xc5500fad, 144}, [0x7ae] = {0xc5500fae, 145}, [0x7af] = {0x89560fac, 230}, [0x7b0] = {0xb52fb7ab, 861}, [0x7b1] = {0x8f3727aa, 1060}, 
	[0x7b2] = {0xedfa5faf, 1065}, [0x7b4] = {0xdbfbdfb4, 112}, [0x7b6] = {0x455c97b6, 912}, [0x7ba] = {0x13147fba, 696}, [0x7bc] = {0x449fbfbc, 329}, 
	[0x7bd] = {0x44a01fbc, 341}, [0x7be] = {0x449fbfbe, 330}, [0x7bf] = {0x4ec41fbe, 572}, [0x7c0] = {0x44dc97c0, 476}, [0x7c1] = {0x3345bfc0, 585}, 
	[0x7c2] = {0xb2e33fc0, 652}, [0x7c3] = {0xfbe9e7bf, 658}, [0x7c4] = {0x43fc57c4, 226}, [0x7c5] = {0xdc14cfc5, 380}, [0x7c6] = {0x8f3727c0, 1061}, 
	[0x7c9] = {0x57c9, 203}, [0x7ca] = {0x13147fca, 697}, [0x7cb] = {0xc5500fcb, 147}, [0x7cc] = {0xc5500fcc, 148}, [0x7cd] = {0xc5500fcd, 149}, 
	[0x7ce] = {0x3040b7ce, 95}, [0x7cf] = {0xc5500fce, 150}, [0x7d0] = {0xc5500fcf, 151}, [0x7d1] = {0xc5500fd0, 152}, [0x7d2] = {0xc5500fd1, 153}, 
	[0x7d3] = {0x438a4fd3, 130}, [0x7d4] = {0xc5500fd2, 154}, [0x7d5] = {0xc5500fd3, 155}, [0x7d6] = {0xc5500fd4, 156}, [0x7d7] = {0x449fbfcc, 331}, 
	[0x7d8] = {0x449fbfd2, 337}, [0x7d9] = {0x30a527d9, 107}, [0x7da] = {0xb13407d3, 526}, [0x7db] = {0xc8fdb, 91}, [0x7dc] = {0x42e7c7dc, 4}, 
	[0x7dd] = {0x86ce47dc, 215}, [0x7de] = {0x30a527de, 108}, [0x7df] = {0xcbfdd, 234}, [0x7e0] = {0x4458bfdf, 310}, [0x7e1] = {0x4ec41fcd, 573}, 
	[0x7e2] = {0x3345bfcf, 586}, [0x7e3] = {0x7502afd5, 588}, [0x7e4] = {0x444ddfe4, 258}, [0x7e5] = {0x7502afe5, 589}, [0x7e6] = {0xb2e33fcf, 653}, 
	[0x7e7] = {0xfbe9e7ce, 659}, [0x7e8] = {0x14aee7df, 704}, [0x7e9] = {0xd949e7dd, 716}, [0x7ea] = {0xf6057fea, 263}, [0x7eb] = {0x42e7c7eb, 5}, 
	[0x7ec] = {0xd949e7ec, 717}, [0x7ed] = {0xbd0697e6, 794}, [0x7ee] = {0x5e07afd2, 964}, [0x7ef] = {0x14aee7ef, 705}, [0x7f0] = {0x5e07afdf, 965}, 
	[0x7f1] = {0xc5500ff1, 158}, [0x7f2] = {0xc5500ff2, 159}, [0x7f3] = {0xc5500ff3, 160}, [0x7f4] = {0xc5500ff4, 161}, [0x7f5] = {0xc5500ff5, 162}, 
	[0x7f6] = {0xc5500ff6, 163}, [0x7f7] = {0xc5500ff7, 164}, [0x7f8] = {0xc5500ff8, 165}, [0x7f9] = {0xc5500ff9, 166}, [0x7fa] = {0xc5500ffa, 167}, 
	[0x7fb] = {0x929e7ff3, 233}, [0x7fc] = {0x44352ff7, 242}, [0x7fd] = {0x444ddff3, 259}, [0x7fe] = {0xefb1b7fe, 364}, [0x7ff] = {0xa6468ff3, 610}, 
};

// This function must match the function used to create the hash table above.
// Based on https://stackoverflow.com/questions/2351087/what-is-the-best-32bit-hash-function-for-short-strings-tag-names
static unsigned int hash32(char* s) {
	unsigned int h = 13;
	
	for(unsigned char* p = (unsigned char*)s; *p; p++) {
		h = 37 * h + *p;
	}
	
	h += (h >> 5);
	return h;
};


struct instruction_group_index_entry* get_instruction_by_name(char* name) {
	int h = hash32(name);
	int start = h % instruction_hash_table_size;
	int i = start;
	
	do {
		if(instruction_hash_table[i].hash == h) {
			return instruction_group_index + instruction_hash_table[i].instr_index;
		}
		
		i = (i + 1) % instruction_hash_table_size;
	} while(i != start);
	
	return 0;
}


