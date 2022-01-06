#include "CWeaponCSBase.h"
#include "CIntervalTimer.h"
#include "CCountdownTimer.h"
#include "CIntervalTimer.h"
#include "CCountdownTimer.h"
#include "CCountdownTimer.h"

#pragma pack(push,1)
	class CTerrorWeapon : 
		 public CWeaponCSBase // 0xa2c
	{
	public:
		unsigned char _0xa2c[0x10];
		CIntervalTimer	m_helpingHandTimer; // 0xa3c
		int    	m_helpingHandState; // 0xa44
		int    	m_helpingHandTarget; // 0xa48
		float  	m_helpingHandExtendDuration; // 0xa4c
		unsigned char _0xa50[0x4];
		float  	m_reloadQueuedStartTime; // 0xa54
		int    	m_releasedAltFireButton; // 0xa58
		int    	m_releasedFireButton; // 0xa59
		int    	m_isHoldingFireButton; // 0xa5a
		int    	m_isHoldingAltFireButton; // 0xa5b
		int    	m_iBloodyWeaponLevel; // 0xa5c
		int    	m_bPickedUpOnTransition; // 0xa60
		CCountdownTimer	m_helpingHandSuppressionTimer; // 0xa64
		CIntervalTimer	m_helpingHandTargetTimer; // 0xa70
		unsigned char _0xa78[0x4];
		CCountdownTimer	m_attackTimer; // 0xa7c
		CCountdownTimer	m_swingTimer; // 0xa88
		unsigned char _0xa94[0x224];
		int    	m_nUpgradedPrimaryAmmoLoaded; // 0xcb8
		int    	m_DroppedByInfectedGender; // 0xcbc
	};
#pragma pack(pop)
