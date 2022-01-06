#include "CCountdownTimer.h"
#include "CIntervalTimer.h"
#include "CCountdownTimer.h"

#pragma pack(push,1)
	class CTerrorLocalPlayerExclusive
	{
	public:
		bool   	m_yardLineAngles[1]; // 0x0
		unsigned char _0x0[0x1c30];
		CCountdownTimer	m_noAvoidanceTimer; // 0x1c30
		unsigned char _0x1c3c[0x5c];
		int    	m_isCulling; // 0x1c98
		int    	m_isRelocating; // 0x1c99
		int    	m_ghostSpawnState; // 0x1c9c
		int    	m_ghostSpawnClockMaxDelay; // 0x1ca0
		int    	m_ghostSpawnClockCurrentDelay; // 0x1ca4
		float  	m_flNextShoveTime; // 0x1ca8
		int    	m_iShovePenalty; // 0x1cac
		unsigned char _0x1cb0[0x4];
		vector3	m_scrimmageSphereCenter; // 0x1cb4
		float  	m_scrimmageSphereInitialRadius; // 0x1cc0
		float  	m_scrimmageStartTime; // 0x1cc4
		float  	m_survivorsLineOfScrimmageDistance; // 0x1cc8
		unsigned char _0x1ccc[0x4];
		vector3	m_lineOfScrimmagePos; // 0x1cd0
		vector3	m_lineOfScrimmageAngle; // 0x1cdc
		unsigned char _0x1ce8[0x14];
		vector3	m_rearLineOfScrimmagePos; // 0x1cfc
		vector3	m_rearLineOfScrimmageAngle; // 0x1d08
		unsigned char _0x1d14[0x14];
		vector3	m_yardLinePos_0; // 0x1d28
		unsigned char _0x1d34[0x30];
		vector3	m_yardLineAngles_0; // 0x1d64
		unsigned char _0x1d70[0x138];
		int    	m_isInMissionStartArea; // 0x1ea8
		vector3	m_shoveForce; // 0x1eac
		int    	m_airMovementRestricted; // 0x1eb8
		unsigned char _0x1ebc[0xc];
		int    	m_isAutoCrouchEnabled; // 0x1ec8
		CIntervalTimer	m_autoCrouchTimer; // 0x1ecc
		unsigned char _0x1ed4[0x4];
		CCountdownTimer	m_stunTimer; // 0x1ed8
		unsigned char _0x1ee4[0xb0];
		int    	m_dragTarget; // 0x1f94
		unsigned char _0x1f98[0x8];
		int    	m_pushEntity; // 0x1fa0
		float  	m_pushDistance; // 0x1fa4
		unsigned char _0x1fa8[0x650];
		int    	m_nVariantType; // 0x25f8
		float  	m_TimeForceExternalView; // 0x25fc
	};
#pragma pack(pop)
