#include "CBaseEntity.h"

#pragma pack(push,1)
	class CEnvProjectedTexture : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x40];
		int    	m_hTargetEntity; // 0x63c
		int    	m_bState; // 0x640
		float  	m_flLightFOV; // 0x644
		int    	m_bEnableShadows; // 0x648
		int    	m_bLightOnlyTarget; // 0x649
		int    	m_bLightWorld; // 0x64a
		int    	m_bCameraSpace; // 0x64b
		vector3	m_LinearFloatLightColor; // 0x64c
		float  	m_flAmbient; // 0x658
		float  	m_flNearZ; // 0x65c
		float  	m_flFarZ; // 0x660
		char*  	m_SpotlightTextureName; // 0x664
		unsigned char _0x668[0x100];
		int    	m_nSpotlightTextureFrame; // 0x768
		int    	m_nShadowQuality; // 0x76c
	};
#pragma pack(pop)
