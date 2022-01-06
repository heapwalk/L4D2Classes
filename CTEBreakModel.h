#include "CBaseTempEntity.h"

#pragma pack(push,1)
	class CTEBreakModel : 
		 public CBaseTempEntity // 0x0
	{
	public:
		unsigned char _0x0[0x10];
		vector3	m_vecOrigin; // 0x10
		float  	m_angRotation_0; // 0x1c
		float  	m_angRotation_1; // 0x20
		float  	m_angRotation_2; // 0x24
		vector3	m_vecSize; // 0x28
		vector3	m_vecVelocity; // 0x34
		int    	m_nRandomization; // 0x40
		int    	m_nModelIndex; // 0x44
		int    	m_nCount; // 0x48
		float  	m_fTime; // 0x4c
		int    	m_nFlags; // 0x50
	};
#pragma pack(pop)
