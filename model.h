#ifndef UUID140562524392032
#define UUID140562524392032

#include <EloquentTinyML.h>
#include <eloquent_tinyml/tensorflow.h>

#ifdef __has_attribute
#define HAVE_ATTRIBUTE(x) __has_attribute(x)
#else
#define HAVE_ATTRIBUTE(x) 0
#endif
#if HAVE_ATTRIBUTE(aligned) || (defined(__GNUC__) && !defined(__clang__))
#define DATA_ALIGN_ATTRIBUTE __attribute__((aligned(4)))
#else
#define DATA_ALIGN_ATTRIBUTE
#endif

#ifndef ARENA_SIZE
#define ARENA_SIZE 4096
#endif

/** model size = 3484 bytes **/
const unsigned char modelData[] DATA_ALIGN_ATTRIBUTE = { 0x1c, 0x00, 0x00, 0x00, 0x54, 0x46, 0x4c, 0x33, 0x14, 0x00, 0x20, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x04, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xdc, 0x00, 0x00, 0x00, 0x88, 0x07, 0x00, 0x00, 0x98, 0x07, 0x00, 0x00, 0x38, 0x0d, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2a, 0xf8, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x98, 0xff, 0xff, 0xff, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x00, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x36, 0xf9, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x00, 0x02, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xdc, 0xff, 0xff, 0xff, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x43, 0x4f, 0x4e, 0x56, 0x45, 0x52, 0x53, 0x49, 0x4f, 0x4e, 0x5f, 0x4d, 0x45, 0x54, 0x41, 0x44, 0x41, 0x54, 0x41, 0x00, 0x08, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6d, 0x69, 0x6e, 0x5f, 0x72, 0x75, 0x6e, 0x74, 0x69, 0x6d, 0x65, 0x5f, 0x76, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xa8, 0x06, 0x00, 0x00, 0xa0, 0x06, 0x00, 0x00, 0x50, 0x06, 0x00, 0x00, 0x34, 0x06, 0x00, 0x00, 0xe4, 0x05, 0x00, 0x00, 0x14, 0x05, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0xb4, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xe6, 0xf9, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x0e, 0x00, 0x08, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x32, 0x2e, 0x31, 0x32, 0x2e, 0x30, 0x2d, 0x64, 0x65, 0x76, 0x32, 0x30, 0x32, 0x33, 0x30, 0x31, 0x32, 0x34, 0x00, 0x00, 0x52, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x31, 0x2e, 0x31, 0x34, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x94, 0xf4, 0xff, 0xff, 0x98, 0xf4, 0xff, 0xff, 0x9c, 0xf4, 0xff, 0xff, 0xa0, 0xf4, 0xff, 0xff, 0x7e, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x1d, 0x48, 0x77, 0xc0, 0x4f, 0xfc, 0x88, 0xc0, 0x46, 0xa0, 0x1e, 0x40, 0x53, 0x68, 0x87, 0xc0, 0x76, 0x33, 0x17, 0x40, 0x49, 0x0b, 0xb5, 0x3e, 0x12, 0xce, 0x75, 0xc0, 0x20, 0x6c, 0xda, 0xbf, 0x20, 0x8e, 0xc0, 0x3d, 0x5c, 0x12, 0xe4, 0x3f, 0xcd, 0x41, 0x5a, 0xc0, 0xaa, 0x66, 0x3c, 0xc0, 0x9c, 0x4e, 0x68, 0xc0, 0xa4, 0x9b, 0x1d, 0x40, 0x59, 0x64, 0x5f, 0xc0, 0x05, 0x36, 0x1e, 0xbe, 0xca, 0xfa, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x18, 0xdf, 0xc9, 0x3e, 0x75, 0xb7, 0x6e, 0x3e, 0x04, 0xe0, 0x96, 0x3d, 0xb6, 0x56, 0xd7, 0xbe, 0xcc, 0x0d, 0x8d, 0xbd, 0xd4, 0xac, 0xa0, 0xbf, 0x6e, 0xf8, 0x1c, 0x3f, 0x45, 0xca, 0xdb, 0xbf, 0xb8, 0xa0, 0xfd, 0xbf, 0x01, 0x1f, 0x04, 0xc0, 0x14, 0x6e, 0xe3, 0xbf, 0x38, 0x88, 0xc7, 0x3f, 0xf9, 0xd7, 0x51, 0x3e, 0xdd, 0x45, 0x53, 0x3c, 0xe9, 0x60, 0x0a, 0xc0, 0xda, 0x7a, 0xcf, 0x3d, 0x7b, 0xc3, 0x7f, 0x3e, 0xde, 0x01, 0x9e, 0xbe, 0x4e, 0x08, 0x62, 0x3e, 0xb0, 0xfd, 0x9b, 0xbe, 0x00, 0x72, 0xfb, 0xba, 0x61, 0x19, 0x80, 0xbf, 0x37, 0xf4, 0xd0, 0x3e, 0xca, 0x84, 0x9d, 0xbf, 0x51, 0x2c, 0xe3, 0xbf, 0xf3, 0x5a, 0xdd, 0xbf, 0x0f, 0x86, 0xdd, 0xbf, 0x7f, 0xa1, 0xc0, 0x3f, 0x32, 0xe4, 0xe1, 0xbd, 0x38, 0x36, 0xf2, 0x3e, 0x07, 0xcc, 0x1b, 0xc0, 0xa5, 0x38, 0x86, 0x3e, 0x9e, 0x3a, 0x21, 0xbf, 0xe1, 0xd9, 0x2d, 0x3f, 0x10, 0x1b, 0xaa, 0xbd, 0xf0, 0x55, 0x8f, 0xbc, 0x62, 0x53, 0x8a, 0xbe, 0x8b, 0x41, 0xe7, 0x3f, 0x8b, 0x91, 0x18, 0xbe, 0x14, 0x37, 0x5d, 0x3f, 0x45, 0xda, 0x17, 0x40, 0xb7, 0x11, 0x10, 0x40, 0xe4, 0x97, 0x04, 0x40, 0xf7, 0xa3, 0x5f, 0xbf, 0xb3, 0x63, 0x39, 0xbe, 0x4a, 0x03, 0x52, 0x3d, 0x41, 0xf6, 0x1c, 0x40, 0xae, 0xae, 0x17, 0xbe, 0x4a, 0xdd, 0x43, 0x3f, 0x26, 0xfa, 0xa0, 0x3e, 0x74, 0x5f, 0x8c, 0xbe, 0x00, 0x34, 0xfd, 0x3a, 0x10, 0xc7, 0x38, 0xbd, 0x74, 0xe8, 0xb0, 0xbf, 0x86, 0x74, 0x76, 0x3d, 0x60, 0x0c, 0xab, 0xbf, 0x5d, 0x16, 0xde, 0xbf, 0x5c, 0xcd, 0x03, 0xc0, 0x02, 0x27, 0xc8, 0xbf, 0xf1, 0x90, 0xb1, 0x3f, 0x7f, 0x26, 0x5e, 0x3e, 0x92, 0x1d, 0x70, 0xbd, 0x4a, 0xa8, 0x1b, 0xc0, 0x14, 0xf9, 0x6d, 0xbe, 0x97, 0x3c, 0x9b, 0xbd, 0x02, 0xca, 0xfd, 0xbe, 0x29, 0xc5, 0xd2, 0x3e, 0xa7, 0xb0, 0xc4, 0xbe, 0xbe, 0xbe, 0x43, 0x3e, 0x97, 0xf2, 0xda, 0x3e, 0xef, 0x6f, 0x00, 0x3d, 0x15, 0xd9, 0xef, 0x3f, 0xbf, 0x3f, 0xd4, 0x3f, 0x0a, 0x1a, 0xb6, 0x3e, 0x14, 0x81, 0x07, 0x40, 0xa0, 0x9c, 0xa4, 0xbf, 0x36, 0xe6, 0xc3, 0x3e, 0x12, 0xa8, 0xcd, 0x3e, 0xaa, 0xd4, 0x33, 0x40, 0xe0, 0xa0, 0x9c, 0xbd, 0x5d, 0xff, 0xf2, 0x3d, 0xb0, 0xdd, 0xb7, 0xbe, 0x3c, 0xb6, 0x07, 0xbe, 0xac, 0xfd, 0xe9, 0xbd, 0x10, 0x44, 0xa0, 0xbd, 0x64, 0x9b, 0xb5, 0x3e, 0x82, 0x0d, 0x80, 0x3e, 0x73, 0xd6, 0x9e, 0x3e, 0x4f, 0xb5, 0x73, 0xbe, 0xe4, 0xe9, 0xe6, 0xbd, 0x00, 0x8b, 0xfb, 0x3b, 0x15, 0x89, 0xf2, 0x3d, 0x62, 0xc3, 0xd8, 0xbc, 0xfe, 0x74, 0x95, 0xbe, 0xcb, 0x40, 0xc8, 0xbe, 0x20, 0xf7, 0x69, 0x3c, 0x3e, 0x18, 0x71, 0x3d, 0xa5, 0xec, 0x3f, 0xbe, 0x02, 0x4b, 0x65, 0x3e, 0xf4, 0x4e, 0xda, 0xbd, 0x9a, 0x47, 0x95, 0xbe, 0x98, 0xcc, 0x84, 0xbf, 0xdb, 0xb4, 0x8e, 0x3e, 0x43, 0x76, 0xb6, 0xbf, 0xe1, 0x73, 0xe7, 0xbf, 0x6c, 0xe4, 0xd8, 0xbf, 0x53, 0x8f, 0x01, 0xc0, 0x8b, 0xc7, 0xbc, 0x3f, 0x7c, 0xba, 0x03, 0x3e, 0x6c, 0x3a, 0xcc, 0x3e, 0x79, 0x22, 0x07, 0xc0, 0xe5, 0xca, 0x07, 0x3e, 0xce, 0x86, 0xce, 0x3e, 0x5c, 0xdc, 0xc8, 0xbe, 0xd2, 0x44, 0x71, 0x3e, 0xe3, 0x89, 0xc8, 0x3e, 0x80, 0xdc, 0xf8, 0xbc, 0xf7, 0x31, 0xaa, 0x3e, 0x2a, 0x58, 0x05, 0xbf, 0xc5, 0x03, 0x6f, 0x3c, 0x19, 0x65, 0xfe, 0x3d, 0x55, 0x6e, 0xb4, 0x3e, 0xa3, 0x7a, 0xc6, 0xbe, 0xbc, 0xae, 0xc0, 0x3f, 0xf9, 0xcb, 0x2f, 0x3f, 0xe2, 0x42, 0xf7, 0xbd, 0x09, 0x72, 0x30, 0xbc, 0xb1, 0x7a, 0xa9, 0x3e, 0x1e, 0xe4, 0xb8, 0xbe, 0xff, 0x83, 0x9d, 0xbe, 0xa0, 0xba, 0xd7, 0xbc, 0xb4, 0xf4, 0xc1, 0xbd, 0x0e, 0x05, 0x1a, 0x3e, 0xe5, 0x27, 0xd3, 0x3e, 0xa7, 0xd0, 0xd3, 0xbe, 0x9b, 0x44, 0x8e, 0x3e, 0x48, 0x79, 0x0c, 0xbd, 0xe2, 0xf8, 0x83, 0xbe, 0xa4, 0xd2, 0x01, 0xbe, 0x1e, 0x6d, 0x1a, 0x3e, 0x14, 0x85, 0xb2, 0x3d, 0xc2, 0xac, 0xad, 0xbe, 0xde, 0xa3, 0xab, 0xbe, 0xee, 0x11, 0x1e, 0xbe, 0xb7, 0x17, 0xea, 0xbd, 0x9d, 0x83, 0x10, 0xbf, 0x7c, 0xad, 0x7a, 0xbe, 0xc2, 0xf4, 0x44, 0xbe, 0x10, 0xd2, 0xc8, 0xbc, 0xc1, 0x87, 0xd7, 0x3e, 0xa0, 0x34, 0x74, 0xbe, 0x43, 0x52, 0x3d, 0xbe, 0x63, 0x06, 0x0d, 0xbe, 0x5c, 0x89, 0x3a, 0xbf, 0xb8, 0xf3, 0x6c, 0x3f, 0x98, 0x75, 0x9f, 0xbe, 0x20, 0xa0, 0x0f, 0xbf, 0x7e, 0x33, 0xfb, 0xbc, 0xdc, 0xbb, 0x1a, 0x3e, 0x3a, 0x97, 0x3a, 0xbe, 0xc4, 0xb2, 0xd3, 0x3e, 0x65, 0x0c, 0x8b, 0xbe, 0x1d, 0x0a, 0x8d, 0x3e, 0x78, 0x11, 0x35, 0x3d, 0x36, 0xe4, 0x53, 0x3e, 0xee, 0x46, 0x90, 0xbf, 0xf3, 0xe8, 0xd7, 0x3e, 0x04, 0x50, 0xcd, 0xbf, 0x4c, 0xd5, 0xe8, 0xbf, 0xaf, 0x8d, 0xd7, 0xbf, 0x33, 0x9b, 0x06, 0xc0, 0xa2, 0x2b, 0x91, 0x3f, 0x53, 0x6c, 0x9e, 0x3e, 0x11, 0x95, 0xd4, 0x3e, 0x3e, 0x71, 0x25, 0xc0, 0xb3, 0xee, 0x03, 0x3e, 0xb9, 0x31, 0x8a, 0x3e, 0x6c, 0x50, 0x80, 0xbd, 0x21, 0xeb, 0xae, 0xbe, 0xde, 0x94, 0x41, 0xbe, 0x7e, 0x21, 0x4f, 0x3e, 0x56, 0x54, 0x32, 0xbf, 0xf7, 0xdb, 0xfe, 0x3e, 0x38, 0x11, 0x7c, 0xbf, 0xc1, 0x02, 0xc7, 0xbf, 0x1f, 0x89, 0xfd, 0xbf, 0xc2, 0x57, 0xe5, 0xbf, 0xa6, 0x5a, 0xa1, 0x3f, 0xee, 0xa0, 0xcc, 0xbd, 0x8a, 0xc2, 0x6b, 0x3e, 0x5c, 0x0f, 0xeb, 0xbf, 0x61, 0xb9, 0xfd, 0xbd, 0xbc, 0x68, 0x03, 0x3f, 0x77, 0x70, 0x6e, 0xbe, 0xb6, 0x9c, 0x75, 0x3e, 0x54, 0x0d, 0x94, 0xbd, 0x17, 0x13, 0xbc, 0x3e, 0x72, 0x89, 0x5b, 0xbf, 0x59, 0xcc, 0xe2, 0x3e, 0xbd, 0xed, 0xb3, 0xbf, 0x9b, 0x3c, 0xf2, 0xbf, 0x48, 0x5a, 0xd0, 0xbf, 0x4b, 0x65, 0xd5, 0xbf, 0xa1, 0x4a, 0x9c, 0x3f, 0xde, 0xfc, 0x3f, 0xbe, 0x23, 0xf1, 0x74, 0x3e, 0xe4, 0x9a, 0x10, 0xc0, 0xe0, 0x4a, 0x3d, 0x3c, 0xad, 0x6d, 0x96, 0xbe, 0x94, 0x63, 0x3f, 0x3f, 0xd0, 0xe2, 0x2d, 0xbe, 0x36, 0xc9, 0x10, 0x3e, 0xd6, 0x97, 0xbd, 0xbe, 0x07, 0xf3, 0x99, 0x3f, 0xa4, 0xb0, 0x81, 0xbe, 0xf2, 0xb8, 0xc1, 0x3f, 0x8f, 0xfd, 0xf5, 0x3f, 0x27, 0x04, 0x0f, 0x40, 0x7e, 0xd1, 0x0b, 0x40, 0x4b, 0xb1, 0x2c, 0xbf, 0x9b, 0xb7, 0xdb, 0xbc, 0x7f, 0x13, 0xdf, 0x3c, 0x40, 0xf4, 0x00, 0x40, 0xa5, 0xad, 0xbf, 0xbe, 0x27, 0x1d, 0x17, 0x3f, 0xbc, 0xe1, 0xa8, 0xbe, 0xee, 0x5e, 0x28, 0x3e, 0x88, 0x74, 0x41, 0x3d, 0xbc, 0xb7, 0x91, 0x3d, 0xab, 0x5d, 0x88, 0xbf, 0x87, 0x0d, 0x8b, 0x3e, 0xee, 0x79, 0xce, 0xbf, 0xba, 0x2c, 0xcf, 0xbf, 0x7d, 0xcc, 0xeb, 0xbf, 0xd9, 0xd6, 0x0a, 0xc0, 0x05, 0x66, 0x74, 0x3f, 0x89, 0xd5, 0x12, 0x3e, 0xae, 0x9e, 0xe5, 0x3e, 0x35, 0xe2, 0x21, 0xc0, 0xba, 0xeb, 0x40, 0x3e, 0x31, 0x39, 0xc1, 0xbe, 0x67, 0x7f, 0x89, 0xbe, 0x83, 0x31, 0xd9, 0x3e, 0x16, 0x06, 0x33, 0x3e, 0x0e, 0x4a, 0x11, 0x3e, 0x74, 0xaf, 0xc6, 0x3d, 0xac, 0x6c, 0xd7, 0xbe, 0x90, 0x95, 0xdf, 0x3c, 0x6a, 0xec, 0xd3, 0x3e, 0x8a, 0x30, 0x28, 0x3e, 0x7c, 0x4a, 0x3b, 0x3d, 0xca, 0x87, 0x3b, 0x3e, 0xc5, 0x4f, 0xca, 0xbe, 0x4e, 0x67, 0xfa, 0x3d, 0x7b, 0x5f, 0x3d, 0xbe, 0x7e, 0xfc, 0x6f, 0xbe, 0xd6, 0xfe, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 0x8b, 0x75, 0x10, 0x39, 0xe0, 0x45, 0x09, 0x3f, 0x8e, 0x17, 0x02, 0xbf, 0x79, 0x74, 0xb1, 0x3e, 0x87, 0x7c, 0x83, 0xbe, 0xb9, 0x2e, 0x9c, 0x3f, 0xa4, 0x51, 0x08, 0xbf, 0x3e, 0x57, 0xa2, 0xbe, 0xd7, 0xa7, 0xd9, 0xbe, 0x54, 0x81, 0x9b, 0xbe, 0x8e, 0xe5, 0xe7, 0xbe, 0xd2, 0x1f, 0xbc, 0xbe, 0x60, 0xd5, 0xd6, 0x3c, 0x40, 0x77, 0xd5, 0xbe, 0x50, 0x06, 0x9a, 0xbd, 0x61, 0x94, 0x8b, 0xbe, 0x4d, 0x4c, 0x08, 0x3e, 0x4c, 0x17, 0x9a, 0x3f, 0x71, 0x69, 0xa7, 0x3e, 0xb7, 0x65, 0xf5, 0x3c, 0x36, 0xa8, 0xed, 0xbe, 0x45, 0x6f, 0x4e, 0x3d, 0x12, 0xfe, 0x2f, 0x3f, 0xc3, 0x2d, 0xfa, 0xbe, 0x68, 0x07, 0x07, 0x3f, 0x23, 0x25, 0x5e, 0xbf, 0x87, 0xa2, 0x4a, 0xbf, 0x16, 0xec, 0xd0, 0xbd, 0x25, 0xfa, 0xb7, 0x3c, 0x3f, 0xf8, 0x99, 0x3f, 0xba, 0xbf, 0x15, 0x3e, 0xd1, 0xd7, 0x02, 0xbf, 0xfa, 0x6a, 0x6d, 0xbf, 0x1f, 0x3d, 0x1f, 0xbf, 0x98, 0x8e, 0x43, 0x3f, 0x26, 0x99, 0x95, 0x3e, 0x45, 0x71, 0x2a, 0xbe, 0xb3, 0x94, 0x28, 0x3f, 0x0c, 0x96, 0x7c, 0xbe, 0xcb, 0x61, 0x06, 0x3f, 0x46, 0x61, 0x8a, 0x3e, 0xcd, 0xd2, 0x01, 0xbf, 0xa9, 0x80, 0x2a, 0xbd, 0xb5, 0x16, 0x3e, 0x3f, 0x76, 0xef, 0xa1, 0xbf, 0x27, 0xe5, 0xe3, 0x3c, 0xfb, 0x64, 0xcb, 0xbd, 0xb7, 0xae, 0x37, 0xbd, 0xa2, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x03, 0x8c, 0x1d, 0x3e, 0x96, 0x24, 0x0d, 0xbe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x7e, 0xd6, 0x3c, 0xa9, 0x02, 0x24, 0x3e, 0x94, 0x1c, 0x84, 0xbe, 0x66, 0xd7, 0xc2, 0x3d, 0x6b, 0xa7, 0x4a, 0xbe, 0x86, 0xd3, 0xb3, 0x3e, 0xcd, 0x3c, 0x3a, 0xbd, 0xf6, 0x02, 0xa7, 0x3d, 0x4b, 0x80, 0x3f, 0x3e, 0xfa, 0xbb, 0xc0, 0xbd, 0x28, 0xf1, 0x84, 0xbc, 0xee, 0xff, 0xff, 0xff, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x8f, 0x04, 0x53, 0x3d, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xd9, 0xf9, 0x55, 0x3e, 0xe1, 0xc7, 0x54, 0x3e, 0x70, 0xf5, 0x86, 0x3c, 0x7a, 0x03, 0x94, 0x3e, 0x38, 0x89, 0x2a, 0xbe, 0xd5, 0xa9, 0xe4, 0xbd, 0xa9, 0x8a, 0x84, 0x3e, 0x72, 0xb3, 0x91, 0xbd, 0xc7, 0xbb, 0xa9, 0xae, 0x57, 0x86, 0xd9, 0x3e, 0xee, 0x12, 0x37, 0x3e, 0x41, 0xf0, 0x41, 0x3e, 0x66, 0xd9, 0x6b, 0x3e, 0x1a, 0x7f, 0x7a, 0xbc, 0x1d, 0xf7, 0x69, 0x3e, 0xfd, 0xff, 0x40, 0xbb, 0x78, 0xfa, 0xff, 0xff, 0x7c, 0xfa, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x4d, 0x4c, 0x49, 0x52, 0x20, 0x43, 0x6f, 0x6e, 0x76, 0x65, 0x72, 0x74, 0x65, 0x64, 0x2e, 0x00, 0x01, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x18, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xb0, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x9a, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x24, 0xfb, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xca, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0xba, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x16, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x04, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x94, 0x03, 0x00, 0x00, 0x24, 0x03, 0x00, 0x00, 0xd0, 0x02, 0x00, 0x00, 0x88, 0x02, 0x00, 0x00, 0x3c, 0x02, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x68, 0x01, 0x00, 0x00, 0xd8, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x3e, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x28, 0xfc, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x53, 0x74, 0x61, 0x74, 0x65, 0x66, 0x75, 0x6c, 0x50, 0x61, 0x72, 0x74, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x65, 0x64, 0x43, 0x61, 0x6c, 0x6c, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x96, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x80, 0xfc, 0xff, 0xff, 0x34, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0xf4, 0xfc, 0xff, 0xff, 0x4c, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x96, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x80, 0xfd, 0xff, 0xff, 0x46, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x52, 0x65, 0x6c, 0x75, 0x3b, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x86, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0xf4, 0xfd, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xce, 0xfe, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x3c, 0xfe, 0xff, 0xff, 0x19, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x16, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x84, 0xfe, 0xff, 0xff, 0x17, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x4d, 0x61, 0x74, 0x4d, 0x75, 0x6c, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x5a, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00, 0xc8, 0xfe, 0xff, 0xff, 0x27, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0xaa, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0x29, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x32, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x18, 0x00, 0x14, 0x00, 0x00, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x84, 0xff, 0xff, 0xff, 0x29, 0x00, 0x00, 0x00, 0x73, 0x65, 0x71, 0x75, 0x65, 0x6e, 0x74, 0x69, 0x61, 0x6c, 0x2f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x31, 0x2f, 0x42, 0x69, 0x61, 0x73, 0x41, 0x64, 0x64, 0x2f, 0x52, 0x65, 0x61, 0x64, 0x56, 0x61, 0x72, 0x69, 0x61, 0x62, 0x6c, 0x65, 0x4f, 0x70, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x1c, 0x00, 0x18, 0x00, 0x00, 0x00, 0x14, 0x00, 0x10, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x07, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x14, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x73, 0x65, 0x72, 0x76, 0x69, 0x6e, 0x67, 0x5f, 0x64, 0x65, 0x66, 0x61, 0x75, 0x6c, 0x74, 0x5f, 0x64, 0x65, 0x6e, 0x73, 0x65, 0x5f, 0x69, 0x6e, 0x70, 0x75, 0x74, 0x3a, 0x30, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0xf4, 0xff, 0xff, 0xff, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x0c, 0x00, 0x0c, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09 };

/**
 * Wrapper around the EloquentTinyML library
 */
template<uint32_t arenaSize>
class TensorFlowPorter {
    public:
        Eloquent::TinyML::TensorFlow::AllOpsTensorFlow<3, 2, arenaSize> tf;

        /**
         * Init model
         */
        bool begin() {
            return tf.begin(modelData);
        }

        /**
         * Proxy
         */
        uint8_t predict(uint8_t *input, uint8_t *output = NULL) {
            return tf.predict(input, output);
        }

        /**
         * Proxy
         */
        int8_t predict(int8_t *input, int8_t *output = NULL) {
            return tf.predict(input, output);
        }

        /**
         * Proxy
         */
        float predict(float *input, float *output = NULL) {
            return tf.predict(input, output);
        }

        /**
         * Proxy
         */
        template<typename T>
        uint8_t predictClass(T *input) {
            return tf.predictClass(input);
        }

        /**
         * Proxy
         */
        float getScoreAt(uint8_t index) {
            return tf.getScoreAt(index);
        }

        /**
         * Proxy
         */
        String getErrorMessage() {
            return tf.getErrorMessage();
        }
};



TensorFlowPorter<ARENA_SIZE> model;


#endif