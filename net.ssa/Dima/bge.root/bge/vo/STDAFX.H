//////////////////////////////////////////////////////////////////////////////////
//	Module			:	Precompiled header										//
//	File			:	stdafx.h												//
//	Creation date	:	14.12.2002												//
//	Author			:	Dmitriy Iassenev										//
//  Credits			:	Alexander Maksimchuk									//
//////////////////////////////////////////////////////////////////////////////////

#pragma once

#pragma comment(lib,"winmm.lib")

#include <conio.h>
#include <excpt.h>
#include <float.h>
#include <math.h>
#include <memory.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#include <mmintrin.h>

#pragma intrinsic(_inp,_inpw,_lrotl,_lrotr,_outp,_outpw,_rotl,_rotr,_strset,abs,fabs,labs,memcmp,memcpy,memset,strcat,strcmp,strcpy,strlen,acos,asin,cosh,fmod,pow,sinh,tanh,atan,exp,log10,sqrt,atan2,log,sin,tan,cos)

//////////////////////////////////////////////////////////
// types declarations
//////////////////////////////////////////////////////////

typedef	signed		__int8	s8;
typedef	unsigned	__int8	u8;

typedef	signed		__int16	s16;
typedef	unsigned	__int16	u16;

typedef	signed		__int32	s32;
typedef	unsigned	__int32	u32;

typedef	signed		__int64	s64;
typedef	unsigned	__int64	u64;

typedef float				f32;
typedef double				f64;

typedef char				TBoardCell;

//////////////////////////////////////////////////////////
// macroses
//////////////////////////////////////////////////////////

#define ALIGN(alignment)	__declspec(align(alignment))
#define IC					__forceinline
#ifdef _DEBUG 
	#define __ASSERT(bExpression) if (!(bExpression)) {printf("The BUG was noticed here : \n Module : %s \n Line : %d\n",__FILE__,__LINE__);__asm {int 3};}
#else
	#define __ASSERT(bExpression) ;
#endif

//////////////////////////////////////////////////////////
// constant macroses
//////////////////////////////////////////////////////////

#define INFINITY	16384

#define BOARD_SIZE  91
#define BOARD_START 10
#define BOARD_LINE   9

//////////////////////////////////////////////////////////
// conditional macroses
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
// writing log
//////////////////////////////////////////////////////////
#define WRITE_LOG

//////////////////////////////////////////////////////////
// profiling timers
//////////////////////////////////////////////////////////
//#define __PROFILE__

//////////////////////////////////////////////////////////
// mobility pattern indexes
//////////////////////////////////////////////////////////
#define __MPI__

//////////////////////////////////////////////////////////
// transposition tables
//////////////////////////////////////////////////////////
//#define STATIC_TT
//#define NO_HASH
