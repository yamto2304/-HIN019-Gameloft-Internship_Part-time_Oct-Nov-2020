#pragma once

#include <string>
#include "targetver.h"
#include "U_Math.h"
#include "ft2build.h"
#include FT_FREETYPE_H

#define BACKGROUND_SPEED 100

#define PLAYER_SPEED 300
#define PLAYER_SIZE 152
#define PLAYER_COOLDOWN 0.5f
#define PLAYER_DAMAGE 1

#define ENEMY_SPEED 200
#define ENEMY_SIZE 40
#define ENEMY_COOLDOWN 0.5f
#define FAST_ENEMY_COOLDOWN 1.0f

#define PLAYER_BULLET_SPEED -800
#define ENEMY_BULLET_SPEED 200
#define BULLET_SIZE 40

#define BASE_BULLET_POSITION 100,250
#define BASE_ENEMY_POSITION  300,100
#define ENEMY_GATE_1		 120,10
#define ENEMY_GATE_2		 240,10
#define ENEMY_GATE_3		 360,10

#define BUTTON_SIZE			 300, 100

#define HP_ENEMY_BASIC		 3
#define DAMAGE_ENEMY_BASIC	 2
#define DAMAGE_BOSS			 5
#define HP_ENEMY_FAST		 2
#define HP_BOSS				 25
#define HP_PLAYER			 20

#ifndef _WIN32_WINNT            // Specifies that the minimum required platform is Windows Vista.
#define _WIN32_WINNT 0x0600     // Change this to the appropriate value to target other versions of Windows.
#endif

#ifndef ANDROID	
#include <stdio.h>
#include <tchar.h>
#endif

// define game debug  -------------------	1: yes	0: no
#define GAME_DEBUG 1

// define value
#define PI 3.14f
#define MAX_DEGREE 360
// define vetex 
#define VETEX_POSITION			(char*)0
#define VETEX_NORM				(char*)0+(sizeof(Vector3))
#define VETEX_BITTANGEN			(char*)0+2*(sizeof(Vector3))
#define VETEX_TANGEN			(char*)0+3*(sizeof(Vector3))
#define VETEX_UV				(char*)0+4*(sizeof(Vector3))

// define type of Models
#define NONE					111 
#define RAW						222 
#define NFG						333

#ifdef WIN32

#define FSCANF fscanf

#elif ANDROID

#define FSCANF fscanf

#endif

// for debug game

#ifdef WIN32 

#define LOGI(...) printf(__VA_ARGS__);
#define LOGE(...) printf(__VA_ARGS__);
#define LOGV(...) printf(__VA_ARGS__);
#define LOGD(...) printf(__VA_ARGS__);
#define LOGW(...) printf(__VA_ARGS__);
#define LOGF(...) printf(__VA_ARGS__);

#elif ANDROID

#include <android/log.h>
#define  LOG_TAG    "CUONG.NV"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#define LOGV(...) __android_log_print(ANDROID_LOG_VERBOSE, LOG_TAG, __VA_ARGS__)
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG, LOG_TAG, __VA_ARGS__)
#define LOGW(...) __android_log_print(ANDROID_LOG_WARN, LOG_TAG, __VA_ARGS__)
#define LOGF(...) __android_log_print(ANDROID_LOG_FATAL, LOG_TAG, __VA_ARGS__)

#endif

/*
#ifndef GAME_DEBUG
#define LOGI(...) 
#define LOGE(...) 
#define LOGV(...) 
#define LOGD(...) 
#define LOGW(...) 
#define LOGF(...) 
#endif
*/

// KEY define 
#ifdef WIN32

#define KEY_BACK				27	// key Esc
#define KEY_LEFT				37	// key <-
#define KEY_RIGHT				39	// key ->
#define KEY_UP					38	// key |
#define KEY_DOWN				40	// key |
#define KEY_MOVE_LEFT			65	// key a
#define KEY_MOVE_RIGHT			68	// key d
#define KEY_MOVE_FORWORD		87	// key w
#define KEY_MOVE_BACKWORD		83	// key s

#define MOVE_LEFT				1
#define MOVE_RIGHT				1<<1
#define MOVE_DOWN				1<<2
#define MOVE_UP					1<<3
#define MOVE_LEFT_UP			9
#define MOVE_LEFT_DOWN			5
#define MOVE_RIGHT_UP			10
#define MOVE_RIGHT_DOWN			6

#elif ANDROID

#define KEY_BACK				27	// key Esc
#define KEY_LEFT				37	// key <-
#define KEY_RIGHT				39	// key ->
#define KEY_UP					38	// key |
#define KEY_DOWN				40	// key |
#define KEY_MOVE_LEFT			65	// key a
#define KEY_MOVE_RIGHT			68	// key d
#define KEY_MOVE_FORWORD		87	// key w
#define KEY_MOVE_BACKWORD		83	// key s

#endif
