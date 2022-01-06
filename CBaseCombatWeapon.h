#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CBaseCombatWeapon : 
		 public CBaseAnimating // 0x930
	{
	public:
		int    	m_nNextThinkTick; // 0xe8
		unsigned char _0xec[0x86c];
		int    	m_hOwner; // 0x958
		int    	m_nViewModelIndex; // 0x95c
		float  	m_flNextPrimaryAttack; // 0x960
		float  	m_flNextSecondaryAttack; // 0x964
		int    	m_nQueuedAttack; // 0x968
		float  	m_flTimeAttackQueued; // 0x96c
		int    	m_iViewModelIndex; // 0x970
		int    	m_iWorldModelIndex; // 0x974
		int    	m_iState; // 0x978
		int    	m_iPrimaryAmmoType; // 0x97c
		int    	m_iSecondaryAmmoType; // 0x980
		int    	m_iClip1; // 0x984
		int    	m_iClip2; // 0x988
		int    	m_bOnlyPump; // 0x98c
		float  	m_flTimeWeaponIdle; // 0x990
		unsigned char _0x994[0x29];
		int    	m_bInReload; // 0x9bd
	};
#pragma pack(pop)
