#pragma once
unsigned char memoryInjectShellCode[] = {
	0x55, 0x8B, 0xEC, 0xFF, 0x75, 0x08, 0xE8, 0x06, 0x00, 0x00, 0x00, 0xE9, 0x48, 0x08, 0x00, 0x00,
	0x90, 0x83, 0xEC, 0x68, 0x8D, 0x44, 0x24, 0x10, 0x53, 0x55, 0x56, 0x57, 0x50, 0xE8, 0x4F, 0x05,
	0x00, 0x00, 0x8B, 0x74, 0x24, 0x7C, 0x66, 0x81, 0x3E, 0x4D, 0x5A, 0x74, 0x0C, 0x5F, 0x5E, 0x5D,
	0x33, 0xC0, 0x5B, 0x83, 0xC4, 0x68, 0xC2, 0x04, 0x00, 0x8B, 0x5E, 0x3C, 0x03, 0xDE, 0x89, 0x5C,
	0x24, 0x18, 0x81, 0x3B, 0x50, 0x45, 0x00, 0x00, 0x74, 0x0C, 0x5F, 0x5E, 0x5D, 0x33, 0xC0, 0x5B,
	0x83, 0xC4, 0x68, 0xC2, 0x04, 0x00, 0x8B, 0x4B, 0x50, 0x8B, 0x53, 0x34, 0x6A, 0x04, 0x68, 0x00,
	0x20, 0x00, 0x00, 0x51, 0x52, 0xFF, 0x54, 0x24, 0x38, 0x8B, 0xF8, 0x85, 0xFF, 0x89, 0x7C, 0x24,
	0x10, 0x75, 0x26, 0x8B, 0x43, 0x50, 0x6A, 0x04, 0x68, 0x00, 0x20, 0x00, 0x00, 0x50, 0x57, 0xFF,
	0x54, 0x24, 0x38, 0x85, 0xC0, 0x89, 0x44, 0x24, 0x10, 0x75, 0x0A, 0x5F, 0x5E, 0x5D, 0x5B, 0x83,
	0xC4, 0x68, 0xC2, 0x04, 0x00, 0x8B, 0x7C, 0x24, 0x10, 0x6A, 0x14, 0x6A, 0x00, 0xFF, 0x54, 0x24,
	0x3C, 0x50, 0xFF, 0x54, 0x24, 0x50, 0x8B, 0xE8, 0x6A, 0x04, 0x6A, 0x08, 0x89, 0x7D, 0x04, 0xC7,
	0x45, 0x0C, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x54, 0x24, 0x3C, 0x50, 0xFF, 0x54, 0x24, 0x50, 0x89,
	0x45, 0x08, 0xC7, 0x45, 0x10, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x4B, 0x50, 0x6A, 0x04, 0x68, 0x00,
	0x10, 0x00, 0x00, 0x51, 0x57, 0xFF, 0x54, 0x24, 0x38, 0x8B, 0x53, 0x54, 0x6A, 0x04, 0x68, 0x00,
	0x10, 0x00, 0x00, 0x52, 0x57, 0xFF, 0x54, 0x24, 0x38, 0x8B, 0x4E, 0x3C, 0x8B, 0x7B, 0x54, 0x03,
	0xCF, 0x8B, 0xF8, 0x8B, 0xD1, 0xC1, 0xE9, 0x02, 0xF3, 0xA5, 0x8B, 0xCA, 0x83, 0xE1, 0x03, 0xF3,
	0xA4, 0x8B, 0x4C, 0x24, 0x7C, 0x8B, 0x51, 0x3C, 0x8B, 0x4C, 0x24, 0x10, 0x03, 0xC2, 0x8D, 0x54,
	0x24, 0x4C, 0x89, 0x45, 0x00, 0x52, 0x89, 0x48, 0x34, 0xE8, 0x53, 0x04, 0x00, 0x00, 0x8B, 0x45,
	0x00, 0x8B, 0x55, 0x04, 0x33, 0xC9, 0x89, 0x54, 0x24, 0x1C, 0x66, 0x8B, 0x48, 0x14, 0x66, 0x83,
	0x78, 0x06, 0x00, 0xC7, 0x44, 0x24, 0x14, 0x00, 0x00, 0x00, 0x00, 0x8D, 0x4C, 0x01, 0x18, 0x0F,
	0x86, 0x97, 0x00, 0x00, 0x00, 0x8D, 0x59, 0x10, 0xEB, 0x04, 0x8B, 0x54, 0x24, 0x1C, 0x83, 0x3B,
	0x00, 0x75, 0x36, 0x8B, 0x44, 0x24, 0x18, 0x8B, 0x70, 0x38, 0x85, 0xF6, 0x7E, 0x5D, 0x8B, 0x4B,
	0xFC, 0x6A, 0x04, 0x68, 0x00, 0x10, 0x00, 0x00, 0x03, 0xCA, 0x56, 0x51, 0xFF, 0x54, 0x24, 0x64,
	0x8B, 0xCE, 0x8B, 0xF8, 0x8B, 0xD1, 0x33, 0xC0, 0xC1, 0xE9, 0x02, 0x89, 0x7B, 0xF8, 0xF3, 0xAB,
	0x8B, 0xCA, 0x83, 0xE1, 0x03, 0xF3, 0xAA, 0xEB, 0x32, 0x8B, 0x4B, 0xFC, 0x8B, 0x03, 0x6A, 0x04,
	0x68, 0x00, 0x10, 0x00, 0x00, 0x03, 0xCA, 0x50, 0x51, 0xFF, 0x54, 0x24, 0x64, 0x8B, 0x0B, 0x8B,
	0x73, 0x04, 0x8B, 0x7C, 0x24, 0x7C, 0x8B, 0xD1, 0x03, 0xF7, 0x8B, 0xF8, 0xC1, 0xE9, 0x02, 0xF3,
	0xA5, 0x8B, 0xCA, 0x83, 0xE1, 0x03, 0xF3, 0xA4, 0x89, 0x43, 0xF8, 0x8B, 0x4D, 0x00, 0x8B, 0x44,
	0x24, 0x14, 0x33, 0xD2, 0x40, 0x66, 0x8B, 0x51, 0x06, 0x83, 0xC3, 0x28, 0x3B, 0xC2, 0x89, 0x44,
	0x24, 0x14, 0x0F, 0x8C, 0x72, 0xFF, 0xFF, 0xFF, 0x8B, 0x5C, 0x24, 0x18, 0x8B, 0x44, 0x24, 0x10,
	0x8B, 0x4B, 0x34, 0x2B, 0xC1, 0x89, 0x44, 0x24, 0x7C, 0x74, 0x7F, 0x8D, 0x44, 0x24, 0x4C, 0x50,
	0xE8, 0x7C, 0x03, 0x00, 0x00, 0x8B, 0x45, 0x00, 0x8B, 0x7D, 0x04, 0x05, 0xA0, 0x00, 0x00, 0x00,
	0x89, 0x7C, 0x24, 0x1C, 0x8B, 0x48, 0x04, 0x85, 0xC9, 0x76, 0x5F, 0x8B, 0x08, 0x8B, 0x04, 0x39,
	0x03, 0xCF, 0x85, 0xC0, 0x76, 0x54, 0x8D, 0x1C, 0x38, 0x8B, 0x41, 0x04, 0x83, 0xE8, 0x08, 0x33,
	0xF6, 0xA9, 0xFE, 0xFF, 0xFF, 0xFF, 0x8D, 0x51, 0x08, 0x76, 0x36, 0x33, 0xC0, 0x66, 0x8B, 0x02,
	0x8B, 0xF8, 0x81, 0xE7, 0x00, 0xF0, 0xFF, 0xFF, 0x81, 0xFF, 0x00, 0x30, 0x00, 0x00, 0x75, 0x0D,
	0x8B, 0x7C, 0x24, 0x7C, 0x25, 0xFF, 0x0F, 0x00, 0x00, 0x03, 0xC3, 0x01, 0x38, 0x8B, 0x41, 0x04,
	0x46, 0x83, 0xE8, 0x08, 0x83, 0xC2, 0x02, 0xD1, 0xE8, 0x3B, 0xF0, 0x72, 0xCE, 0x8B, 0x7C, 0x24,
	0x1C, 0x03, 0x49, 0x04, 0x8B, 0x01, 0x85, 0xC0, 0x77, 0xAC, 0x8D, 0x4C, 0x24, 0x4C, 0x51, 0xE8,
	0xFD, 0x02, 0x00, 0x00, 0x8B, 0x45, 0x00, 0x8B, 0x5D, 0x04, 0x05, 0x80, 0x00, 0x00, 0x00, 0x89,
	0x5C, 0x24, 0x7C, 0x8B, 0x48, 0x04, 0x85, 0xC9, 0x0F, 0x86, 0xDB, 0x00, 0x00, 0x00, 0x8B, 0x30,
	0x6A, 0x14, 0x03, 0xF3, 0x56, 0x89, 0x74, 0x24, 0x1C, 0xFF, 0x54, 0x24, 0x64, 0x85, 0xC0, 0x0F,
	0x85, 0xC4, 0x00, 0x00, 0x00, 0xEB, 0x08, 0x8B, 0x74, 0x24, 0x14, 0x8B, 0x5C, 0x24, 0x7C, 0x8B,
	0x46, 0x0C, 0x85, 0xC0, 0x0F, 0x84, 0xAF, 0x00, 0x00, 0x00, 0x03, 0xC3, 0x50, 0xFF, 0x54, 0x24,
	0x54, 0x8B, 0xF8, 0x83, 0xFF, 0xFF, 0x0F, 0x84, 0xC5, 0x00, 0x00, 0x00, 0x8B, 0x55, 0x0C, 0x8B,
	0x4D, 0x08, 0x8D, 0x04, 0x95, 0x04, 0x00, 0x00, 0x00, 0x50, 0x51, 0x6A, 0x08, 0xFF, 0x54, 0x24,
	0x6C, 0x50, 0xFF, 0x94, 0x24, 0x84, 0x00, 0x00, 0x00, 0x85, 0xC0, 0x89, 0x45, 0x08, 0x0F, 0x84,
	0x9D, 0x00, 0x00, 0x00, 0x8B, 0x55, 0x0C, 0x89, 0x3C, 0x90, 0x8B, 0x55, 0x0C, 0x42, 0x89, 0x55,
	0x0C, 0x8B, 0x06, 0x85, 0xC0, 0x74, 0x0B, 0x8B, 0x76, 0x10, 0x03, 0xD8, 0x03, 0x74, 0x24, 0x7C,
	0xEB, 0x07, 0x8B, 0x46, 0x10, 0x03, 0xD8, 0x8B, 0xF3, 0x8B, 0x03, 0x85, 0xC0, 0x74, 0x30, 0xA9,
	0x00, 0x00, 0x00, 0x80, 0x74, 0x08, 0x25, 0xFF, 0xFF, 0x00, 0x00, 0x50, 0xEB, 0x09, 0x8B, 0x4C,
	0x24, 0x7C, 0x8D, 0x54, 0x08, 0x02, 0x52, 0x57, 0xFF, 0x54, 0x24, 0x70, 0x85, 0xC0, 0x89, 0x06,
	0x74, 0x4F, 0x8B, 0x43, 0x04, 0x83, 0xC3, 0x04, 0x83, 0xC6, 0x04, 0x85, 0xC0, 0x75, 0xD0, 0x8B,
	0x44, 0x24, 0x14, 0x6A, 0x14, 0x83, 0xC0, 0x14, 0x50, 0x89, 0x44, 0x24, 0x1C, 0xFF, 0x54, 0x24,
	0x64, 0x85, 0xC0, 0x0F, 0x84, 0x3E, 0xFF, 0xFF, 0xFF, 0x55, 0xE8, 0x52, 0x00, 0x00, 0x00, 0x8B,
	0x45, 0x00, 0x83, 0xC4, 0x04, 0x8B, 0x40, 0x28, 0x85, 0xC0, 0x74, 0x2E, 0x8B, 0x4C, 0x24, 0x10,
	0x03, 0xC1, 0x85, 0xC0, 0x74, 0x0B, 0x6A, 0x00, 0x6A, 0x01, 0x51, 0xFF, 0xD0, 0x85, 0xC0, 0x75,
	0x12, 0x55, 0xE8, 0x3A, 0x01, 0x00, 0x00, 0x5F, 0x5E, 0x5D, 0x33, 0xC0, 0x5B, 0x83, 0xC4, 0x68,
	0xC2, 0x04, 0x00, 0xC7, 0x45, 0x10, 0x01, 0x00, 0x00, 0x00, 0x5F, 0x8B, 0xC5, 0x5E, 0x5D, 0x5B,
	0x83, 0xC4, 0x68, 0xC2, 0x04, 0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
	0x90, 0x83, 0xEC, 0x50, 0x55, 0x8D, 0x44, 0x24, 0x28, 0x57, 0x50, 0xE8, 0xA1, 0x01, 0x00, 0x00,
	0x8B, 0x4C, 0x24, 0x5C, 0x33, 0xD2, 0x33, 0xED, 0xC7, 0x44, 0x24, 0x0C, 0x01, 0x00, 0x00, 0x00,
	0x8B, 0x39, 0xC7, 0x44, 0x24, 0x10, 0x08, 0x00, 0x00, 0x00, 0xC7, 0x44, 0x24, 0x14, 0x02, 0x00,
	0x00, 0x00, 0xC7, 0x44, 0x24, 0x18, 0x04, 0x00, 0x00, 0x00, 0x66, 0x8B, 0x57, 0x14, 0x66, 0x39,
	0x6F, 0x06, 0xC7, 0x44, 0x24, 0x1C, 0x10, 0x00, 0x00, 0x00, 0xC7, 0x44, 0x24, 0x20, 0x80, 0x00,
	0x00, 0x00, 0xC7, 0x44, 0x24, 0x24, 0x20, 0x00, 0x00, 0x00, 0xC7, 0x44, 0x24, 0x28, 0x40, 0x00,
	0x00, 0x00, 0x8D, 0x44, 0x3A, 0x18, 0x0F, 0x86, 0x93, 0x00, 0x00, 0x00, 0x53, 0x56, 0x8D, 0x58,
	0x24, 0x8B, 0x03, 0x8B, 0xC8, 0x8B, 0xD0, 0xC1, 0xE9, 0x1D, 0xC1, 0xEA, 0x1E, 0x8B, 0xF0, 0x83,
	0xE1, 0x01, 0x83, 0xE2, 0x01, 0xC1, 0xEE, 0x1F, 0xA9, 0x00, 0x00, 0x00, 0x02, 0x74, 0x13, 0x8B,
	0x43, 0xEC, 0x8B, 0x4B, 0xE4, 0x68, 0x00, 0x40, 0x00, 0x00, 0x50, 0x51, 0xFF, 0x54, 0x24, 0x4C,
	0xEB, 0x43, 0x8D, 0x14, 0x4A, 0xA9, 0x00, 0x00, 0x00, 0x04, 0x8D, 0x0C, 0x56, 0x8B, 0x74, 0x8C,
	0x14, 0x74, 0x06, 0x81, 0xCE, 0x00, 0x02, 0x00, 0x00, 0x8B, 0x53, 0xEC, 0x8B, 0xCA, 0x85, 0xC9,
	0x75, 0x12, 0xA8, 0x40, 0x74, 0x05, 0x8B, 0x4F, 0x20, 0xEB, 0x07, 0xA8, 0x80, 0x74, 0x16, 0x8B,
	0x4F, 0x24, 0x85, 0xC9, 0x76, 0x0F, 0x8B, 0x4B, 0xE4, 0x8D, 0x44, 0x24, 0x10, 0x50, 0x56, 0x52,
	0x51, 0xFF, 0x54, 0x24, 0x44, 0x8B, 0x54, 0x24, 0x64, 0x33, 0xC0, 0x45, 0x83, 0xC3, 0x28, 0x8B,
	0x3A, 0x66, 0x8B, 0x47, 0x06, 0x3B, 0xE8, 0x0F, 0x8C, 0x74, 0xFF, 0xFF, 0xFF, 0x5E, 0x5B, 0x5F,
	0x5D, 0x83, 0xC4, 0x50, 0xC3, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
	0x90, 0x83, 0xEC, 0x2C, 0x8D, 0x44, 0x24, 0x00, 0x56, 0x50, 0xE8, 0x92, 0x00, 0x00, 0x00, 0x8B,
	0x74, 0x24, 0x34, 0x85, 0xF6, 0x74, 0x77, 0x8B, 0x46, 0x10, 0x85, 0xC0, 0x74, 0x18, 0x8B, 0x0E,
	0x8B, 0x46, 0x04, 0x6A, 0x00, 0x6A, 0x00, 0x8B, 0x51, 0x28, 0x50, 0x03, 0xD0, 0xFF, 0xD2, 0xC7,
	0x46, 0x10, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x46, 0x08, 0x85, 0xC0, 0x74, 0x32, 0x8B, 0x46, 0x0C,
	0x57, 0x33, 0xFF, 0x85, 0xC0, 0x7E, 0x18, 0x8B, 0x46, 0x08, 0x8B, 0x04, 0xB8, 0x83, 0xF8, 0xFF,
	0x74, 0x05, 0x50, 0xFF, 0x54, 0x24, 0x24, 0x8B, 0x46, 0x0C, 0x47, 0x3B, 0xF8, 0x7C, 0xE8, 0x8B,
	0x4E, 0x08, 0x51, 0x6A, 0x00, 0xFF, 0x54, 0x24, 0x24, 0x50, 0xFF, 0x54, 0x24, 0x34, 0x5F, 0x8B,
	0x46, 0x04, 0x85, 0xC0, 0x74, 0x0C, 0x68, 0x00, 0x80, 0x00, 0x00, 0x6A, 0x00, 0x50, 0xFF, 0x54,
	0x24, 0x1C, 0x56, 0x6A, 0x00, 0xFF, 0x54, 0x24, 0x20, 0x50, 0xFF, 0x54, 0x24, 0x30, 0x5E, 0x83,
	0xC4, 0x2C, 0xC2, 0x04, 0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
	0x90, 0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x94, 0x00, 0x00, 0x00, 0x53, 0x56, 0x57, 0x53, 0x51, 0x52,
	0x56, 0x33, 0xC9, 0x64, 0x8B, 0x71, 0x30, 0x8B, 0x76, 0x0C, 0x8B, 0x76, 0x1C, 0x8B, 0x46, 0x08,
	0x8B, 0x7E, 0x20, 0x8B, 0x36, 0x38, 0x4F, 0x18, 0x75, 0xF3, 0x90, 0x90, 0x89, 0x85, 0x6C, 0xFF,
	0xFF, 0xFF, 0x55, 0x8B, 0xE8, 0x8B, 0x45, 0x3C, 0x8B, 0x54, 0x05, 0x78, 0x03, 0xD5, 0x8B, 0x4A,
	0x18, 0x8B, 0x5A, 0x20, 0x03, 0xDD, 0x49, 0x8B, 0x34, 0x8B, 0x03, 0xF5, 0xB8, 0x47, 0x65, 0x74,
	0x50, 0x39, 0x06, 0x75, 0xF1, 0xB8, 0x72, 0x6F, 0x63, 0x41, 0x39, 0x46, 0x04, 0x75, 0xE7, 0x8B,
	0x5A, 0x24, 0x03, 0xDD, 0x66, 0x8B, 0x0C, 0x4B, 0x8B, 0x5A, 0x1C, 0x03, 0xDD, 0x8B, 0x04, 0x8B,
	0x03, 0xC5, 0x5D, 0x5E, 0x5A, 0x59, 0x5B, 0x89, 0x85, 0x70, 0xFF, 0xFF, 0xFF, 0xB1, 0x72, 0xB2,
	0x61, 0xB0, 0x65, 0x32, 0xDB, 0xC6, 0x85, 0x74, 0xFF, 0xFF, 0xFF, 0x56, 0xC6, 0x85, 0x75, 0xFF,
	0xFF, 0xFF, 0x69, 0x88, 0x8D, 0x76, 0xFF, 0xFF, 0xFF, 0xC6, 0x85, 0x77, 0xFF, 0xFF, 0xFF, 0x74,
	0xC6, 0x85, 0x78, 0xFF, 0xFF, 0xFF, 0x75, 0x88, 0x95, 0x79, 0xFF, 0xFF, 0xFF, 0xC6, 0x85, 0x7A,
	0xFF, 0xFF, 0xFF, 0x6C, 0xC6, 0x85, 0x7B, 0xFF, 0xFF, 0xFF, 0x50, 0x88, 0x8D, 0x7C, 0xFF, 0xFF,
	0xFF, 0xC6, 0x85, 0x7D, 0xFF, 0xFF, 0xFF, 0x6F, 0xC6, 0x85, 0x7E, 0xFF, 0xFF, 0xFF, 0x74, 0x88,
	0x85, 0x7F, 0xFF, 0xFF, 0xFF, 0xC6, 0x45, 0x80, 0x63, 0xC6, 0x45, 0x81, 0x74, 0x88, 0x5D, 0x82,
	0xC6, 0x45, 0xB4, 0x4C, 0xC6, 0x45, 0xB5, 0x6F, 0x88, 0x55, 0xB6, 0xC6, 0x45, 0xB7, 0x64, 0xC6,
	0x45, 0xB8, 0x4C, 0xC6, 0x45, 0xB9, 0x69, 0xC6, 0x45, 0xBA, 0x62, 0x88, 0x4D, 0xBB, 0x88, 0x55,
	0xBC, 0x88, 0x4D, 0xBD, 0xC6, 0x45, 0xBE, 0x79, 0xC6, 0x45, 0xBF, 0x41, 0x88, 0x5D, 0xC0, 0xC6,
	0x45, 0xA4, 0x56, 0xC6, 0x45, 0xA5, 0x69, 0x88, 0x4D, 0xA6, 0xC6, 0x45, 0xA7, 0x74, 0xC6, 0x45,
	0xA8, 0x75, 0x88, 0x55, 0xA9, 0xC6, 0x45, 0xAA, 0x6C, 0xC6, 0x45, 0xAB, 0x41, 0xC6, 0x45, 0xAC,
	0x6C, 0xC6, 0x45, 0xAD, 0x6C, 0xC6, 0x45, 0xAE, 0x6F, 0xC6, 0x45, 0xAF, 0x63, 0x88, 0x5D, 0xB0,
	0xC6, 0x45, 0xC4, 0x56, 0xC6, 0x45, 0xC5, 0x69, 0x88, 0x4D, 0xC6, 0xC6, 0x45, 0xC7, 0x74, 0xC6,
	0x45, 0xC8, 0x75, 0x88, 0x55, 0xC9, 0xC6, 0x45, 0xCA, 0x6C, 0xC6, 0x45, 0xCB, 0x46, 0x88, 0x4D,
	0xCC, 0x88, 0x45, 0xCD, 0x88, 0x45, 0xCE, 0x88, 0x5D, 0xCF, 0xC6, 0x45, 0x94, 0x49, 0xC6, 0x45,
	0x95, 0x73, 0xC6, 0x45, 0x96, 0x42, 0x88, 0x55, 0x97, 0xC6, 0x45, 0x98, 0x64, 0xC6, 0x45, 0x99,
	0x52, 0x88, 0x45, 0x9A, 0x88, 0x55, 0x9B, 0xC6, 0x45, 0x9C, 0x64, 0xC6, 0x45, 0x9D, 0x50, 0xC6,
	0x45, 0x9E, 0x74, 0x88, 0x4D, 0x9F, 0x88, 0x5D, 0xA0, 0xC6, 0x45, 0x84, 0x47, 0x88, 0x45, 0x85,
	0xC6, 0x45, 0x86, 0x74, 0xC6, 0x45, 0x87, 0x50, 0x88, 0x4D, 0x88, 0xC6, 0x45, 0x89, 0x6F, 0xC6,
	0x45, 0x8A, 0x63, 0x8B, 0xB5, 0x70, 0xFF, 0xFF, 0xFF, 0x88, 0x45, 0x8B, 0x88, 0x45, 0x8F, 0x88,
	0x45, 0xDE, 0x88, 0x45, 0xDF, 0x88, 0x45, 0xF5, 0x88, 0x45, 0xFA, 0x88, 0x45, 0xFB, 0x88, 0x45,
	0xE9, 0x88, 0x45, 0xD1, 0x88, 0x45, 0xD5, 0x88, 0x5D, 0x92, 0x88, 0x5D, 0xE7, 0x88, 0x5D, 0xFC,
	0x88, 0x5D, 0xF1, 0x88, 0x5D, 0xDB, 0x8B, 0x9D, 0x6C, 0xFF, 0xFF, 0xFF, 0x8D, 0x85, 0x74, 0xFF,
	0xFF, 0xFF, 0x50, 0x53, 0xC6, 0x45, 0x8C, 0x73, 0xC6, 0x45, 0x8D, 0x73, 0xC6, 0x45, 0x8E, 0x48,
	0x88, 0x55, 0x90, 0xC6, 0x45, 0x91, 0x70, 0xC6, 0x45, 0xDC, 0x46, 0x88, 0x4D, 0xDD, 0xC6, 0x45,
	0xE0, 0x4C, 0xC6, 0x45, 0xE1, 0x69, 0xC6, 0x45, 0xE2, 0x62, 0x88, 0x4D, 0xE3, 0x88, 0x55, 0xE4,
	0x88, 0x4D, 0xE5, 0xC6, 0x45, 0xE6, 0x79, 0xC6, 0x45, 0xF4, 0x48, 0x88, 0x55, 0xF6, 0xC6, 0x45,
	0xF7, 0x70, 0xC6, 0x45, 0xF8, 0x46, 0x88, 0x4D, 0xF9, 0xC6, 0x45, 0xE8, 0x48, 0x88, 0x55, 0xEA,
	0xC6, 0x45, 0xEB, 0x70, 0xC6, 0x45, 0xEC, 0x41, 0xC6, 0x45, 0xED, 0x6C, 0xC6, 0x45, 0xEE, 0x6C,
	0xC6, 0x45, 0xEF, 0x6F, 0xC6, 0x45, 0xF0, 0x63, 0xC6, 0x45, 0xD0, 0x48, 0x88, 0x55, 0xD2, 0xC6,
	0x45, 0xD3, 0x70, 0xC6, 0x45, 0xD4, 0x52, 0xC6, 0x45, 0xD6, 0x41, 0xC6, 0x45, 0xD7, 0x6C, 0xC6,
	0x45, 0xD8, 0x6C, 0xC6, 0x45, 0xD9, 0x6F, 0xC6, 0x45, 0xDA, 0x63, 0xFF, 0xD6, 0x8B, 0x7D, 0x08,
	0x8D, 0x4D, 0xB4, 0x51, 0x53, 0x89, 0x07, 0xFF, 0xD6, 0x8D, 0x55, 0xA4, 0x89, 0x47, 0x04, 0x52,
	0x53, 0xFF, 0xD6, 0x89, 0x47, 0x08, 0x8D, 0x45, 0xC4, 0x50, 0x53, 0xFF, 0xD6, 0x8D, 0x4D, 0x94,
	0x89, 0x47, 0x0C, 0x51, 0x53, 0xFF, 0xD6, 0x8D, 0x55, 0x84, 0x89, 0x47, 0x10, 0x52, 0x53, 0xFF,
	0xD6, 0x89, 0x47, 0x14, 0x8D, 0x45, 0xDC, 0x50, 0x53, 0xFF, 0xD6, 0x8D, 0x4D, 0xF4, 0x89, 0x47,
	0x18, 0x51, 0x53, 0x89, 0x77, 0x1C, 0xFF, 0xD6, 0x8D, 0x55, 0xE8, 0x89, 0x47, 0x20, 0x52, 0x53,
	0xFF, 0xD6, 0x89, 0x47, 0x24, 0x8D, 0x45, 0xD0, 0x50, 0x53, 0xFF, 0xD6, 0x89, 0x47, 0x28, 0x5F,
	0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0x89, 0x45, 0x0C, 0xC9, 0xC2, 0x04, 0x00, 0x55,
	0x8B, 0xEC, 0x8B, 0x45, 0x0C, 0x50, 0xFF, 0x75, 0x08, 0xE8, 0x05, 0x00, 0x00, 0x00, 0xE9, 0xFA,
	0x00, 0x00, 0x00, 0x8B, 0x44, 0x24, 0x04, 0x83, 0xEC, 0x10, 0x53, 0x55, 0x8B, 0x68, 0x04, 0x8B,
	0x00, 0x83, 0xC0, 0x78, 0x56, 0x57, 0x8B, 0x48, 0x04, 0x85, 0xC9, 0x0F, 0x84, 0xA8, 0x00, 0x00,
	0x00, 0x8B, 0x18, 0x03, 0xDD, 0x89, 0x5C, 0x24, 0x10, 0x8B, 0x4B, 0x18, 0x85, 0xC9, 0x89, 0x4C,
	0x24, 0x1C, 0x0F, 0x84, 0x91, 0x00, 0x00, 0x00, 0x8B, 0x43, 0x14, 0x85, 0xC0, 0x0F, 0x84, 0x86,
	0x00, 0x00, 0x00, 0x8B, 0x7B, 0x20, 0x8B, 0x43, 0x24, 0x03, 0xFD, 0x03, 0xC5, 0x85, 0xC9, 0x89,
	0x44, 0x24, 0x24, 0xC7, 0x44, 0x24, 0x14, 0x00, 0x00, 0x00, 0x00, 0x76, 0x6C, 0x8B, 0x4C, 0x24,
	0x28, 0x33, 0xC0, 0x8A, 0x01, 0x89, 0x44, 0x24, 0x18, 0x8B, 0x17, 0x8B, 0x44, 0x24, 0x18, 0x8D,
	0x0C, 0x2A, 0x8A, 0x14, 0x2A, 0x8B, 0xF2, 0x81, 0xE6, 0xFF, 0x00, 0x00, 0x00, 0x2B, 0xC6, 0x75,
	0x29, 0x8B, 0x74, 0x24, 0x28, 0x2B, 0xF1, 0x84, 0xD2, 0x74, 0x1B, 0x8A, 0x51, 0x01, 0x41, 0x33,
	0xC0, 0x8B, 0xDA, 0x8A, 0x04, 0x0E, 0x81, 0xE3, 0xFF, 0x00, 0x00, 0x00, 0x2B, 0xC3, 0x8B, 0x5C,
	0x24, 0x10, 0x74, 0xE3, 0xEB, 0x04, 0x85, 0xC0, 0x74, 0x2B, 0x8B, 0x44, 0x24, 0x14, 0x8B, 0x54,
	0x24, 0x24, 0x8B, 0x4C, 0x24, 0x1C, 0x40, 0x83, 0xC7, 0x04, 0x83, 0xC2, 0x02, 0x3B, 0xC1, 0x89,
	0x44, 0x24, 0x14, 0x89, 0x54, 0x24, 0x24, 0x72, 0xA0, 0x5F, 0x5E, 0x5D, 0x33, 0xC0, 0x5B, 0x83,
	0xC4, 0x10, 0xC2, 0x08, 0x00, 0x8B, 0x4C, 0x24, 0x24, 0x33, 0xC0, 0x66, 0x8B, 0x01, 0x83, 0xF8,
	0xFF, 0x74, 0xE6, 0x3B, 0x43, 0x14, 0x77, 0xE1, 0x8B, 0x53, 0x1C, 0x5F, 0x5E, 0x8D, 0x04, 0x82,
	0x8B, 0x04, 0x28, 0x03, 0xC5, 0x5D, 0x5B, 0x83, 0xC4, 0x10, 0xC2, 0x08, 0x00, 0x89, 0x45, 0x10,
	0xC9, 0xC2, 0x08, 0x00, 0x55, 0x8B, 0xEC, 0xFF, 0x75, 0x08, 0xE8, 0x05, 0x00, 0x00, 0x00, 0xE9,
	0x87, 0x03, 0x00, 0x00, 0x83, 0xEC, 0x2C, 0x8D, 0x44, 0x24, 0x00, 0x56, 0x50, 0xE8, 0x92, 0x00,
	0x00, 0x00, 0x8B, 0x74, 0x24, 0x34, 0x85, 0xF6, 0x74, 0x77, 0x8B, 0x46, 0x10, 0x85, 0xC0, 0x74,
	0x18, 0x8B, 0x0E, 0x8B, 0x46, 0x04, 0x6A, 0x00, 0x6A, 0x00, 0x8B, 0x51, 0x28, 0x50, 0x03, 0xD0,
	0xFF, 0xD2, 0xC7, 0x46, 0x10, 0x00, 0x00, 0x00, 0x00, 0x8B, 0x46, 0x08, 0x85, 0xC0, 0x74, 0x32,
	0x8B, 0x46, 0x0C, 0x57, 0x33, 0xFF, 0x85, 0xC0, 0x7E, 0x18, 0x8B, 0x46, 0x08, 0x8B, 0x04, 0xB8,
	0x83, 0xF8, 0xFF, 0x74, 0x05, 0x50, 0xFF, 0x54, 0x24, 0x24, 0x8B, 0x46, 0x0C, 0x47, 0x3B, 0xF8,
	0x7C, 0xE8, 0x8B, 0x4E, 0x08, 0x51, 0x6A, 0x00, 0xFF, 0x54, 0x24, 0x24, 0x50, 0xFF, 0x54, 0x24,
	0x34, 0x5F, 0x8B, 0x46, 0x04, 0x85, 0xC0, 0x74, 0x0C, 0x68, 0x00, 0x80, 0x00, 0x00, 0x6A, 0x00,
	0x50, 0xFF, 0x54, 0x24, 0x1C, 0x56, 0x6A, 0x00, 0xFF, 0x54, 0x24, 0x20, 0x50, 0xFF, 0x54, 0x24,
	0x30, 0x5E, 0x83, 0xC4, 0x2C, 0xC2, 0x04, 0x00, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
	0x90, 0x90, 0x90, 0x90, 0x55, 0x8B, 0xEC, 0x81, 0xEC, 0x94, 0x00, 0x00, 0x00, 0x53, 0x56, 0x57,
	0x53, 0x51, 0x52, 0x56, 0x33, 0xC9, 0x64, 0x8B, 0x71, 0x30, 0x8B, 0x76, 0x0C, 0x8B, 0x76, 0x1C,
	0x8B, 0x46, 0x08, 0x8B, 0x7E, 0x20, 0x8B, 0x36, 0x38, 0x4F, 0x18, 0x75, 0xF3, 0x90, 0x90, 0x89,
	0x85, 0x6C, 0xFF, 0xFF, 0xFF, 0x55, 0x8B, 0xE8, 0x8B, 0x45, 0x3C, 0x8B, 0x54, 0x05, 0x78, 0x03,
	0xD5, 0x8B, 0x4A, 0x18, 0x8B, 0x5A, 0x20, 0x03, 0xDD, 0x49, 0x8B, 0x34, 0x8B, 0x03, 0xF5, 0xB8,
	0x47, 0x65, 0x74, 0x50, 0x39, 0x06, 0x75, 0xF1, 0xB8, 0x72, 0x6F, 0x63, 0x41, 0x39, 0x46, 0x04,
	0x75, 0xE7, 0x8B, 0x5A, 0x24, 0x03, 0xDD, 0x66, 0x8B, 0x0C, 0x4B, 0x8B, 0x5A, 0x1C, 0x03, 0xDD,
	0x8B, 0x04, 0x8B, 0x03, 0xC5, 0x5D, 0x5E, 0x5A, 0x59, 0x5B, 0x89, 0x85, 0x70, 0xFF, 0xFF, 0xFF,
	0xB1, 0x72, 0xB2, 0x61, 0xB0, 0x65, 0x32, 0xDB, 0xC6, 0x85, 0x74, 0xFF, 0xFF, 0xFF, 0x56, 0xC6,
	0x85, 0x75, 0xFF, 0xFF, 0xFF, 0x69, 0x88, 0x8D, 0x76, 0xFF, 0xFF, 0xFF, 0xC6, 0x85, 0x77, 0xFF,
	0xFF, 0xFF, 0x74, 0xC6, 0x85, 0x78, 0xFF, 0xFF, 0xFF, 0x75, 0x88, 0x95, 0x79, 0xFF, 0xFF, 0xFF,
	0xC6, 0x85, 0x7A, 0xFF, 0xFF, 0xFF, 0x6C, 0xC6, 0x85, 0x7B, 0xFF, 0xFF, 0xFF, 0x50, 0x88, 0x8D,
	0x7C, 0xFF, 0xFF, 0xFF, 0xC6, 0x85, 0x7D, 0xFF, 0xFF, 0xFF, 0x6F, 0xC6, 0x85, 0x7E, 0xFF, 0xFF,
	0xFF, 0x74, 0x88, 0x85, 0x7F, 0xFF, 0xFF, 0xFF, 0xC6, 0x45, 0x80, 0x63, 0xC6, 0x45, 0x81, 0x74,
	0x88, 0x5D, 0x82, 0xC6, 0x45, 0xB4, 0x4C, 0xC6, 0x45, 0xB5, 0x6F, 0x88, 0x55, 0xB6, 0xC6, 0x45,
	0xB7, 0x64, 0xC6, 0x45, 0xB8, 0x4C, 0xC6, 0x45, 0xB9, 0x69, 0xC6, 0x45, 0xBA, 0x62, 0x88, 0x4D,
	0xBB, 0x88, 0x55, 0xBC, 0x88, 0x4D, 0xBD, 0xC6, 0x45, 0xBE, 0x79, 0xC6, 0x45, 0xBF, 0x41, 0x88,
	0x5D, 0xC0, 0xC6, 0x45, 0xA4, 0x56, 0xC6, 0x45, 0xA5, 0x69, 0x88, 0x4D, 0xA6, 0xC6, 0x45, 0xA7,
	0x74, 0xC6, 0x45, 0xA8, 0x75, 0x88, 0x55, 0xA9, 0xC6, 0x45, 0xAA, 0x6C, 0xC6, 0x45, 0xAB, 0x41,
	0xC6, 0x45, 0xAC, 0x6C, 0xC6, 0x45, 0xAD, 0x6C, 0xC6, 0x45, 0xAE, 0x6F, 0xC6, 0x45, 0xAF, 0x63,
	0x88, 0x5D, 0xB0, 0xC6, 0x45, 0xC4, 0x56, 0xC6, 0x45, 0xC5, 0x69, 0x88, 0x4D, 0xC6, 0xC6, 0x45,
	0xC7, 0x74, 0xC6, 0x45, 0xC8, 0x75, 0x88, 0x55, 0xC9, 0xC6, 0x45, 0xCA, 0x6C, 0xC6, 0x45, 0xCB,
	0x46, 0x88, 0x4D, 0xCC, 0x88, 0x45, 0xCD, 0x88, 0x45, 0xCE, 0x88, 0x5D, 0xCF, 0xC6, 0x45, 0x94,
	0x49, 0xC6, 0x45, 0x95, 0x73, 0xC6, 0x45, 0x96, 0x42, 0x88, 0x55, 0x97, 0xC6, 0x45, 0x98, 0x64,
	0xC6, 0x45, 0x99, 0x52, 0x88, 0x45, 0x9A, 0x88, 0x55, 0x9B, 0xC6, 0x45, 0x9C, 0x64, 0xC6, 0x45,
	0x9D, 0x50, 0xC6, 0x45, 0x9E, 0x74, 0x88, 0x4D, 0x9F, 0x88, 0x5D, 0xA0, 0xC6, 0x45, 0x84, 0x47,
	0x88, 0x45, 0x85, 0xC6, 0x45, 0x86, 0x74, 0xC6, 0x45, 0x87, 0x50, 0x88, 0x4D, 0x88, 0xC6, 0x45,
	0x89, 0x6F, 0xC6, 0x45, 0x8A, 0x63, 0x8B, 0xB5, 0x70, 0xFF, 0xFF, 0xFF, 0x88, 0x45, 0x8B, 0x88,
	0x45, 0x8F, 0x88, 0x45, 0xDE, 0x88, 0x45, 0xDF, 0x88, 0x45, 0xF5, 0x88, 0x45, 0xFA, 0x88, 0x45,
	0xFB, 0x88, 0x45, 0xE9, 0x88, 0x45, 0xD1, 0x88, 0x45, 0xD5, 0x88, 0x5D, 0x92, 0x88, 0x5D, 0xE7,
	0x88, 0x5D, 0xFC, 0x88, 0x5D, 0xF1, 0x88, 0x5D, 0xDB, 0x8B, 0x9D, 0x6C, 0xFF, 0xFF, 0xFF, 0x8D,
	0x85, 0x74, 0xFF, 0xFF, 0xFF, 0x50, 0x53, 0xC6, 0x45, 0x8C, 0x73, 0xC6, 0x45, 0x8D, 0x73, 0xC6,
	0x45, 0x8E, 0x48, 0x88, 0x55, 0x90, 0xC6, 0x45, 0x91, 0x70, 0xC6, 0x45, 0xDC, 0x46, 0x88, 0x4D,
	0xDD, 0xC6, 0x45, 0xE0, 0x4C, 0xC6, 0x45, 0xE1, 0x69, 0xC6, 0x45, 0xE2, 0x62, 0x88, 0x4D, 0xE3,
	0x88, 0x55, 0xE4, 0x88, 0x4D, 0xE5, 0xC6, 0x45, 0xE6, 0x79, 0xC6, 0x45, 0xF4, 0x48, 0x88, 0x55,
	0xF6, 0xC6, 0x45, 0xF7, 0x70, 0xC6, 0x45, 0xF8, 0x46, 0x88, 0x4D, 0xF9, 0xC6, 0x45, 0xE8, 0x48,
	0x88, 0x55, 0xEA, 0xC6, 0x45, 0xEB, 0x70, 0xC6, 0x45, 0xEC, 0x41, 0xC6, 0x45, 0xED, 0x6C, 0xC6,
	0x45, 0xEE, 0x6C, 0xC6, 0x45, 0xEF, 0x6F, 0xC6, 0x45, 0xF0, 0x63, 0xC6, 0x45, 0xD0, 0x48, 0x88,
	0x55, 0xD2, 0xC6, 0x45, 0xD3, 0x70, 0xC6, 0x45, 0xD4, 0x52, 0xC6, 0x45, 0xD6, 0x41, 0xC6, 0x45,
	0xD7, 0x6C, 0xC6, 0x45, 0xD8, 0x6C, 0xC6, 0x45, 0xD9, 0x6F, 0xC6, 0x45, 0xDA, 0x63, 0xFF, 0xD6,
	0x8B, 0x7D, 0x08, 0x8D, 0x4D, 0xB4, 0x51, 0x53, 0x89, 0x07, 0xFF, 0xD6, 0x8D, 0x55, 0xA4, 0x89,
	0x47, 0x04, 0x52, 0x53, 0xFF, 0xD6, 0x89, 0x47, 0x08, 0x8D, 0x45, 0xC4, 0x50, 0x53, 0xFF, 0xD6,
	0x8D, 0x4D, 0x94, 0x89, 0x47, 0x0C, 0x51, 0x53, 0xFF, 0xD6, 0x8D, 0x55, 0x84, 0x89, 0x47, 0x10,
	0x52, 0x53, 0xFF, 0xD6, 0x89, 0x47, 0x14, 0x8D, 0x45, 0xDC, 0x50, 0x53, 0xFF, 0xD6, 0x8D, 0x4D,
	0xF4, 0x89, 0x47, 0x18, 0x51, 0x53, 0x89, 0x77, 0x1C, 0xFF, 0xD6, 0x8D, 0x55, 0xE8, 0x89, 0x47,
	0x20, 0x52, 0x53, 0xFF, 0xD6, 0x89, 0x47, 0x24, 0x8D, 0x45, 0xD0, 0x50, 0x53, 0xFF, 0xD6, 0x89,
	0x47, 0x28, 0x5F, 0x5E,0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x04, 0x00, 0xC9, 0xC2, 0x04, 0x00
};