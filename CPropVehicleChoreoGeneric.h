#include "CDynamicProp.h"

#pragma pack(push,1)
	class CPropVehicleChoreoGeneric : 
		 public CDynamicProp // 0x964
	{
	public:
		unsigned char _0x964[0x20];
		int    	m_hPlayer; // 0x984
		unsigned char _0x988[0x4];
		int    	m_bEnterAnimOn; // 0x98c
		int    	m_bExitAnimOn; // 0x98d
		vector3	m_vecEyeExitEndpoint; // 0x990
		unsigned char _0x99c[0x80];
		int    	m_vehicleView_bClampEyeAngles; // 0xa1c
		float  	m_vehicleView_flPitchCurveZero; // 0xa20
		float  	m_vehicleView_flPitchCurveLinear; // 0xa24
		float  	m_vehicleView_flRollCurveZero; // 0xa28
		float  	m_vehicleView_flRollCurveLinear; // 0xa2c
		float  	m_vehicleView_flFOV; // 0xa30
		float  	m_vehicleView_flYawMin; // 0xa34
		float  	m_vehicleView_flYawMax; // 0xa38
		float  	m_vehicleView_flPitchMin; // 0xa3c
		float  	m_vehicleView_flPitchMax; // 0xa40
	};
#pragma pack(pop)
