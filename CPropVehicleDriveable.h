#include "CBaseAnimating.h"

#pragma pack(push,1)
	class CPropVehicleDriveable : 
		 public CBaseAnimating // 0x930
	{
	public:
		unsigned char _0x930[0x2c];
		int    	m_hPlayer; // 0x95c
		int    	m_nSpeed; // 0x960
		int    	m_nRPM; // 0x964
		float  	m_flThrottle; // 0x968
		int    	m_nBoostTimeLeft; // 0x96c
		int    	m_nHasBoost; // 0x970
		int    	m_nScannerDisabledWeapons; // 0x974
		int    	m_nScannerDisabledVehicle; // 0x978
		unsigned char _0x97c[0x1c];
		int    	m_bEnterAnimOn; // 0x998
		int    	m_bExitAnimOn; // 0x999
		unsigned char _0x99d[0x3];
		vector3	m_vecGunCrosshair; // 0x9a0
		unsigned char _0x9ac[0x2c];
		vector3	m_vecEyeExitEndpoint; // 0x9d8
		int    	m_bHasGun; // 0x9e4
		int    	m_bUnableToFire; // 0x9e5
	};
#pragma pack(pop)
