#include "CBreakable.h"

#pragma pack(push,1)
	class CBreakableSurface : 
		 public CBreakable // 0x0
	{
	public:
		unsigned char _0x0[0x63c];
		int    	m_nNumWide; // 0x63c
		int    	m_nNumHigh; // 0x640
		float  	m_flPanelWidth; // 0x644
		float  	m_flPanelHeight; // 0x648
		vector3	m_vNormal; // 0x64c
		vector3	m_vCorner; // 0x658
		int    	m_bIsBroken; // 0x664
		int    	m_nSurfaceType; // 0x668
		unsigned char _0x66c[0x20];
		bool   	m_RawPanelBitVec[256]; // 0x68c
		unsigned char _0x78c[0x2dc];
		int    	m_noGhostCollision; // 0xa68
	};
#pragma pack(pop)
