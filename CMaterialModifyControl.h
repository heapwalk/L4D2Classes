#include "CBaseEntity.h"

#pragma pack(push,1)
	class CMaterialModifyControl : 
		 public CBaseEntity // 0x5fc
	{
	public:
		unsigned char _0x5fc[0x3c];
		char*  	m_szMaterialName; // 0x638
		unsigned char _0x63c[0xfb];
		char*  	m_szMaterialVar; // 0x737
		unsigned char _0x73b[0xfb];
		char*  	m_szMaterialVarValue; // 0x836
		unsigned char _0x83a[0x106];
		int    	m_iFrameStart; // 0x940
		int    	m_iFrameEnd; // 0x944
		int    	m_bWrap; // 0x948
		float  	m_flFramerate; // 0x94c
		int    	m_bNewAnimCommandsSemaphore; // 0x950
		float  	m_flFloatLerpStartValue; // 0x954
		float  	m_flFloatLerpEndValue; // 0x958
		float  	m_flFloatLerpTransitionTime; // 0x95c
		int    	m_bFloatLerpWrap; // 0x960
		unsigned char _0x964[0x4];
		int    	m_nModifyMode; // 0x968
	};
#pragma pack(pop)
