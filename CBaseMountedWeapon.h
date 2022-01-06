#include "CDynamicProp.h"

#pragma pack(push,1)
	class CBaseMountedWeapon : 
		 public CDynamicProp // 0x964
	{
	public:
		unsigned char _0x964[0x1c];
		int    	m_owner; // 0x980
		float  	m_maxYaw; // 0x984
		float  	m_maxPitch; // 0x988
		float  	m_minPitch; // 0x98c
		int    	m_firing; // 0x990
		int    	m_overheated; // 0x991
		float  	m_heat; // 0x994
		vector3	m_initialAngles; // 0x998
	};
#pragma pack(pop)
