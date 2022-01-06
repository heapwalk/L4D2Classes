#include "CBaseCombatCharacter.h"
#include "CLocal.h"
#include "CPlayerState.h"

#pragma pack(push,1)
	class CBasePlayer : 
		 public CBaseCombatCharacter // 0x1088
	{
	public:
		int    	m_nNextThinkTick; // 0xe8
		int    	m_iHealth; // 0xec
		int    	m_fFlags; // 0xf0
		float  	m_vecViewOffset_0; // 0xf4
		float  	m_vecViewOffset_1; // 0xf8
		float  	m_vecViewOffset_2; // 0xfc
		float  	m_vecVelocity_0; // 0x100
		float  	m_vecVelocity_1; // 0x104
		float  	m_vecVelocity_2; // 0x108
		vector3	m_vecBaseVelocity; // 0x10c
		unsigned char _0x118[0x18];
		float  	m_flFriction; // 0x130
		unsigned char _0x134[0x8];
		int    	m_hGroundEntity; // 0x13c
		unsigned char _0x140[0x6];
		int    	m_nWaterLevel; // 0x146
		int    	m_lifeState; // 0x147
		unsigned char _0x14b[0xdd9];
		int    	m_iAmmo[32]; // 0xf24
		unsigned char _0xfa4[0x200];
		CLocal	m_Local; // 0x11a4
		unsigned char _0x1374[0x4];
		int    	m_hTonemapController; // 0x1378
		CPlayerState	pl; // 0x137c
		unsigned char _0x1384[0xc];
		int    	m_iFOV; // 0x1390
		int    	m_iFOVStart; // 0x1394
		unsigned char _0x1398[0x14];
		int    	m_ladderSurfaceProps; // 0x13ac
		unsigned char _0x13b0[0x4];
		float  	m_flFOVTime; // 0x13b4
		unsigned char _0x13b8[0x10];
		vector3	m_vecLadderNormal; // 0x13c8
		unsigned char _0x13d4[0x24];
		int    	m_iBonusProgress; // 0x13f8
		int    	m_iBonusChallenge; // 0x13fc
		float  	m_flMaxspeed; // 0x1400
		int    	m_hZoomOwner; // 0x1404
		int    	m_hVehicle; // 0x1408
		int    	m_hLastWeapon; // 0x140c
		int    	m_hViewModel_0; // 0x1410
		unsigned char _0x1414[0x4];
		int    	m_fOnTarget; // 0x1418
		int    	m_iDefaultFOV; // 0x141c
		unsigned char _0x1420[0xc];
		int    	m_hViewEntity; // 0x142c
		int    	m_hConstraintEntity; // 0x1430
		vector3	m_vecConstraintCenter; // 0x1434
		float  	m_flConstraintRadius; // 0x1440
		float  	m_flConstraintWidth; // 0x1444
		float  	m_flConstraintSpeedFactor; // 0x1448
		int    	m_bConstraintPastRadius; // 0x144c
		int    	m_iObserverMode; // 0x1450
		int    	m_hObserverTarget; // 0x1454
		unsigned char _0x1458[0x1c];
		float  	m_flDeathTime; // 0x1474
		int    	m_hElevator; // 0x1478
		unsigned char _0x147c[0x4];
		int    	m_hUseEntity; // 0x1480
		unsigned char _0x1484[0x48];
		int    	m_nTickBase; // 0x14cc
		unsigned char _0x14d0[0x154];
		float  	m_flLaggedMovementValue; // 0x1624
		unsigned char _0x1628[0x1c];
		char*  	m_szLastPlaceName; // 0x1644
		unsigned char _0x1648[0x20];
		int    	m_ubEFNoInterpParity; // 0x1668
		unsigned char _0x166c[0x194];
		int    	m_hPostProcessCtrl; // 0x1800
		int    	m_hColorCorrectionCtrl; // 0x1804
		unsigned char _0x1808[0x4];
		int    	m_PlayerFog_m_hCtrl; // 0x180c
	};
#pragma pack(pop)
