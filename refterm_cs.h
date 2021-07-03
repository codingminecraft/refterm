#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Input
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// no Output
cs_5_0
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[2], immediateIndexed
dcl_resource_structured t0, 12
dcl_resource_texture2d (float,float,float,float) t1
dcl_uav_typed_texture2d (float,float,float,float) u0
dcl_input vThreadID.xy
dcl_temps 5
dcl_thread_group 8, 8, 1
and r0.x, cb0[1].x, l(255)
itof r0.x, r0.x
ubfe r1.xy, l(8, 8, 0, 0), l(8, 16, 0, 0), cb0[1].xxxx
itof r0.yz, r1.xxyx
mad r0.xyz, r0.xyzx, l(0.003922, 0.003922, 0.003922, 0.000000), l(-1.000000, -1.000000, -1.000000, 0.000000)
udiv r1.xy, r2.xy, vThreadID.xyxx, cb0[0].xyxx
imad r0.w, r1.y, cb0[0].z, r1.x
ld_structured_indexable(structured_buffer, stride=12)(mixed,mixed,mixed,mixed) r1.xyz, r0.w, l(0), t0.xyzx
ushr r3.xw, r1.zzzx, l(31, 0, 0, 16)
utof r0.w, r3.x
mad r0.xyz, r0.wwww, r0.xyzx, l(1.000000, 1.000000, 1.000000, 0.000000)
ubfe r4.xyzw, l(8, 8, 8, 8), l(8, 16, 8, 16), r1.zzyy
and r3.xyz, r1.xzyx, l(0x0000ffff, 255, 255, 0)
itof r1.yz, r4.zzwz
itof r4.yz, r4.xxyx
itof r1.x, r3.z
mul r1.xyz, r1.xyzx, l(0.003922, 0.003922, 0.003922, 0.000000)
mul r0.xyz, r0.xyzx, r1.xyzx
imad r1.xy, r3.xwxx, cb0[0].xyxx, r2.xyxx
itof r4.x, r3.y
mul r2.xyz, r4.xyzx, l(0.003922, 0.003922, 0.003922, 0.000000)
mov r1.zw, l(0,0,0,0)
ld_indexable(texture2d)(float,float,float,float) r1.xyzw, r1.xyzw, t1.xyzw
mad r0.xyz, r1.xyzx, r0.xyzx, -r2.xyzx
mad r0.xyz, r1.wwww, r0.xyzx, r2.xyzx
mov r0.w, l(1.000000)
store_uav_typed u0.xyzw, vThreadID.xyyy, r0.xyzw
ret 
// Approximately 0 instruction slots used
#endif

const BYTE ReftermCSShaderBytes[] =
{
     68,  88,  66,  67, 227,  70, 
    254, 167, 114, 152, 105, 230, 
     31, 144, 154, 175,  30, 103, 
    144,  21,   1,   0,   0,   0, 
    112,   4,   0,   0,   3,   0, 
      0,   0,  44,   0,   0,   0, 
     60,   0,   0,   0,  76,   0, 
      0,   0,  73,  83,  71,  78, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   8,   0,   0,   0, 
     79,  83,  71,  78,   8,   0, 
      0,   0,   0,   0,   0,   0, 
      8,   0,   0,   0,  83,  72, 
     69,  88,  28,   4,   0,   0, 
     80,   0,   5,   0,   7,   1, 
      0,   0, 106,   8,   0,   1, 
     89,   0,   0,   4,  70, 142, 
     32,   0,   0,   0,   0,   0, 
      2,   0,   0,   0, 162,   0, 
      0,   4,   0, 112,  16,   0, 
      0,   0,   0,   0,  12,   0, 
      0,   0,  88,  24,   0,   4, 
      0, 112,  16,   0,   1,   0, 
      0,   0,  85,  85,   0,   0, 
    156,  24,   0,   4,   0, 224, 
     17,   0,   0,   0,   0,   0, 
     85,  85,   0,   0,  95,   0, 
      0,   2,  50,   0,   2,   0, 
    104,   0,   0,   2,   5,   0, 
      0,   0, 155,   0,   0,   4, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   1,   0,   0,   0, 
      1,   0,   0,   8,  18,   0, 
     16,   0,   0,   0,   0,   0, 
     10, 128,  32,   0,   0,   0, 
      0,   0,   1,   0,   0,   0, 
      1,  64,   0,   0, 255,   0, 
      0,   0,  43,   0,   0,   5, 
     18,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      0,   0,   0,   0, 138,   0, 
      0,  16,  50,   0,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0,   8,   0,   0,   0, 
      8,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,  64,   0,   0,   8,   0, 
      0,   0,  16,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   6, 128,  32,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0,  43,   0,   0,   5, 
     98,   0,  16,   0,   0,   0, 
      0,   0,   6,   1,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  15, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
      2,  64,   0,   0, 129, 128, 
    128,  59, 129, 128, 128,  59, 
    129, 128, 128,  59,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128, 191,   0,   0, 
    128, 191,   0,   0, 128, 191, 
      0,   0,   0,   0,  78,   0, 
      0,   9,  50,   0,  16,   0, 
      1,   0,   0,   0,  50,   0, 
     16,   0,   2,   0,   0,   0, 
     70,   0,   2,   0,  70, 128, 
     32,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  35,   0, 
      0,  10, 130,   0,  16,   0, 
      0,   0,   0,   0,  26,   0, 
     16,   0,   1,   0,   0,   0, 
     42, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     10,   0,  16,   0,   1,   0, 
      0,   0, 167,   0,   0, 139, 
      2,  99,   0, 128, 131, 153, 
     25,   0, 114,   0,  16,   0, 
      1,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
      1,  64,   0,   0,   0,   0, 
      0,   0,  70, 114,  16,   0, 
      0,   0,   0,   0,  85,   0, 
      0,  10, 146,   0,  16,   0, 
      3,   0,   0,   0, 166,   2, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0,  31,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  16,   0, 
      0,   0,  86,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,  10,   0,  16,   0, 
      3,   0,   0,   0,  50,   0, 
      0,  12, 114,   0,  16,   0, 
      0,   0,   0,   0, 246,  15, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0, 128,  63,   0,   0, 
    128,  63,   0,   0, 128,  63, 
      0,   0,   0,   0, 138,   0, 
      0,  15, 242,   0,  16,   0, 
      4,   0,   0,   0,   2,  64, 
      0,   0,   8,   0,   0,   0, 
      8,   0,   0,   0,   8,   0, 
      0,   0,   8,   0,   0,   0, 
      2,  64,   0,   0,   8,   0, 
      0,   0,  16,   0,   0,   0, 
      8,   0,   0,   0,  16,   0, 
      0,   0, 166,   5,  16,   0, 
      1,   0,   0,   0,   1,   0, 
      0,  10, 114,   0,  16,   0, 
      3,   0,   0,   0, 134,   1, 
     16,   0,   1,   0,   0,   0, 
      2,  64,   0,   0, 255, 255, 
      0,   0, 255,   0,   0,   0, 
    255,   0,   0,   0,   0,   0, 
      0,   0,  43,   0,   0,   5, 
     98,   0,  16,   0,   1,   0, 
      0,   0, 166,  11,  16,   0, 
      4,   0,   0,   0,  43,   0, 
      0,   5,  98,   0,  16,   0, 
      4,   0,   0,   0,   6,   1, 
     16,   0,   4,   0,   0,   0, 
     43,   0,   0,   5,  18,   0, 
     16,   0,   1,   0,   0,   0, 
     42,   0,  16,   0,   3,   0, 
      0,   0,  56,   0,   0,  10, 
    114,   0,  16,   0,   1,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,   2,  64, 
      0,   0, 129, 128, 128,  59, 
    129, 128, 128,  59, 129, 128, 
    128,  59,   0,   0,   0,   0, 
     56,   0,   0,   7, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70,   2,  16,   0, 
      1,   0,   0,   0,  35,   0, 
      0,  10,  50,   0,  16,   0, 
      1,   0,   0,   0, 198,   0, 
     16,   0,   3,   0,   0,   0, 
     70, 128,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
     70,   0,  16,   0,   2,   0, 
      0,   0,  43,   0,   0,   5, 
     18,   0,  16,   0,   4,   0, 
      0,   0,  26,   0,  16,   0, 
      3,   0,   0,   0,  56,   0, 
      0,  10, 114,   0,  16,   0, 
      2,   0,   0,   0,  70,   2, 
     16,   0,   4,   0,   0,   0, 
      2,  64,   0,   0, 129, 128, 
    128,  59, 129, 128, 128,  59, 
    129, 128, 128,  59,   0,   0, 
      0,   0,  54,   0,   0,   8, 
    194,   0,  16,   0,   1,   0, 
      0,   0,   2,  64,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,  45,   0, 
      0, 137, 194,   0,   0, 128, 
     67,  85,  21,   0, 242,   0, 
     16,   0,   1,   0,   0,   0, 
     70,  14,  16,   0,   1,   0, 
      0,   0,  70, 126,  16,   0, 
      1,   0,   0,   0,  50,   0, 
      0,  10, 114,   0,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  70,   2,  16, 128, 
     65,   0,   0,   0,   2,   0, 
      0,   0,  50,   0,   0,   9, 
    114,   0,  16,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   2,   0, 
      0,   0,  54,   0,   0,   5, 
    130,   0,  16,   0,   0,   0, 
      0,   0,   1,  64,   0,   0, 
      0,   0, 128,  63, 164,   0, 
      0,   6, 242, 224,  17,   0, 
      0,   0,   0,   0,  70,   5, 
      2,   0,  70,  14,  16,   0, 
      0,   0,   0,   0,  62,   0, 
      0,   1
};
