
#define TEST_NAME "vrf"
#include "cmptest.h"

typedef struct TestData_ {
	const unsigned char seed[crypto_vrf_SEEDBYTES];
	const unsigned char pk[crypto_vrf_PUBLICKEYBYTES];
	const unsigned char proof[crypto_vrf_PROOFBYTES];
	const unsigned char output[crypto_vrf_OUTPUTBYTES];
	const char *msg;
} TestData;

static const TestData test_data[] = {
{{0x9d,0x61,0xb1,0x9d,0xef,0xfd,0x5a,0x60,0xba,0x84,0x4a,0xf4,0x92,0xec,0x2c,0xc4,0x44,0x49,0xc5,0x69,0x7b,0x32,0x69,0x19,0x70,0x3b,0xac,0x03,0x1c,0xae,0x7f,0x60},{0xd7,0x5a,0x98,0x01,0x82,0xb1,0x0a,0xb7,0xd5,0x4b,0xfe,0xd3,0xc9,0x64,0x07,0x3a,0x0e,0xe1,0x72,0xf3,0xda,0xa6,0x23,0x25,0xaf,0x02,0x1a,0x68,0xf7,0x07,0x51,0x1a},{0xb6,0xb4,0x69,0x9f,0x87,0xd5,0x61,0x26,0xc9,0x11,0x7a,0x7d,0xa5,0x5b,0xd0,0x08,0x52,0x46,0xf4,0xc5,0x6d,0xbc,0x95,0xd2,0x01,0x72,0x61,0x2e,0x9d,0x38,0xe8,0xd7,0xca,0x65,0xe5,0x73,0xa1,0x26,0xed,0x88,0xd4,0xe3,0x0a,0x46,0xf8,0x0a,0x66,0x68,0x54,0xd6,0x75,0xcf,0x3b,0xa8,0x1d,0xe0,0xde,0x04,0x3c,0x37,0x74,0xf0,0x61,0x56,0x0f,0x55,0xed,0xc2,0x56,0xa7,0x87,0xaf,0xe7,0x01,0x67,0x7c,0x0f,0x60,0x29,0x00},{0x5b,0x49,0xb5,0x54,0xd0,0x5c,0x0c,0xd5,0xa5,0x32,0x53,0x76,0xb3,0x38,0x7d,0xe5,0x9d,0x92,0x4f,0xd1,0xe1,0x3d,0xed,0x44,0x64,0x8a,0xb3,0x3c,0x21,0x34,0x9a,0x60,0x3f,0x25,0xb8,0x4e,0xc5,0xed,0x88,0x79,0x95,0xb3,0x3d,0xa5,0xe3,0xbf,0xcb,0x87,0xcd,0x2f,0x64,0x52,0x1c,0x4c,0x62,0xcf,0x82,0x5c,0xff,0xab,0xbe,0x5d,0x31,0xcc},""},
{{0x4c,0xcd,0x08,0x9b,0x28,0xff,0x96,0xda,0x9d,0xb6,0xc3,0x46,0xec,0x11,0x4e,0x0f,0x5b,0x8a,0x31,0x9f,0x35,0xab,0xa6,0x24,0xda,0x8c,0xf6,0xed,0x4f,0xb8,0xa6,0xfb},{0x3d,0x40,0x17,0xc3,0xe8,0x43,0x89,0x5a,0x92,0xb7,0x0a,0xa7,0x4d,0x1b,0x7e,0xbc,0x9c,0x98,0x2c,0xcf,0x2e,0xc4,0x96,0x8c,0xc0,0xcd,0x55,0xf1,0x2a,0xf4,0x66,0x0c},{0xae,0x5b,0x66,0xbd,0xf0,0x4b,0x4c,0x01,0x0b,0xfe,0x32,0xb2,0xfc,0x12,0x6e,0xad,0x21,0x07,0xb6,0x97,0x63,0x4f,0x6f,0x73,0x37,0xb9,0xbf,0xf8,0x78,0x5e,0xe1,0x11,0x20,0x00,0x95,0xec,0xe8,0x7d,0xde,0x4d,0xbe,0x87,0x34,0x3f,0x6d,0xf3,0xb1,0x07,0xd9,0x17,0x98,0xc8,0xa7,0xeb,0x12,0x45,0xd3,0xbb,0x9c,0x5a,0xaf,0xb0,0x93,0x35,0x8c,0x13,0xe6,0xae,0x11,0x11,0xa5,0x57,0x17,0xe8,0x95,0xfd,0x15,0xf9,0x9f,0x07},{0x94,0xf4,0x48,0x7e,0x1b,0x2f,0xec,0x95,0x43,0x09,0xef,0x12,0x89,0xec,0xb2,0xe1,0x50,0x43,0xa2,0x46,0x1e,0xcc,0x7b,0x2a,0xe7,0xd4,0x47,0x06,0x07,0xef,0x82,0xeb,0x1c,0xfa,0x97,0xd8,0x49,0x91,0xfe,0x4a,0x7b,0xfd,0xfd,0x71,0x56,0x06,0xbc,0x27,0xe2,0x96,0x7a,0x6c,0x55,0x7c,0xfb,0x58,0x75,0x87,0x9b,0x67,0x17,0x40,0xb7,0xd8},"\x72"},
{{0xc5,0xaa,0x8d,0xf4,0x3f,0x9f,0x83,0x7b,0xed,0xb7,0x44,0x2f,0x31,0xdc,0xb7,0xb1,0x66,0xd3,0x85,0x35,0x07,0x6f,0x09,0x4b,0x85,0xce,0x3a,0x2e,0x0b,0x44,0x58,0xf7},{0xfc,0x51,0xcd,0x8e,0x62,0x18,0xa1,0xa3,0x8d,0xa4,0x7e,0xd0,0x02,0x30,0xf0,0x58,0x08,0x16,0xed,0x13,0xba,0x33,0x03,0xac,0x5d,0xeb,0x91,0x15,0x48,0x90,0x80,0x25},{0xdf,0xa2,0xcb,0xa3,0x4b,0x61,0x1c,0xc8,0xc8,0x33,0xa6,0xea,0x83,0xb8,0xeb,0x1b,0xb5,0xe2,0xef,0x2d,0xd1,0xb0,0xc4,0x81,0xbc,0x42,0xff,0x36,0xae,0x78,0x47,0xf6,0xab,0x52,0xb9,0x76,0xcf,0xd5,0xde,0xf1,0x72,0xfa,0x41,0x2d,0xef,0xde,0x27,0x0c,0x8b,0x8b,0xdf,0xba,0xae,0x1c,0x7e,0xce,0x17,0xd9,0x83,0x3b,0x1b,0xcf,0x31,0x06,0x4f,0xff,0x78,0xef,0x49,0x3f,0x82,0x00,0x55,0xb5,0x61,0xec,0xe4,0x5e,0x10,0x09},{0x20,0x31,0x83,0x7f,0x58,0x2c,0xd1,0x7a,0x9a,0xf9,0xe0,0xc7,0xef,0x5a,0x65,0x40,0xe3,0x45,0x3e,0xd8,0x94,0xb6,0x2c,0x29,0x36,0x86,0xca,0x3c,0x1e,0x31,0x9d,0xde,0x9d,0x0a,0xa4,0x89,0xa4,0xb5,0x9a,0x95,0x94,0xfc,0x23,0x28,0xbc,0x3d,0xef,0xf3,0xc8,0xa0,0x92,0x9a,0x36,0x9a,0x72,0xb1,0x18,0x0a,0x59,0x6e,0x01,0x6b,0x5d,0xed},"\xaf\x82"},
{{0x20,0x72,0xdb,0xe3,0x66,0x36,0xcc,0xcd,0xd9,0x10,0x36,0x92,0x4c,0x2b,0x88,0x09,0xce,0x49,0x8f,0xb4,0x4b,0x0f,0x49,0xe5,0x89,0x3d,0x43,0xcd,0xd3,0xab,0xef,0x5c},{0x8b,0xdd,0xc9,0x2d,0xa9,0x2c,0x0c,0xde,0xc1,0x31,0x43,0xa6,0x27,0x0e,0xc9,0xd4,0x03,0x04,0x0c,0xdd,0x45,0x94,0xa4,0x01,0x0c,0x48,0xfd,0xd0,0xcf,0xdc,0x12,0x59},{0xee,0xc4,0x0e,0x8c,0xfa,0x4e,0xa3,0x26,0x0e,0xf2,0xc7,0x7c,0x45,0x9f,0xea,0xe1,0x9b,0x73,0xaf,0x58,0x7c,0x47,0x8c,0x36,0x02,0x76,0xa7,0x96,0x0e,0x14,0x42,0xfb,0xea,0x00,0x27,0xf6,0x5e,0xfe,0x26,0x63,0x9e,0xaf,0x6a,0xb5,0x1e,0xa5,0x46,0x39,0x99,0x3d,0x90,0x3f,0x99,0x33,0xc9,0x96,0x83,0xce,0x3d,0xf4,0x10,0x3a,0xe6,0xcc,0x66,0x62,0x1c,0x22,0x2d,0xfc,0xea,0x3f,0xf4,0xe5,0x92,0x05,0x5d,0x33,0x6b,0x03},{0x98,0xc8,0x11,0x3f,0xba,0x55,0x1c,0x03,0x2c,0xf7,0x8f,0xd2,0x3a,0x49,0xd9,0x21,0x3b,0x66,0x03,0xce,0x62,0x58,0xbe,0x20,0x60,0xd2,0x2d,0x3c,0xb0,0x06,0xd0,0xd7,0x5c,0x54,0x30,0x4d,0x9b,0xff,0x50,0x7b,0x5f,0xea,0x5e,0xa3,0x3c,0x12,0x73,0xc5,0x52,0x85,0x50,0xa7,0x4c,0x4e,0x4a,0xb7,0x65,0xe4,0x79,0x3d,0x41,0x37,0xd5,0x34},"\x7f\x68\x19"},
{{0x0e,0x72,0x46,0xb4,0xf1,0xf3,0x98,0xc7,0x88,0x87,0x80,0xba,0xd3,0xdb,0x1e,0xa1,0x9a,0x8c,0x9d,0x2c,0xe8,0x0a,0x09,0xc5,0x26,0x59,0x8e,0xe8,0x70,0x41,0xc3,0xea},{0x6f,0xe0,0x54,0x54,0x01,0x59,0xc1,0xcc,0xca,0xca,0xfd,0xc0,0x0b,0x35,0x7b,0xe7,0x45,0xe6,0xa6,0xf5,0xd8,0x8c,0xdd,0x21,0x22,0x32,0xd5,0x9a,0x62,0xfe,0x70,0x0c},{0x67,0x7f,0x42,0x23,0x13,0xb3,0xec,0x07,0x63,0xa7,0xb0,0xf1,0x77,0xa4,0x1c,0xdf,0x48,0x7b,0x09,0x64,0xcc,0xf8,0x33,0x5e,0x32,0x4a,0x1a,0xc1,0x45,0xc7,0x91,0x67,0x34,0x17,0xf6,0x33,0xfd,0xd8,0x2d,0x8b,0x6f,0x90,0x16,0xc9,0x5a,0xd3,0xf2,0x3c,0x80,0x9a,0x0d,0xc8,0x7a,0x97,0x77,0x7b,0x50,0x32,0x18,0xd6,0x97,0x32,0x7c,0x0d,0xe9,0xae,0x97,0x0f,0xdc,0xb6,0x4e,0xe5,0x2a,0xa2,0xe4,0xd4,0x65,0x9e,0x33,0x01},{0x3e,0x1f,0xc6,0x5d,0xce,0x1e,0x96,0x2b,0x0c,0x25,0x0d,0xd8,0x39,0xae,0xda,0x46,0xd5,0x95,0x10,0x5e,0x74,0x8f,0xcb,0x5e,0x0c,0x2a,0xf7,0xcb,0x4b,0x88,0xb6,0x5d,0x27,0x86,0xca,0x6b,0xeb,0x1e,0x6f,0x9e,0x87,0xfc,0x51,0x27,0x14,0x63,0x74,0x4e,0x6e,0x22,0xfe,0x03,0x9b,0xd4,0xdb,0xc7,0xfb,0x19,0x76,0x45,0x0b,0x57,0x09,0x37},"\xef\x97\xd7\xcd"},
{{0x50,0x3f,0x36,0x63,0x51,0xf2,0xca,0x1b,0x64,0xc9,0xc9,0xca,0xb9,0xfc,0x99,0xd7,0x40,0xfe,0x24,0xbc,0xe9,0xa4,0x29,0xa0,0x1c,0x3c,0x59,0xca,0xac,0x56,0x56,0xab},{0x23,0xc3,0xd1,0x1e,0x8a,0xdd,0x67,0x74,0x70,0x3c,0xb3,0x7f,0xd6,0x40,0xd5,0xdb,0xf7,0x27,0x16,0x32,0x71,0x7a,0x7b,0x6d,0x93,0xef,0x81,0xc5,0x6e,0x7c,0xfe,0xa7},{0x48,0xc8,0xdd,0x1e,0xe0,0x7d,0x9d,0x11,0x87,0x21,0x7c,0xba,0xa0,0xe7,0x5b,0xbd,0x86,0xdd,0x9f,0xa6,0xf6,0x8b,0x6c,0x50,0xf4,0x42,0x82,0x40,0x3d,0xc2,0x9b,0xbd,0xa3,0x1d,0xb0,0x87,0xf8,0x68,0x62,0x5f,0x85,0xa7,0x78,0xea,0xb2,0x02,0xc3,0x50,0x77,0x1b,0x17,0x28,0x60,0x17,0x6d,0xfe,0xb5,0x04,0xcd,0x7f,0xed,0x5c,0x48,0x5e,0x9b,0xbc,0x79,0x61,0x21,0x53,0xf0,0x5e,0x00,0xb3,0xc3,0x12,0xe0,0xa4,0xc0,0x01},{0x12,0x77,0x37,0x2e,0xd9,0x27,0x44,0xfe,0xf3,0x19,0x0e,0x13,0x34,0xd6,0x4d,0xc7,0x8f,0x56,0x2a,0x0d,0x86,0x98,0xeb,0xbb,0xd6,0x77,0x32,0xa6,0x71,0xfe,0x86,0xf3,0x2f,0x65,0x46,0xc4,0x1d,0x45,0x44,0xa9,0x51,0x06,0x30,0x6c,0xe3,0xf7,0x3b,0x7a,0xc2,0x8d,0x9c,0xc0,0xac,0x0b,0x16,0xb3,0x8d,0x13,0x50,0xb3,0xf4,0x51,0x37,0xbe},"\x26\xcf\xa4\x2e\xec"},
{{0x22,0x12,0xc3,0xb4,0x1c,0x5d,0x90,0x74,0x3e,0xbb,0x3e,0x42,0xa3,0x59,0xa4,0x16,0xa0,0xd2,0x4b,0x48,0x64,0x73,0x1c,0xd9,0xe0,0x2a,0x36,0xb2,0xa7,0x25,0xc4,0xfc},{0x2d,0xf1,0xe0,0x01,0xde,0xbe,0x5d,0x40,0x6e,0x95,0x5d,0xd6,0x9e,0xd2,0x06,0xda,0x92,0x57,0x15,0x7b,0xd8,0xc4,0x12,0xc7,0xd3,0xb5,0x18,0x97,0x36,0xe0,0x92,0x8e},{0xd2,0x4a,0x9f,0xd4,0x04,0xc0,0x75,0x80,0x91,0xeb,0xcb,0x6d,0x61,0x41,0xe1,0xdf,0x02,0xa9,0x60,0xea,0x5b,0x0d,0x23,0xb1,0x38,0xab,0x7d,0xd6,0xb2,0xd5,0x67,0xce,0x82,0x4e,0x9f,0x27,0x0a,0x08,0x17,0xe4,0xcb,0x55,0xa5,0x8c,0xfa,0xef,0xe4,0xd1,0x32,0xa4,0xae,0x6c,0x22,0xae,0x59,0x7c,0xff,0xbe,0xce,0xd4,0x2b,0x5e,0x96,0x9e,0x19,0x93,0x91,0x8e,0xb9,0x4d,0x5e,0x77,0xfc,0x40,0x4b,0x72,0x99,0xff,0xbe,0x0a},{0x92,0xc5,0x5e,0x8b,0x46,0xad,0x6c,0xbb,0xfd,0xb3,0x22,0xcd,0x0d,0x39,0xb6,0x8c,0x3d,0xbb,0x31,0xdc,0x7e,0xa9,0xe5,0x96,0x1c,0xe3,0x65,0x88,0xa8,0xd9,0xf5,0xb6,0xdb,0xfb,0xdd,0xa6,0x13,0x51,0x27,0x10,0xae,0x68,0x6b,0xe3,0xab,0xa9,0x11,0x08,0x37,0xf5,0x42,0x8c,0xa1,0xee,0x37,0xdd,0x8c,0x3d,0x0e,0x6e,0xcc,0xd7,0x81,0x9e},"\xb0\x32\x79\xf7\x6b\xc6"},
{{0xa3,0x3e,0x55,0x9a,0x1e,0xad,0x4e,0xb2,0xf4,0xde,0x5a,0x98,0x90,0x5c,0xd8,0xfa,0x44,0xb9,0xce,0x42,0xe2,0x35,0xe2,0x8d,0x81,0xc2,0x8e,0x14,0x50,0xcc,0xfc,0xb2},{0x02,0x0f,0xca,0xe5,0x43,0x4a,0xd2,0x9c,0x37,0x99,0xee,0x6b,0x93,0x09,0xd4,0x03,0x8b,0xc7,0x81,0x76,0x2e,0x62,0x42,0x33,0xab,0x42,0xf5,0x50,0x7d,0x4e,0x09,0xa0},{0x7c,0x57,0xed,0xb5,0x97,0x64,0x75,0x82,0xc5,0xb4,0xdd,0xcc,0x2e,0xf6,0x51,0xdc,0xcc,0x3f,0x8f,0xb1,0x1b,0xb5,0xcf,0x87,0x10,0x2a,0x5f,0xb3,0x55,0xfe,0xf5,0x35,0x74,0x49,0x87,0x8c,0xb7,0xb6,0x51,0xf0,0x89,0x6e,0x69,0x47,0xf2,0x3e,0x79,0x6e,0xa2,0x3d,0x36,0x9e,0x1a,0x9d,0x45,0xcd,0xe8,0xd2,0xdd,0x40,0x92,0x3f,0xf6,0x94,0x8d,0xe7,0xbb,0x03,0x15,0xb0,0x7b,0x99,0x8e,0x98,0xa0,0x9b,0x32,0x04,0xd3,0x0f},{0xa8,0x88,0x16,0xcf,0x0a,0x6a,0xbe,0x85,0x52,0x04,0x24,0x35,0xa7,0x9d,0xb4,0x43,0x06,0x2d,0x47,0xc2,0xf3,0x26,0x9d,0x99,0x7a,0xb1,0x4e,0x49,0x76,0xfc,0x97,0xf9,0x5e,0x78,0xc7,0x26,0x08,0xe6,0x2f,0xeb,0x8e,0xf5,0x6c,0x7d,0x0e,0xef,0x91,0xf0,0x84,0x79,0x6c,0x12,0xda,0x98,0x27,0xc4,0x35,0x97,0x8a,0x34,0xd7,0x8e,0x33,0x42},"\xc5\x38\x5c\x29\x1d\x7b\x83"},
{{0x99,0xd4,0x8f,0x3a,0xc4,0xfb,0xad,0xe7,0x25,0x67,0x4a,0xc1,0x3e,0x98,0x1d,0xdd,0xdb,0x74,0xfb,0x53,0x5c,0xed,0xec,0x75,0x68,0x7a,0x2d,0x40,0x3e,0xa7,0x85,0x2e},{0x7f,0x54,0x3c,0x69,0x30,0x80,0xda,0x04,0x41,0x67,0x10,0x8d,0x0f,0x1b,0x8c,0x07,0x9c,0x4e,0x63,0x56,0x92,0x8f,0x7d,0x47,0xba,0xdc,0xee,0x55,0x5b,0xc1,0x95,0x39},{0x0c,0xb6,0x33,0xba,0x95,0x75,0xcf,0xde,0xaa,0x3d,0xd8,0x7d,0x32,0x4c,0x6c,0x77,0x29,0x2c,0xfe,0xa6,0x15,0xfd,0xcf,0x68,0x74,0xa3,0x73,0xfc,0x89,0x98,0xd9,0xb2,0x84,0x19,0x9f,0x75,0x43,0xc8,0x5f,0x00,0x26,0x4f,0x2e,0xb4,0xb4,0xe0,0x1f,0x6e,0x78,0x5e,0xa4,0xea,0x5a,0x21,0x72,0xa3,0x35,0xdb,0xbb,0x7e,0xe7,0x20,0x83,0x11,0xeb,0x47,0x3e,0x2a,0x8c,0x05,0x66,0xee,0x19,0xba,0xb3,0xc1,0x33,0x56,0x45,0x00},{0x2c,0x48,0x09,0x2b,0x21,0xf6,0x95,0x72,0x75,0xe2,0x19,0x10,0xbd,0x66,0xed,0xc6,0x17,0xd7,0x41,0x3f,0xc9,0xfc,0xdb,0xcc,0xa5,0x4e,0xc5,0x92,0x64,0x05,0xbb,0x59,0x62,0x4e,0xb9,0xc0,0x64,0x6c,0x22,0x6a,0x25,0x6c,0xfd,0xe2,0x1b,0xd6,0x2b,0x16,0x40,0x99,0x2b,0x6b,0x6a,0x84,0x3b,0xd5,0xd6,0x94,0x7d,0x51,0xf8,0x20,0x96,0x8e},"\x5a\xc2\xfd\x05\xd5\x2f\xbc\xb6"},
{{0xce,0x8c,0xac,0xaf,0xbb,0x08,0x25,0x00,0x2c,0x7f,0x53,0x9a,0x2d,0x55,0xc1,0x30,0x8c,0xa0,0xf1,0xf2,0x53,0x73,0x82,0xa8,0x6c,0x2c,0x74,0xab,0xce,0x4b,0xe1,0x6a},{0xa5,0xf4,0x73,0x93,0x32,0x6b,0xb5,0x9d,0xe7,0x97,0xf0,0x68,0x0d,0x8e,0x56,0xc3,0x2a,0x6d,0xa0,0x86,0x7c,0xb8,0x0b,0x4e,0x38,0x3f,0x89,0xaf,0xe8,0x6b,0x02,0x05},{0x24,0x81,0x01,0x4e,0xfd,0xc5,0xde,0xc4,0x30,0x14,0xe4,0x48,0xdc,0x01,0x03,0xb1,0xf4,0x15,0x78,0xdf,0x95,0xfa,0xef,0x56,0x99,0x18,0xf6,0xa7,0x7f,0xca,0x23,0x46,0x3c,0x91,0xbe,0x07,0x95,0x11,0xc6,0xce,0xdf,0x30,0x19,0x6b,0x36,0x88,0xd3,0x44,0xc0,0x37,0xad,0xf7,0x83,0x8d,0x9c,0x46,0x92,0x9e,0x59,0x27,0x47,0x1a,0x09,0xa5,0x16,0x1d,0x81,0x63,0xbf,0xe7,0xf3,0xa2,0x56,0x67,0x91,0xc5,0x86,0x04,0xef,0x0e},{0x86,0x82,0x10,0xb0,0x75,0xec,0xe9,0xfb,0xef,0x2f,0xe7,0x79,0x83,0x70,0x81,0x23,0x0d,0x0b,0xdd,0xb5,0x37,0xa1,0xf1,0x0a,0xf5,0xfe,0xda,0x99,0x90,0x13,0x98,0x7e,0x96,0xb9,0x91,0x85,0xe3,0x25,0x17,0x2c,0x99,0x44,0x93,0x7d,0x70,0xc8,0xf8,0x97,0xd4,0x21,0x43,0x45,0x98,0xb1,0xdc,0xb0,0x8b,0xa9,0x9b,0xb6,0x04,0x75,0xcd,0x86},"\x5e\x08\xfd\xc7\x67\x79\x54\x24\x12"},
{{0x72,0x56,0x90,0x2c,0xd2,0x6e,0x10,0x61,0x24,0xa5,0x3d,0xba,0x29,0x06,0xdc,0xe6,0x18,0x1f,0x17,0xb5,0x5d,0x7f,0x3b,0x48,0x91,0xbf,0xb6,0x16,0x96,0x81,0xaa,0xfc},{0xbb,0x95,0xeb,0xcd,0xf2,0x9d,0x37,0x18,0x27,0xbf,0xc5,0xe2,0xfb,0x74,0x66,0xaa,0x81,0x3a,0xe1,0xc1,0x17,0xf5,0x58,0xc1,0x8b,0x0b,0xbd,0xcf,0xfc,0xbe,0xa1,0xce},{0x1b,0xb1,0xd1,0xf1,0xe9,0xfa,0x14,0x44,0x85,0x75,0xc8,0xd5,0xd4,0xac,0x83,0x84,0x13,0xb6,0x9a,0x9e,0xd5,0x02,0x50,0x37,0x48,0x30,0xc0,0xe5,0x0a,0xbd,0x2c,0x0c,0xae,0x92,0x11,0x0a,0xf5,0xc5,0x4a,0x54,0xcf,0xb1,0x79,0x9d,0xa2,0x02,0xf1,0xcd,0x89,0x7c,0xdc,0x13,0xe9,0x8a,0xe0,0x68,0x8a,0x87,0x68,0xac,0xa5,0xb6,0x16,0x59,0x03,0xeb,0x45,0xf1,0xc8,0x46,0x3f,0x1d,0xe7,0x8b,0xe6,0xfe,0x6a,0x23,0x61,0x02},{0x50,0x74,0x0f,0x47,0x35,0xf8,0x25,0xe9,0x73,0x68,0xc9,0x94,0x62,0xbf,0x5a,0x1f,0x13,0x29,0x62,0x76,0x52,0x23,0x42,0xb9,0x0d,0xc2,0x30,0x71,0x2a,0x98,0xe8,0xe9,0x8b,0x03,0x25,0xf6,0x43,0x9c,0x1e,0x23,0x0e,0xf2,0x6e,0xd7,0xa8,0x54,0xc2,0xeb,0x28,0xda,0x5e,0x8b,0x7c,0xb5,0x68,0xb7,0x46,0x86,0xeb,0x90,0x88,0xd3,0xca,0xc6},"\x10\x91\x39\x3f\x7f\x5e\xe6\xcf\xd5\xac"},
{{0x19,0x1e,0x71,0x38,0x09,0x25,0x84,0x00,0x4b,0x9e,0x7b,0x04,0xe4,0x80,0xed,0x5c,0x86,0x0c,0x9c,0x21,0xcb,0x78,0xa4,0xe9,0x01,0x9d,0x9f,0x51,0x58,0x6b,0xa5,0xaa},{0x02,0x34,0xd5,0xd9,0x3e,0x12,0x4e,0x78,0x40,0xea,0xe0,0x1e,0xb5,0x64,0x7d,0x80,0xf5,0xae,0xc4,0xe4,0x98,0x51,0x11,0xfd,0x2d,0x74,0x7f,0xca,0x12,0x7d,0xbe,0x37},{0xdf,0xa0,0xef,0xe6,0xdd,0x74,0x95,0x8d,0x79,0xd4,0xc5,0x50,0x36,0x86,0x72,0xf4,0x7b,0x5a,0x1f,0x87,0xed,0x86,0x08,0xea,0xa1,0x1f,0xef,0x24,0x55,0x39,0x84,0x38,0x52,0xfb,0x16,0x07,0xa0,0x91,0x0e,0x72,0x2b,0x34,0xda,0x22,0xb3,0x75,0x73,0xfa,0x99,0x6b,0x76,0x95,0x35,0x1b,0x52,0xa4,0x88,0xb3,0x67,0x03,0x57,0x6c,0x80,0x5b,0xfb,0xe3,0xc9,0x30,0xb5,0xed,0x48,0xb3,0x5d,0xfb,0x88,0xb5,0x86,0xf0,0x49,0x04},{0x20,0xb2,0x3f,0x16,0xc1,0x40,0xdb,0x29,0x77,0xd4,0xae,0x12,0xc0,0x4c,0x97,0x85,0xeb,0x4e,0x6e,0x3e,0x10,0x4b,0xcb,0x67,0xaf,0xf8,0x90,0x78,0x06,0x05,0xcc,0x2b,0x85,0xc5,0xdc,0x37,0xbe,0x48,0x40,0x30,0x19,0x6d,0x0f,0x8d,0x84,0x0e,0xad,0x74,0x1f,0x5c,0x20,0x60,0x66,0x43,0xa2,0xbd,0x57,0x8a,0xf4,0x38,0xcb,0x30,0x49,0xc8},"\xa1\x68\x70\xcb\x1b\x34\x81\x5a\x65\x3a\xb8"},
{{0xf5,0x5b,0x39,0xa1,0x7b,0x8a,0x3b,0xf7,0x1f,0xd7,0x00,0xc8,0x61,0x98,0x07,0xaa,0x36,0x23,0x88,0xec,0x50,0x7f,0x48,0xf8,0xd9,0xa6,0x9c,0x79,0x1c,0x3a,0xc2,0x72},{0xaf,0x2c,0x6d,0x80,0xed,0x11,0x67,0xc5,0x0b,0x88,0xd3,0x47,0xff,0x2e,0xaf,0xc8,0x5b,0x4d,0xbe,0x44,0x4b,0x70,0xdb,0xd2,0xda,0xae,0xc0,0xc0,0xc9,0xeb,0x04,0x54},{0xda,0xa1,0xaa,0x4a,0xd1,0x64,0x8d,0x11,0x51,0x36,0xf8,0x59,0x27,0x69,0xc2,0x99,0x22,0xf7,0x05,0x44,0xe1,0x62,0xb1,0x5f,0x48,0x26,0xa8,0xd5,0xfb,0x58,0xd1,0x2f,0x00,0x66,0x30,0xa3,0x41,0x81,0xe4,0x5c,0x2e,0x9b,0x05,0xd7,0x61,0x0b,0x44,0xbd,0xfa,0x3a,0x1e,0x67,0x8a,0xc5,0xfd,0xdb,0x92,0x92,0x44,0xcb,0x72,0x9f,0x1a,0xc4,0x6f,0x71,0xd6,0x19,0xea,0xc8,0x1a,0x60,0x23,0x1b,0x5a,0xab,0x33,0x98,0x41,0x01},{0x84,0x3b,0xd4,0x3e,0xb8,0x7f,0xd2,0x78,0x55,0xf6,0xb3,0xff,0xe0,0x12,0xda,0xa9,0xc4,0x8d,0x49,0xcb,0x83,0x06,0xda,0xea,0x1a,0x72,0x43,0x95,0x0c,0x6c,0x7c,0xe4,0x69,0xd3,0xd3,0xd1,0x51,0xd8,0xec,0x85,0x9c,0x1a,0x55,0x07,0x99,0x56,0x09,0xa6,0x89,0xde,0xac,0x04,0x61,0x0c,0xfa,0x83,0xef,0x26,0x83,0x3c,0x81,0x5a,0x45,0xe1},"\x87\xe7\xd7\x1f\x6d\x04\x0e\xa6\x8d\x49\x95\x99"},
{{0x8e,0x7e,0x7a,0xea,0x29,0x95,0x43,0xe3,0xe7,0xaa,0x50,0x8a,0x29,0x8d,0xeb,0x09,0xd8,0xcc,0xf4,0x31,0x06,0xbf,0xe8,0x5b,0x00,0xbd,0x67,0xcc,0xb3,0x51,0x8e,0x25},{0x82,0xa7,0xf4,0xb9,0xc2,0x76,0x8b,0xe9,0xda,0xb5,0x29,0x6c,0x5f,0xaf,0x02,0x8b,0xb6,0x22,0x89,0xaf,0xe2,0x61,0x67,0x7d,0x6a,0x6f,0x99,0x29,0x64,0x29,0xab,0xeb},{0x33,0x81,0x88,0x04,0x81,0xc7,0xde,0xc4,0x48,0xac,0x57,0xe2,0xbd,0x3b,0xb1,0x77,0x3c,0x0f,0x47,0x22,0x67,0xd6,0x1e,0x74,0x9c,0x0d,0x5b,0xb8,0xb0,0x32,0x70,0x88,0x59,0x13,0x43,0x5a,0x35,0x73,0xbc,0xf7,0x96,0xc7,0x8d,0xa9,0x6e,0xa0,0x08,0xa2,0xf5,0xa7,0xbe,0x2d,0xef,0x5d,0x62,0xa0,0x19,0xcf,0x67,0x93,0x49,0x7d,0x74,0xf0,0xcc,0x7c,0x02,0x6f,0x8a,0x74,0xa2,0x02,0xff,0x75,0xf5,0x50,0xec,0x91,0x84,0x05},{0xe2,0xcc,0x92,0xd3,0x50,0x2f,0x20,0xe6,0x40,0xfe,0x78,0x8c,0xeb,0x2f,0x44,0x32,0xb2,0xba,0xb9,0x74,0x11,0xe6,0x50,0x9c,0xb0,0xbe,0x80,0x0a,0x70,0x8d,0x76,0xee,0x0c,0xea,0x2f,0x27,0xdd,0x35,0xd9,0xca,0xe8,0x8a,0x80,0x2e,0xd9,0x71,0x74,0x3a,0xc6,0xd5,0x86,0x35,0x91,0xbc,0xbe,0x77,0x27,0x13,0x72,0x2c,0x11,0xee,0xe6,0x3d},"\xcd\xf8\x5c\xaf\xf8\x50\x05\xba\xe2\xa6\x82\x2d\x07"},
{{0x7c,0xe6,0x39,0x63,0xc9,0x88,0x2a,0xff,0x91,0x91,0xf0,0x7f,0xaa,0xb4,0x53,0xc7,0x67,0x00,0xcc,0x22,0x65,0x14,0xe1,0xa6,0x9c,0x79,0xf9,0x16,0xe6,0x4c,0x1a,0x8c},{0x17,0xb9,0x0d,0xa3,0x84,0x1c,0xc8,0x79,0x83,0xac,0x30,0x22,0xad,0xb2,0x6d,0x31,0xe5,0x26,0x18,0x44,0xf6,0x92,0x02,0x0f,0x2a,0xc9,0xa4,0x6e,0x31,0xe0,0x42,0x65},{0x0f,0x19,0xec,0x31,0xd4,0x2b,0x46,0x6b,0x4c,0xd2,0x2f,0x0a,0x22,0x48,0x3c,0xf8,0x6d,0x7c,0x89,0x80,0x51,0x3f,0xf5,0xe5,0xab,0xfd,0x76,0xee,0x97,0xc1,0xc1,0xbd,0x51,0x79,0xf0,0xdc,0x17,0x92,0x0b,0xde,0xaa,0xb0,0x77,0xeb,0xbd,0x35,0x44,0x15,0x55,0x91,0xc0,0x47,0x20,0xdd,0xfc,0xe0,0x5d,0x9a,0x45,0x26,0x1b,0x94,0xdd,0xeb,0x61,0x79,0xc0,0x0b,0x5b,0x96,0x10,0x78,0x36,0x2c,0x11,0xc6,0x51,0x45,0x28,0x07},{0x63,0xd0,0xe4,0x32,0xe6,0x80,0x68,0xae,0x8a,0x32,0x44,0xe6,0x74,0x1c,0x17,0x3a,0xb2,0x04,0x0d,0x8c,0xe6,0x4b,0xd9,0x17,0x9f,0xa4,0x5c,0x53,0xb0,0xb0,0xea,0x2b,0x20,0x77,0x2c,0x55,0x76,0x24,0x26,0x21,0xd8,0x45,0x78,0xae,0x90,0x7c,0x77,0xcc,0xda,0xd1,0x79,0x5e,0xe5,0xbf,0x23,0xa0,0x2a,0xd2,0xb5,0xb6,0x2c,0x37,0x4b,0xdc},"\x73\x2c\xb4\x85\x11\xe2\x67\xaf\xaa\x63\xe1\x1f\x4c\x9b"},
{{0x29,0x46,0x20,0x76,0x62,0x4f,0x06,0x12,0x8b,0x73,0x4b,0x7c,0xcf,0xfd,0xe6,0x1a,0x93,0xca,0xec,0x47,0x8d,0xc4,0x44,0x3e,0x86,0x0a,0xce,0x98,0xf6,0xce,0x9a,0x9e},{0x2f,0xb7,0x5b,0xa5,0x23,0xd7,0xcd,0xcc,0x78,0xa9,0x87,0xd7,0xf7,0x9d,0x0f,0xfe,0xfa,0x55,0x2b,0xd1,0xb3,0x35,0xe1,0x52,0xa3,0xbb,0xef,0xe5,0x3f,0xf5,0x9a,0x3b},{0x51,0xdc,0x03,0xf6,0x86,0xda,0x4d,0x44,0x2b,0xf7,0xaa,0x97,0x11,0x85,0xf1,0xcf,0xc8,0xc7,0x08,0x87,0x46,0x9a,0xfa,0xc0,0x97,0x84,0x2b,0xc2,0xa4,0x40,0x1b,0x0c,0xd8,0x69,0x17,0xb4,0x87,0xaa,0x88,0x37,0x2f,0x0c,0x1f,0xfa,0x27,0xf3,0xe4,0xf1,0xe4,0x60,0xf8,0x8b,0x8b,0xd2,0xfb,0x22,0xc0,0x84,0x38,0x7c,0x60,0x8e,0x0d,0x1e,0x50,0xc1,0xb9,0x34,0x55,0x3a,0xba,0xee,0x41,0x48,0x01,0x5d,0x15,0xc3,0xe0,0x0a},{0xfe,0x24,0x2c,0xa7,0xa1,0x7c,0x03,0xd9,0xdc,0xf5,0x9e,0x56,0x36,0xac,0x1d,0x68,0xf8,0xb5,0xb7,0x4d,0xef,0x33,0x64,0xa8,0xc3,0x38,0xc2,0x3a,0x6b,0x37,0x49,0xd1,0x8e,0x91,0x6c,0x96,0x2d,0x25,0x43,0xb5,0x89,0xcf,0xfb,0x8d,0xed,0x34,0x37,0xe9,0xd0,0x33,0x39,0xc2,0x6d,0x2f,0x5d,0xab,0x09,0xa4,0xbd,0xcf,0x82,0x53,0x72,0xe4},"\x34\xb8\x6c\x82\x80\x0b\x22\xd6\xb0\xc4\xe1\xb4\xd7\xf9\xc8"},
{{0x5d,0x5a,0xa7,0xec,0x99,0x9a,0x49,0x2e,0x0d,0xff,0x78,0x4a,0xac,0x9a,0xf3,0x3b,0x0e,0x26,0x40,0x8b,0xe6,0x10,0x3d,0x9d,0xfb,0x75,0xc0,0x4a,0x0a,0xd9,0x74,0xf7},{0xe2,0xb1,0x14,0x8d,0x7f,0xdd,0x96,0x10,0xad,0xd3,0xcd,0x65,0x92,0x41,0x90,0x44,0xbc,0xc1,0xb6,0xda,0x42,0x84,0xb1,0x86,0x38,0x1b,0xff,0xe3,0x17,0x21,0x35,0xcc},{0x94,0x04,0xe7,0x72,0x31,0xc0,0x53,0xe6,0xc8,0xf9,0xe5,0xad,0x07,0xc9,0x60,0x46,0x37,0x41,0x41,0xb2,0x5a,0x3d,0x24,0x7b,0x2e,0xc8,0x66,0x68,0x42,0x67,0x9a,0x7f,0xa0,0x8f,0x5f,0xb5,0x15,0xa3,0x15,0xfa,0xe0,0xd2,0x6f,0x63,0x8e,0x42,0x25,0xc5,0x33,0x29,0xcd,0xc1,0x8b,0x29,0x45,0x22,0x10,0x5e,0xfe,0x0b,0x32,0xda,0xae,0xca,0xee,0xd8,0x4a,0x84,0x17,0xc3,0x80,0x91,0xee,0x97,0x5f,0xea,0x97,0x2a,0x43,0x03},{0xf4,0x16,0x0b,0x3c,0xae,0xe4,0xc5,0x54,0xf5,0x88,0x92,0x1d,0xb9,0x02,0x65,0x29,0x95,0x84,0xc0,0x1e,0x68,0x56,0xd9,0xbd,0xaa,0x70,0xba,0x83,0xdf,0x4f,0x90,0xb1,0x18,0xbf,0xdf,0x7d,0xe5,0x9c,0x6c,0x80,0x9e,0x0c,0x45,0xe9,0xcb,0x51,0x3e,0x57,0xac,0x39,0x9d,0xa6,0xba,0xc0,0xb6,0xe8,0xb5,0x8c,0x58,0x86,0x41,0x81,0x48,0x7e},"\x87\x34\xd6\x7b\x40\x2f\xa9\x90\xca\xd4\xb6\x57\x23\x2b\x53\xf9"},
{{0x41,0x46,0xed,0x04,0x69,0xb0,0x49,0x77,0x16,0x1b,0x4c,0x58,0x86,0xe9,0x52,0xdc,0xe4,0xa1,0x8c,0x48,0xa6,0xae,0x96,0xdc,0x27,0xb7,0xdc,0x02,0x36,0x5b,0x39,0x58},{0x77,0x56,0xe4,0xcd,0x1f,0xfe,0xf6,0xbc,0xb8,0xd5,0x38,0x75,0xa5,0x78,0x51,0x9f,0xa4,0xd7,0x87,0x7f,0x15,0x50,0xcc,0x1a,0x0b,0x65,0x95,0xb2,0x6b,0xd2,0x43,0x25},{0x79,0xdb,0x88,0xc3,0x35,0x7c,0xa6,0xa2,0x06,0xb7,0x26,0x12,0x51,0xb1,0xa2,0x4c,0x9a,0x62,0x4e,0x39,0x50,0xee,0x91,0xd5,0x0c,0x8c,0xf9,0x78,0x44,0x45,0x91,0xfa,0xc9,0xe5,0xbb,0x10,0xcb,0x8b,0xd3,0x05,0x7f,0xb1,0x7c,0xb7,0x38,0xc5,0xf1,0xac,0xda,0x0b,0xd3,0xe5,0x4c,0xb5,0x98,0x19,0xd3,0x86,0x8c,0x56,0x9f,0x88,0x96,0x63,0xf9,0x9a,0x31,0xd0,0x0a,0x61,0x87,0xa8,0xe2,0x0c,0x7d,0xcc,0x5a,0x37,0xe9,0x0f},{0x7c,0x10,0xb9,0xe0,0x9a,0x30,0x7e,0x8a,0x3c,0x80,0x69,0x5a,0x4e,0x79,0x4d,0xf5,0xc7,0x60,0x57,0xdb,0x56,0x56,0xe1,0xb4,0xc1,0x9e,0xb7,0x2d,0x08,0x65,0x45,0x33,0x82,0xf6,0x15,0x26,0xfc,0x37,0x38,0x2a,0xdd,0xe7,0x0c,0x62,0x74,0x82,0xee,0xcd,0x96,0xb2,0xb4,0x45,0xad,0xc8,0x33,0x38,0xd3,0x74,0xea,0xdf,0x25,0xf8,0x10,0xb9},"\x3c\x7e\x90\xbe\xc4\xae\x37\x7d\xa1\x2e\xc7\xeb\x7a\xfa\x7a\x40\xe4"},
{{0xfc,0x23,0xe9,0x6b,0x69,0xef,0xc3,0x27,0xdd,0xc9,0xd6,0xb6,0x46,0x1b,0x96,0x64,0x9d,0x9f,0x1a,0x1a,0x1b,0x0e,0xa1,0x77,0xde,0xc1,0x9e,0xa3,0x6e,0xee,0x41,0xa3},{0xe7,0x10,0x1e,0x16,0x7c,0x89,0x8f,0x6c,0xf5,0x92,0xa5,0xc6,0xb8,0xe6,0xf5,0x9f,0x75,0x98,0x01,0xac,0xdd,0x21,0x17,0x08,0xd4,0x73,0x3e,0xf3,0x20,0x64,0xd2,0x35},{0x29,0xa7,0x8f,0x2e,0xc1,0x80,0xf7,0x6d,0xe1,0x75,0xb1,0x9a,0x17,0xa3,0x00,0x1c,0x03,0x3a,0x57,0xd5,0x79,0x7a,0x22,0x23,0x58,0x51,0x33,0xc1,0x23,0x0c,0x12,0xed,0x3a,0x41,0x95,0x1e,0x68,0x13,0xe3,0x36,0xee,0x4b,0xe1,0xe2,0x51,0x98,0x1f,0x6f,0xaa,0x6e,0x03,0x5d,0xd0,0xbb,0x05,0xd7,0x91,0xf4,0xec,0xff,0x26,0xb1,0xb0,0x14,0x97,0x3f,0xb6,0xd8,0x00,0x4d,0xe2,0x05,0x33,0x92,0x2a,0x7b,0x53,0x0c,0xb1,0x0d},{0x00,0xb8,0xc8,0x21,0x2b,0x67,0x36,0x0f,0x2c,0x61,0x82,0x73,0x6a,0x68,0xa4,0x49,0x98,0x2e,0x9f,0x3d,0x89,0x8b,0xbc,0x5a,0xb1,0x6f,0x5b,0x9c,0xc5,0xb8,0x00,0x08,0x1b,0x90,0x61,0x3a,0xea,0x27,0x31,0x4d,0x07,0x10,0x30,0x47,0x72,0x17,0xd2,0xe8,0x7b,0xa2,0x51,0x27,0xdf,0xaf,0x5f,0x7e,0x0a,0xc4,0x8e,0x20,0x73,0x59,0x14,0x30},"\x4c\x6c\xcc\xfe\x75\xc6\x40\xe6\x67\xec\x86\xfe\x74\x80\xbe\x95\xe6\xd7"},
{{0xae,0x4a,0xed,0x35,0x9b,0x68,0x4b,0x1a,0x8d,0xcc,0x79,0xf7,0x81,0x4a,0xe2,0x2b,0x6a,0xbd,0x6f,0xd4,0xe1,0xac,0xef,0xcf,0x38,0xc2,0x1e,0x6f,0xce,0x4b,0x0c,0x23},{0x98,0xc4,0xbd,0x22,0x15,0xc4,0x99,0xc4,0x16,0x92,0x7e,0xa5,0xae,0x6b,0x81,0xa1,0x69,0xf7,0x45,0xa3,0xc7,0x6b,0x4b,0xa0,0x9e,0x8d,0x48,0xb6,0x89,0x9d,0xcf,0x0e},{0x94,0x9e,0x40,0xd8,0xb1,0xfc,0xf0,0xa9,0x94,0xa5,0xc0,0x0b,0x63,0x30,0x3f,0xc0,0x1f,0x1b,0x3e,0xf8,0x5f,0x6e,0x3c,0x76,0xd1,0xec,0x35,0xbd,0x03,0x13,0x3e,0x12,0x5b,0x42,0xde,0xe4,0xd0,0xf5,0x11,0x77,0x0d,0x24,0x87,0xcf,0x45,0xbd,0x80,0x76,0xf1,0x98,0x22,0x67,0x4d,0x2a,0xc2,0x6d,0x35,0x5e,0x73,0x34,0xdb,0x36,0x19,0xc1,0x51,0x93,0xca,0x89,0x83,0xc0,0xfd,0xe4,0xd8,0x51,0xaa,0xfc,0x78,0xc0,0x7c,0x0d},{0xdb,0x49,0xed,0xf1,0x79,0x91,0x76,0x72,0xf7,0xe5,0x00,0x98,0x0c,0x11,0x9d,0xba,0x08,0x95,0xbd,0xfb,0x81,0xa2,0x10,0x30,0xdf,0xb2,0x8b,0xa9,0x4f,0x7c,0x8b,0x43,0x0b,0x5b,0x2d,0x5b,0x70,0x27,0x16,0xb1,0x46,0x5f,0x70,0x59,0x80,0xc6,0xd3,0xaa,0xc1,0x16,0xfa,0x1e,0x68,0x4d,0xdd,0x4a,0xe1,0x19,0x49,0x8b,0x38,0x5c,0x14,0xb2},"\x1e\x93\x41\x89\x95\xa2\x91\x24\xb8\x8c\xb3\x7b\xc1\xa5\x1d\x43\x05\x12\xe8"},
{{0x83,0x7a,0x8c,0xf3,0x6c,0xcf,0x65,0x2c,0xba,0x65,0x36,0x49,0x3c,0xf5,0xc6,0xbb,0x7d,0xae,0x7c,0x41,0xb4,0x9e,0x0b,0x80,0xc7,0x55,0x4c,0xb2,0x33,0x54,0x1a,0xf0},{0x7c,0x8b,0x27,0x3a,0x69,0x30,0x20,0xa2,0x96,0xa6,0xb0,0x87,0x42,0x19,0x5b,0x93,0x69,0x86,0x02,0x1f,0x03,0x89,0x25,0xa0,0x4d,0xf5,0x41,0x6b,0xbb,0x20,0xc3,0xfd},{0x7e,0x0f,0xf2,0x32,0x97,0xf1,0x4f,0xd4,0x49,0xe9,0x36,0x2e,0x41,0xd1,0xf4,0xed,0x87,0x92,0xfd,0xa4,0x57,0xa6,0x84,0x58,0x14,0x9c,0x0e,0x41,0x26,0xfc,0x99,0x29,0x05,0x85,0x56,0x4f,0x20,0x17,0x6d,0xb2,0x33,0x2d,0x5e,0x42,0xbb,0x71,0xd0,0xeb,0xf5,0x66,0x70,0x99,0x5f,0x76,0x23,0x03,0x0e,0x73,0x93,0x99,0xe1,0xc5,0x4c,0xe3,0x7a,0xcf,0x06,0x44,0xbf,0xb9,0x45,0xca,0x31,0x0d,0x7b,0x0a,0xbf,0xf5,0x94,0x0b},{0x69,0x4c,0xba,0xb0,0xa2,0xfe,0x5c,0x42,0x70,0x26,0x9e,0x75,0xd6,0x11,0x73,0x76,0xd8,0xf4,0x91,0x37,0x78,0x95,0x82,0x24,0x7b,0x50,0x01,0x87,0x31,0xea,0x15,0x1a,0x5f,0xae,0x53,0xe8,0x57,0x1f,0x85,0x18,0xa7,0x82,0x05,0x6a,0x24,0x01,0x74,0x43,0x36,0xad,0xd3,0x7f,0x5a,0x40,0xb7,0xa6,0x37,0x88,0xa9,0x87,0xc9,0xa5,0x42,0xda},"\x9e\x8e\x69\xa8\x64\x6a\xe9\xaf\xd4\x0d\x31\xcc\x9e\xbe\xa1\xa5\x38\x20\xe5\x8f"},
{{0x36,0x93,0xa6,0x38,0x1b,0x5a,0xef,0xfb,0x7b,0xac,0x59,0xed,0xae,0x7a,0x4c,0x8a,0xb2,0x6a,0x64,0x78,0x42,0xa4,0xba,0xb3,0xe1,0x37,0x18,0x18,0xe9,0x95,0xea,0x23},{0x42,0x92,0xd4,0x14,0x2e,0x6c,0x62,0x2b,0x32,0xcf,0x88,0x3e,0x65,0x80,0xa5,0x59,0x72,0x3d,0x74,0x45,0x8f,0xe1,0xa0,0xba,0x81,0x40,0x7b,0x3a,0x57,0x5f,0x3a,0xb6},{0x84,0x86,0x30,0x0f,0x0b,0x95,0xc4,0x36,0x62,0x53,0x16,0xc8,0xd1,0xc0,0x18,0xdf,0x49,0x99,0xae,0x54,0xd0,0x8f,0x4a,0x83,0x61,0x32,0x92,0xa9,0x5c,0xd7,0xed,0x3f,0x13,0x41,0x78,0x1c,0x70,0x8d,0x9a,0xb1,0x8d,0xfe,0x09,0xeb,0xd3,0x3b,0xe5,0xa1,0x66,0xc4,0xf2,0x88,0x98,0x6b,0x73,0x42,0x89,0xe5,0x89,0x2e,0x2c,0x75,0xdf,0x29,0x66,0xe9,0xc3,0xec,0x67,0x6e,0x1e,0x4e,0xc7,0xa3,0x60,0x5f,0x79,0xd4,0x59,0x0b},{0x2b,0x75,0x85,0x0a,0x74,0x91,0x2b,0xa2,0xbf,0xe0,0x04,0x5e,0xd9,0xf4,0xaa,0x49,0x4d,0xa9,0xd3,0x90,0x0b,0x79,0xe8,0x6f,0xe3,0x5c,0x6e,0xfa,0x92,0x4a,0xca,0x37,0x53,0xf6,0x4a,0xb6,0x8b,0x00,0xe2,0xd7,0xbf,0x2e,0xa7,0x87,0xcb,0x25,0x1e,0x75,0xa1,0xa7,0xc8,0x20,0xb6,0xcb,0xdd,0x92,0xfa,0xa3,0x3e,0x90,0xef,0xb5,0x72,0xa0},"\x4a\x18\xcf\xa0\x3d\x1c\xa0\x11\x36\xd6\xec\xf6\x6c\xb5\xe8\x09\xfe\xe9\xdd\xbf\xb5"},
{{0xf9,0xc5,0x0f,0x05,0x3d,0xd5,0x77,0x62,0xec,0xf9,0xbc,0x0d,0xfe,0x2d,0x51,0x42,0x27,0xe6,0xcd,0x6c,0xca,0xca,0x1f,0xf1,0xea,0xba,0xed,0x30,0xc7,0x84,0x90,0xe6},{0x05,0xc8,0xda,0xe0,0x32,0x6d,0xf2,0x73,0xfc,0x47,0xd8,0x9e,0x20,0xda,0x78,0xe5,0xfa,0xc3,0x67,0x1f,0x69,0x4c,0xe5,0xa9,0xe1,0x58,0x21,0x93,0x6b,0xc7,0xdc,0x63},{0x17,0x9e,0x8f,0xf9,0xad,0xfd,0xc5,0xac,0x41,0x6a,0x4a,0x1b,0xe1,0x60,0x3e,0x0b,0xc0,0xa1,0xe1,0xd0,0x52,0x50,0x61,0xaa,0x31,0x35,0xb7,0xb7,0xbd,0x00,0xf5,0x0a,0x53,0x2d,0x37,0xd6,0xcd,0xe2,0x07,0x52,0xe7,0x1f,0xfe,0xf2,0x70,0xe9,0xf5,0x2f,0xc3,0x79,0x0b,0x1a,0x47,0x65,0xd9,0x9f,0xb8,0xf2,0xd8,0x0e,0xce,0x0e,0x71,0x58,0x3e,0x32,0xbb,0xc2,0x96,0x1a,0x12,0x16,0x68,0xc5,0x1f,0x9b,0x74,0xbd,0xe9,0x03},{0x91,0xe2,0xa3,0x55,0xd9,0x29,0x78,0x3b,0xba,0x06,0x3c,0x73,0xe2,0x28,0x3d,0xa9,0x3a,0x24,0x34,0xcb,0x1c,0xb1,0xdd,0xf4,0x73,0x13,0x2b,0x10,0xbe,0x90,0x7c,0x9f,0x8b,0xbc,0x0a,0x71,0x8a,0x22,0xfa,0x91,0xb1,0x52,0x30,0xd2,0x74,0x69,0x90,0x7a,0xad,0x9f,0xf8,0xdd,0x3d,0x70,0xc5,0x74,0xf9,0x43,0x63,0xe4,0xa8,0x26,0x9d,0x7b},"\x1d\xa5\x34\xdf\x1f\x14\xd1\x50\xbf\x3f\x67\x77\x37\x6a\x03\x90\x0e\xee\xa2\xbd\x2c\x8b"},
{{0x49,0x8b,0x90,0x39,0x22,0x24,0x1d,0xbc,0xaf,0xba,0x56,0x3d,0xe3,0x92,0x46,0x2d,0x85,0xa5,0x2e,0x61,0xa6,0x89,0xe3,0x10,0xcc,0xc9,0x66,0x1a,0xde,0x33,0xcd,0x05},{0x5f,0x29,0xa1,0xd8,0x1c,0x1f,0x9d,0xa7,0xad,0x06,0x0f,0xae,0x11,0x62,0x6a,0x6b,0xdf,0x92,0xae,0x45,0xbc,0x7c,0x60,0x74,0x92,0x00,0xa2,0x2a,0x60,0x68,0x95,0x45},{0x00,0x16,0x15,0x02,0xd5,0x5f,0x50,0x76,0x0b,0xcf,0x14,0xf1,0xf7,0xe4,0x57,0x13,0x42,0x25,0x82,0x34,0xd7,0x89,0x6d,0x8a,0xa7,0xcb,0xfd,0xf7,0xb6,0xcf,0x30,0xf5,0xa1,0xb4,0x42,0x0b,0x9c,0xce,0xc3,0xe3,0x4e,0xcc,0x4a,0x57,0x9a,0x13,0x1b,0xb3,0xcb,0x5f,0x0a,0x93,0x59,0x5b,0x3c,0xb7,0x0f,0x94,0x2f,0x50,0x2c,0x31,0x90,0x1c,0xb9,0x15,0xc2,0xe6,0x7b,0x78,0x91,0xc4,0x10,0x14,0x71,0xfe,0x8a,0x00,0x36,0x05},{0xc1,0x88,0x76,0x0b,0x74,0x28,0x38,0xe6,0x8a,0x13,0x76,0x47,0x22,0x43,0x0f,0x0a,0x25,0x7a,0x41,0x06,0xf1,0x6b,0xad,0xa9,0x82,0x43,0x2a,0x32,0x08,0xaf,0x64,0x48,0x39,0xe3,0xa9,0x69,0x66,0x05,0x7d,0x70,0x5b,0x2a,0xbd,0xb8,0x84,0xe6,0x77,0x8b,0x6f,0xc5,0xeb,0xa3,0xc5,0xd0,0x10,0x9a,0x1f,0x33,0x94,0x8a,0x80,0x7a,0x35,0x3d},"\xeb\xa2\x9b\x15\xd4\x78\xed\x3d\x5a\xf7\x1c\xaa\x5a\xc1\x92\xaf\x0d\x48\xb5\x23\x08\xd2\xfb"},
{{0x17,0x00,0xcd,0x63,0x3f,0xfd,0x17,0xe1,0x0c,0xa9,0xa7,0xf9,0x7e,0x3b,0x2f,0x67,0x02,0x24,0x60,0xff,0x2c,0x2b,0x71,0x7c,0x32,0xf5,0x3c,0x7f,0x3b,0xfc,0x2e,0xca},{0x54,0x0c,0xc0,0x6a,0xd0,0xfe,0xdd,0x22,0x9f,0x89,0x4c,0xc4,0x09,0x07,0x39,0x8e,0x4f,0xfe,0x03,0x4f,0x35,0x44,0x35,0x48,0x87,0x0a,0x15,0xc5,0xb9,0x5f,0x74,0x70},{0xb3,0xc2,0xd5,0x9e,0x8d,0x71,0x71,0xb2,0x6e,0x3d,0xb2,0xf7,0x5f,0xca,0x7e,0xa3,0xb8,0x4b,0x73,0x65,0x83,0xa3,0xa1,0x90,0x1f,0xa1,0xfa,0x3e,0xc5,0xfe,0x62,0x2d,0x59,0x71,0xdf,0xe7,0x2d,0xf9,0x96,0x16,0xd4,0xdb,0xc8,0xba,0xa9,0xbd,0xc7,0x23,0x16,0xb5,0xa6,0x2a,0x1a,0x56,0x3e,0x17,0xdc,0x3e,0x31,0x82,0x7f,0x19,0xb6,0xaa,0x22,0x4b,0x43,0x3b,0xc3,0x18,0xbf,0x2d,0xb2,0xdf,0xd5,0x78,0x1a,0xfa,0xc0,0x06},{0x24,0x90,0x37,0x75,0x15,0x03,0xd3,0x15,0xf3,0xe8,0x1c,0xef,0x5d,0xaf,0xd2,0x3d,0xe9,0x4f,0xd8,0x43,0xb0,0x11,0xd0,0x77,0x27,0x13,0xbc,0xaa,0x68,0x55,0x1c,0x84,0xe0,0x9f,0xdb,0x28,0x51,0x91,0xc3,0xf7,0x5f,0x9a,0x2c,0x49,0x6b,0xae,0x11,0xca,0x41,0x25,0xb2,0xa1,0xe0,0xad,0x63,0xbe,0x5a,0x8a,0xd0,0x4d,0x8d,0xaf,0x53,0x85},"\x92\xcb\x5d\x53\x8b\xc8\x63\xaf\xdb\x96\xb9\xa4\x4b\xa0\x0b\xa8\xac\x65\x6c\x3e\x5f\xee\xa3\x58"},
{{0x81,0x95,0xfd,0x1e,0xf1,0x29,0x92,0x36,0x10,0xde,0xb8,0x5f,0x79,0xe8,0x21,0x50,0x2d,0xac,0xb4,0x47,0x92,0xbe,0x15,0xe6,0x48,0x03,0x08,0xd4,0x60,0x4b,0x86,0x20},{0x52,0x6c,0x27,0x4f,0xc2,0x96,0x2d,0xcc,0x36,0x53,0x34,0x02,0x31,0x76,0xd1,0x10,0x89,0xa3,0x27,0xf7,0xd6,0x0c,0x42,0x0c,0xf3,0xdf,0xc8,0x07,0xfe,0x17,0x44,0xa4},{0xa2,0x70,0xc1,0x81,0xcc,0xf9,0x39,0x89,0x92,0x7c,0x67,0x24,0xc1,0x2c,0x87,0x16,0xbf,0x5f,0x23,0x5f,0xe8,0xe9,0xb8,0xcb,0x33,0xfd,0xb9,0x24,0x08,0x00,0xba,0xf1,0xbe,0xc3,0x17,0x3a,0x43,0x2c,0x7a,0xb9,0x45,0x5f,0x94,0x63,0x77,0x5d,0xcc,0xb5,0x9c,0xaa,0x75,0xe3,0x13,0xde,0xbd,0x11,0x31,0x3f,0x9d,0xb7,0x0c,0x74,0xd0,0x10,0x21,0xb1,0x1e,0x0c,0x57,0xd5,0x89,0x69,0x26,0xc3,0x75,0xcd,0x6b,0xba,0xf3,0x07},{0xab,0x9c,0x4c,0xa3,0x6c,0xcd,0xd7,0xf5,0x5e,0xcb,0x2e,0x4c,0x91,0xf0,0xc6,0x4e,0x1a,0x18,0x07,0xaa,0xb4,0xc1,0xcb,0x6d,0x13,0xfc,0x7e,0x7c,0x75,0xb1,0x84,0x89,0xa0,0x7b,0xc9,0x7d,0x30,0xc5,0xcd,0xf3,0x88,0x24,0x7e,0xdc,0xf8,0xcc,0x90,0xed,0x64,0x4c,0x08,0xbf,0x18,0xe5,0x7a,0xbd,0x93,0x99,0x8f,0xb5,0x4b,0xbb,0x39,0x47},"\xb5\xf6\xaf\x3d\x6d\x9b\x06\xcd\x26\x19\xd2\x87\x70\x8a\x7a\x0d\x93\x2b\xc7\x02\xb7\xc2\x4c\xb9\x0c"},
{{0x46,0x21,0x7e,0x44,0x02,0xde,0xd3,0xce,0xc9,0xcc,0xf7,0xd7,0x8d,0x82,0x63,0xef,0x4a,0xb6,0x1a,0x0d,0x23,0x91,0x0b,0xdf,0xf0,0x28,0x43,0x3d,0xc6,0xd7,0x36,0xb0},{0x09,0x57,0x84,0xab,0xf7,0x97,0x78,0x22,0xf7,0x31,0x15,0xa3,0xfc,0x48,0x32,0x5f,0x0f,0xde,0x14,0x28,0xc7,0xfa,0x08,0x21,0x09,0xd6,0xae,0xfd,0x4a,0x1a,0xa6,0x47},{0xca,0x1c,0xea,0xf4,0x55,0x5c,0x66,0x96,0x23,0x4d,0xf1,0xb3,0x97,0xbb,0x28,0x86,0xac,0x0d,0x33,0x94,0xaa,0x35,0xe7,0x48,0x35,0x1b,0x02,0x75,0x89,0x6b,0x65,0xa1,0x12,0x45,0x15,0x4c,0xa2,0xdc,0x31,0xa7,0x00,0x5b,0x87,0x17,0x20,0x5d,0x91,0x28,0xd9,0x4a,0x96,0xbb,0x6d,0x69,0x99,0xfc,0xff,0x71,0x51,0xda,0xb2,0xf5,0x76,0xe9,0xc4,0xa1,0x18,0x9e,0x3a,0xe5,0xd5,0xb9,0xf5,0xe6,0xc9,0xb8,0xa9,0x0b,0x49,0x00},{0x5a,0xee,0x58,0x97,0x6a,0xec,0xf4,0x22,0xab,0x4e,0x15,0x74,0xaf,0x85,0x75,0x10,0x44,0x34,0x59,0x1c,0x8d,0x60,0x7c,0x74,0x9a,0xbf,0x9e,0x80,0x7b,0x3d,0x9f,0xe4,0xe8,0x96,0x34,0xb2,0x79,0x50,0xbc,0xb9,0x1c,0x3a,0x33,0x2a,0x74,0xf9,0x36,0x3b,0x6f,0xae,0xb3,0x9c,0x50,0x26,0xaf,0xbe,0x4a,0x13,0x0a,0xf6,0x8e,0x2a,0x90,0x36},"\x1d\x53\x90\xb7\x2c\x5e\x8c\xb5\x4b\xff\x23\x9b\xaf\x63\x51\xa0\x98\xa8\x6e\xa9\xe0\xe7\x18\x8e\x9e\x94"},
{{0x30,0x7d,0xfc,0x17,0xf2,0xdb,0x83,0xc6,0x67,0x8e,0xc0,0x50,0x15,0xbd,0x39,0x9f,0xa5,0x0a,0xc3,0xd8,0xb8,0xe9,0x5b,0x7f,0xbf,0xb9,0xf8,0xf9,0x2d,0xcb,0x72,0x3e},{0xeb,0x8d,0x10,0xe8,0x71,0x1f,0x75,0x24,0x8d,0xd1,0x87,0xd2,0x33,0x44,0x5d,0x8f,0x69,0x01,0xbe,0x05,0x92,0x1d,0xac,0x4d,0xf5,0x87,0xa6,0x57,0x8d,0x00,0x17,0xe0},{0x24,0x76,0x4a,0x4b,0x87,0x5b,0x54,0x0c,0xb7,0xfc,0x45,0x4a,0xf5,0xb3,0x5c,0xc4,0xc5,0xb8,0xf7,0x83,0xde,0x50,0xa3,0x41,0x5b,0xaf,0x60,0x44,0xd5,0x11,0x48,0x84,0xf2,0x80,0x56,0xde,0x90,0x98,0xae,0xc2,0x1e,0x58,0x16,0xcc,0x97,0x34,0x9c,0x7c,0xba,0x71,0x35,0x80,0x4b,0x9b,0x7a,0x81,0x3b,0x81,0xc0,0xaf,0xb3,0xda,0xda,0x4a,0x75,0x8d,0xf9,0x7a,0x8e,0xce,0x73,0x36,0xf4,0x66,0x07,0xf7,0xf2,0x63,0xb4,0x08},{0x6e,0xcb,0x3e,0xf1,0xa7,0xa1,0x30,0xf5,0xd8,0xb3,0x7f,0xf4,0xc6,0x24,0x42,0x42,0x21,0x80,0x89,0x6e,0x2f,0xeb,0x5e,0xb2,0x01,0x49,0x45,0x43,0x3d,0x36,0x62,0x8b,0x4e,0x2a,0x9a,0xdd,0xc6,0x89,0xcd,0x46,0x5d,0xd1,0x1f,0x16,0xbe,0x80,0xdf,0x6f,0x7c,0xf6,0xae,0x03,0x86,0x1f,0xb5,0x50,0x83,0x7b,0x6c,0x60,0xac,0xfb,0x47,0xcb},"\x6b\xb5\x2c\x5c\xc8\xe2\xfc\x79\xdf\xe2\xfe\xcd\x25\x2a\x67\x31\x7d\x52\xbd\x65\x26\xdb\xbc\x04\x05\x0f\x5b"},
{{0x7f,0x73,0xa4,0x2e,0x22,0x27,0x95,0x56,0x95,0xa5,0x2f,0x83,0x15,0xf1,0xfb,0xfb,0x19,0x8a,0xc5,0x35,0x98,0xe0,0xbc,0x7b,0xa9,0x0b,0x66,0x7f,0x6b,0xaf,0x66,0x90},{0xd1,0x33,0x0b,0xed,0xcc,0xd8,0x1f,0xd0,0x97,0x35,0x71,0x57,0x5b,0x1c,0xc7,0x39,0xb1,0x09,0x40,0xc3,0xba,0x0c,0x10,0x31,0xd8,0xce,0xa7,0xed,0xe0,0x59,0x82,0x99},{0x20,0x04,0xbe,0x37,0x8f,0x4b,0x31,0xf5,0x40,0x2d,0x6b,0xe3,0xa5,0xa5,0xea,0xc9,0x33,0x81,0xd8,0x79,0x9f,0xe0,0xc4,0xd6,0x91,0x38,0x19,0x92,0x5e,0x78,0x0d,0xdf,0xb0,0x9c,0xd2,0xa9,0x34,0xc0,0x21,0x4d,0xf6,0xc5,0x6b,0x40,0x53,0x29,0xbb,0xbc,0x81,0xa8,0x5d,0x00,0x7c,0x5d,0x0a,0x3c,0xde,0x21,0x82,0x20,0x3a,0xf8,0x5e,0x63,0x56,0xff,0x5b,0xf4,0xd7,0xed,0x6f,0xb9,0x52,0x9f,0x3b,0xdb,0x39,0x6c,0xa7,0x07},{0x1e,0xd3,0x3b,0xb2,0x04,0x00,0x04,0x13,0x11,0x0e,0xa8,0x30,0xcb,0xb4,0x23,0x45,0xe9,0x34,0x0a,0xad,0x92,0x69,0x0a,0x78,0x99,0x82,0x30,0x92,0x6f,0x5e,0x79,0x3c,0xc6,0x06,0xcd,0xc6,0xeb,0x1c,0x5c,0xc7,0xf9,0x0e,0x06,0xb2,0xc8,0x9e,0x11,0x0d,0xcf,0x7f,0x0b,0x73,0xc5,0x25,0x64,0x14,0x63,0x81,0x7a,0x54,0x61,0x41,0x53,0xcd},"\x34\x8d\xd0\xc3\x47\x75\x81\x96\xbd\x77\x40\x8d\x62\xd9\xc5\x61\xd2\xd5\x72\x77\x3b\x7e\x2e\x3b\xb8\xc9\xb6\x89"},
{{0x3f,0x76,0x95,0xff,0x8e,0x05,0x24,0xeb,0x1a,0x7b,0xac,0x9b,0x2c,0xea,0xba,0x64,0x23,0x2d,0xca,0x02,0x2a,0x1c,0xd3,0xce,0x75,0x32,0x90,0xd1,0x5f,0xe9,0xeb,0x12},{0x5c,0xa0,0xed,0x2b,0x77,0x4a,0xdf,0x3b,0xae,0x5e,0x3e,0x7d,0xa2,0xf8,0xec,0x87,0x7d,0x9f,0x06,0x3c,0xc3,0xd7,0x05,0x0a,0x6c,0x49,0xdf,0xbb,0xe2,0x64,0x1d,0xec},{0x02,0x18,0x0c,0x44,0x73,0x20,0xb6,0x60,0x12,0x42,0x09,0x71,0xb7,0x0b,0x44,0x8d,0x11,0xfe,0xad,0x6d,0x6e,0x33,0x4c,0x39,0x8f,0x4d,0xaf,0x01,0xcc,0xd9,0x2b,0xfb,0xcc,0x4a,0x87,0x30,0xa2,0x96,0xab,0x33,0x24,0x1f,0x72,0xda,0x3c,0x3a,0x1f,0xd5,0x3f,0x12,0x06,0xa2,0xb9,0xf2,0x7f,0xf6,0xa5,0xd9,0xb8,0x86,0x0f,0xd9,0x55,0xc3,0x9f,0x55,0xf9,0x29,0x3a,0xb5,0x8d,0x1a,0x2c,0x18,0xd5,0x55,0xd2,0x68,0x61,0x01},{0xde,0xb2,0x3f,0xdc,0x12,0x67,0xfa,0x44,0x7f,0xb0,0x87,0x79,0x65,0x44,0xce,0x02,0xb0,0x58,0x0d,0xf8,0xf1,0x92,0x74,0x50,0xbe,0xd0,0xdf,0x13,0x4d,0xdc,0x35,0x48,0x07,0x5e,0xd4,0x8f,0xfd,0x72,0xae,0x2a,0x9e,0xa6,0x5f,0x79,0x42,0x9c,0xfb,0xe2,0xe1,0x5b,0x62,0x5c,0xb2,0x39,0xad,0x0e,0xc3,0x91,0x00,0x03,0x76,0x5a,0x8e,0xb3},"\xfc\x9f\x71\x97\x40\xf9\x00\xee\x28\x09\xf6\xfd\xcf\x31\xbb\x6f\x09\x6f\x0a\xf1\x33\xc6\x04\xa2\x7a\xaf\x85\x37\x9c"},
{{0xac,0x21,0xb0,0x30,0x3e,0xd8,0xb5,0x12,0x3a,0xe3,0xbf,0x13,0xf2,0xc6,0x27,0xdc,0x9b,0x9c,0x2e,0x04,0xcf,0x1c,0x73,0x23,0x64,0xcf,0xe4,0x72,0xa5,0xf1,0x45,0xc2},{0x5b,0x14,0xfd,0xe6,0xdb,0x37,0xa5,0x30,0x2f,0x01,0x50,0xa7,0x3f,0x6a,0xda,0x5a,0x05,0xa8,0x10,0xa2,0x4c,0x65,0x64,0x82,0xcb,0xde,0xb5,0x10,0x20,0xe9,0x2f,0xe7},{0x31,0xcd,0xab,0x62,0x0b,0xdf,0x82,0x31,0xab,0xce,0xe3,0x2d,0x61,0x5a,0xf3,0x46,0x49,0xe6,0x9b,0x13,0x22,0x86,0xcc,0x59,0xf9,0x50,0xf2,0x35,0x52,0x84,0xd9,0x53,0xa6,0xb7,0xea,0x97,0x5a,0x2f,0xd8,0x9a,0xf4,0x43,0xa1,0x5c,0x07,0x63,0x99,0xf3,0x90,0xc9,0x4a,0x6a,0xa3,0xf5,0xdb,0xf8,0xe1,0x57,0x67,0x80,0xa7,0xe1,0x6f,0xa4,0x8c,0x3a,0x09,0x59,0x72,0xac,0x3a,0xb1,0xe1,0xaa,0x07,0x6d,0x92,0x46,0xac,0x09},{0x15,0x2d,0xca,0x76,0x91,0x2d,0x4a,0x38,0x60,0x6f,0x46,0xd9,0x0d,0x4b,0x87,0x8b,0x3e,0x60,0xb9,0xce,0xf8,0x74,0x0e,0xf3,0x22,0x29,0x0f,0x18,0xa6,0x7a,0xd4,0x8e,0x71,0x6f,0x41,0x2e,0x70,0x13,0xd5,0xe1,0xee,0x4c,0x4a,0xaf,0x5e,0x7f,0x86,0xd1,0x58,0x24,0x9b,0xcd,0x06,0x7f,0x5e,0x62,0xb6,0x2c,0x25,0xb7,0x16,0x6b,0x94,0x29},"\x23\x0d\xd4\xc8\x55\xc1\x33\xc5\xb3\xc2\x4a\x72\xaf\x9b\xbb\xc4\x82\x05\x98\x4e\xa4\xf2\x04\x5f\xea\xac\x17\xfe\x1a\xf9"},
};

static inline void printhex(const char *label, const unsigned char *c, size_t len){
	size_t i;
	printf("%s", label);
	for (i = 0; i < len; i++){
		printf("%02x", c[i]);
	}
	printf("\n");
}

int main(void)
{
	unsigned char sk[crypto_vrf_SECRETKEYBYTES];
	unsigned char pk[crypto_vrf_PUBLICKEYBYTES];
	unsigned char proof[crypto_vrf_PROOFBYTES];
	unsigned char output[crypto_vrf_OUTPUTBYTES];
	unsigned int i;

	assert(crypto_vrf_SECRETKEYBYTES == 64);
	assert(crypto_vrf_PUBLICKEYBYTES == 32);
	assert(crypto_vrf_SEEDBYTES == 32);
	assert(crypto_vrf_PROOFBYTES == 80);
	assert(crypto_vrf_OUTPUTBYTES == 64);

	for (i = 0U; i < (sizeof test_data) / (sizeof test_data[0]); i++) {
		memset(sk, 0, sizeof sk);
		memset(pk, 0, sizeof pk);
		memset(proof, 0, sizeof proof);
		memset(output, 0, sizeof output);
		crypto_vrf_keypair_from_seed(pk, sk, test_data[i].seed);
		if (memcmp(pk, test_data[i].pk, crypto_vrf_PUBLICKEYBYTES) != 0){
			printf("keypair_from_seed produced wrong pk: [%u]\n", i);
			printhex("\tWanted: ", test_data[i].pk, crypto_vrf_PUBLICKEYBYTES);
			printhex("\tGot:    ", pk, crypto_vrf_PUBLICKEYBYTES);
			continue;
		}
		if (!crypto_vrf_is_valid_key(pk)) {
			printf("crypto_vrf_is_valid_key() error: [%u]\n", i);
			continue;
		}
		if (crypto_vrf_prove(proof, sk, (const unsigned char*) test_data[i].msg, i) != 0){
			printf("crypto_vrf_prove() error: [%u]\n", i);
			continue;
		}
		if (memcmp(test_data[i].proof, proof, crypto_vrf_PROOFBYTES) != 0){
			printf("proof error: [%u]\n", i);
			printhex("\tWanted: ", test_data[i].proof, crypto_vrf_PROOFBYTES);
			printhex("\tGot:    ", proof, crypto_vrf_PROOFBYTES);
			continue;
		}
		if (crypto_vrf_verify(output, test_data[i].pk, proof, (const unsigned char*) test_data[i].msg, i) != 0){
			printf("verify error: [%u]\n", i);
			continue;
		}
		if (memcmp(output, test_data[i].output, crypto_vrf_OUTPUTBYTES) != 0){
			printf("output wrong: [%u]\n", i);
			printhex("\tWanted: ", test_data[i].output, crypto_vrf_OUTPUTBYTES);
			printhex("\tGot:    ", output, crypto_vrf_OUTPUTBYTES);
			continue;
		}

		proof[0] ^= 0x01;
		if (crypto_vrf_verify(output, test_data[i].pk, proof, (const unsigned char*) test_data[i].msg, i) == 0){
			printf("verify succeeded with bad gamma: [%u]\n", i);
			continue;
		}
		proof[0] ^= 0x01;
		proof[32] ^= 0x01;
		if (crypto_vrf_verify(output, test_data[i].pk, proof, (const unsigned char*) test_data[i].msg, i) == 0){
			printf("verify succeeded with bad c value: [%u]\n", i);
			continue;
		}
		proof[32] ^= 0x01;
		proof[48] ^= 0x01;
		if (crypto_vrf_verify(output, test_data[i].pk, proof, (const unsigned char*) test_data[i].msg, i) == 0){
			printf("verify succeeded with bad s value: [%u]\n", i);
			continue;
		}
		proof[48] ^= 0x01;
		proof[79] ^= 0x80;
		if (crypto_vrf_verify(output, test_data[i].pk, proof, (const unsigned char*) test_data[i].msg, i) == 0){
			printf("verify succeeded with bad s value (high-order-bit flipped): [%u]\n", i);
			continue;
		}
		proof[79] ^= 0x80;

		if (i > 0) {
			if (crypto_vrf_verify(output, test_data[i].pk, proof, (const unsigned char*) test_data[i].msg, i-1) == 0){
				printf("verify succeeded with truncated message: [%u]\n", i);
				continue;
			}
		}

		if (crypto_vrf_proof_to_hash(output, proof) != 0){
			printf("crypto_vrf_proof_to_hash() error: [%u]\n", i);
			continue;
		}
		if (memcmp(output, test_data[i].output, crypto_vrf_OUTPUTBYTES) != 0){
			printf("output wrong: [%u]\n", i);
			continue;
		}
	}
	printf("%u tests\n", i);
	return 0;
}
