#include "CTerrorWeapon.h"
#include "CCountdownTimer.h"

#pragma pack(push,1)
	class CTerrorMeleeWeapon : 
		 public CTerrorWeapon // 0xcc0
	{
	public:
		unsigned char _0xcc0[0x2c];
		int    	m_hMeleeWeaponInfo; // 0xcec
		unsigned char _0xcf0[0x18];
		int    	m_iNextPrimaryAttackIndex; // 0xd08
		int    	m_iNextStrongAttackIndex; // 0xd0c
		int    	m_iNextSecondaryAttackIndex; // 0xd10
		int    	m_bInMeleeSwing; // 0xd14
		CCountdownTimer	m_meleeSwingTimer; // 0xd18
		unsigned char _0xd24[0x14];
		float  	m_flLastAttackTime; // 0xd38
	};
#pragma pack(pop)
